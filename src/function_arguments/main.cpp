//
// Created by dp on 16-2-12.
//

#include "main.h"
#include "createobject.h"
#include "createfunc.h"
#include "needcallback.h"
#include "./object_wrap/objectwrap.h"
#include <string>
NAN_MODULE_INIT(Init){
    NAN_EXPORT(target,needCallback);
    NAN_EXPORT(target,createObject);
    NAN_EXPORT(target,createFunction);
//        MyObject::Init(target);
//    MyObject::Hello();
}//导出函数名称给js调用
NODE_MODULE(funcargs,Init);
