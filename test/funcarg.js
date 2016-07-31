/**
 * Created by dp on 16-2-12.
 */
"use strict";
let os=require('os');
var funcargsNativePath;
if(os.platform()=='win32'){
   funcargsNativePath='../build/bin/function_arguments/Debug/funcargs.node';
}else{
   funcargsNativePath='../build/bin/function_arguments/libfuncargs.node';
}
var funcarg=require(funcargsNativePath);
funcarg.needCallback(function(str){
   console.log(str);
});
var obj=funcarg.createObject("1234568");
console.log(obj);
var fn=funcarg.createFunction();
console.log(fn());