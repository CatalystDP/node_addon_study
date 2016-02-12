/**
 * Created by dp on 16-2-12.
 */
var funcarg=require('../build/bin/function_arguments/libfuncargs.node');
funcarg.needCallback(function(str){
   console.log(str);
});
var obj=funcarg.createObject("1234568");
console.log(obj);
var fn=funcarg.createFunction();
console.log(fn());