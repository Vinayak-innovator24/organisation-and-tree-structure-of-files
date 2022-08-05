#!/usr/bin/env node

let arr = process.argv.slice(2);
// console.log(arr);

let treeObj = require("./commands/tree");
let organizeObj = require("./commands/organize");
let helpObj = require("./commands/help");
let command = arr[0];

switch(command){
    case "tree":
        treeObj.treeKey(arr[1]);
        break;
    case "organize":
        organizeObj.organizeKey(arr[1]);
        break;
    case "help":
        helpObj.helpKey();
        break;
    default:
        console.log("Please input valid commands");
        break;
}

