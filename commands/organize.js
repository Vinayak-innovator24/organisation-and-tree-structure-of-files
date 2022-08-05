let fs = require("fs");
let path = require("path");

let types_of_file = {
    media: ["mp4", "mkv"],
    archives: ['zip', '7z', 'rar', 'tar', 'gz', 'ar', 'iso', 'xz'],
    documents: ['docx', 'doc', 'pdf', 'xlsx', 'xls', 'odt', 'ods', 'odp', 'odg', 'odf', 'txt', 'ps', 'tex'],
    app: ['exe', 'dmg', 'pkg', 'deb']
}

function organizeFn(dirPath){
    console.log("Organize command implemented for ", dirPath);
    // 1. input -> directory path given

    let destPath;
    if(dirPath == undefined){
        destPath = process.cwd();
        return;
    }

    else{
        let doesExist = fs.existsSync(dirPath);
        if(doesExist){
    //         // 2. create -> organized_files -> directory
            destPath = path.join(dirPath, "organized_files");
            if(fs.existsSync(destPath) == false){
                fs.mkdirSync(destPath);
            }
        }

        else{
            console.log("kindly enter the correct path");
            return;
        }
    }
    organizeHelper(dirPath, destPath);
}

function organizeHelper(src, dest){

    // 3. identify categories of all files present in that input directory
    let children = fs.readdirSync(src);
    // console.log(children);
    for(let i=0;i<children.length;i++){
        let childAddress = path.join(src, children[i]);
        let isFile = fs.lstatSync(childAddress).isFile();
        if(isFile){
            // console.log(children[i]);
            let category = getCategory(children[i]);
            console.log(children[i] + " belongs to " + category);
            // 4. copy/cut files to that organized directory inside of any category folder
            sendFiles(childAddress, dest, category);
        }
    }
}

function sendFiles(srcFilePath, dest, category){

    let categoryPath = path.join(dest, category);
    if(fs.existsSync(categoryPath) == false){
        fs.mkdirSync(categoryPath);
    }

    let fileName = path.basename(srcFilePath);
    let destFilePath = path.join(categoryPath, fileName);

    fs.copyFileSync(srcFilePath, destFilePath);
    // fs.unlinkSync(srcFilePath);
    console.log(fileName + " cut & pasted to " + destFilePath);
}

function getCategory(name){
    let ext = path.extname(name);
    ext = ext.slice(1);
    // console.log(ext);
    for(let type in types_of_file){
        let get_type = types_of_file[type];
        for(let i=0;i<get_type.length;i++){
            if(ext == get_type[i]){
                return type;
            }
        }
    }
    return "others";
}

module.exports = {
    organizeKey: organizeFn
}