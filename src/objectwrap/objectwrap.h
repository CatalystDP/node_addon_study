//
// Created by DP on 2016/7/31.
//

#ifndef NODE_ADDON_STUDY_OBJECTWRAP_H
#define NODE_ADDON_STUDY_OBJECTWRAP_H

#include "nan.h"
#include <iostream>
class MyObject:public Nan::ObjectWrap{
public:
    MyObject();
    virtual ~MyObject();
    static void Hello(){
        std::cout<<"hello"<<std::endl;
    }
    static void Init(v8::Local<v8::Object>);
    static void New(const Nan::FunctionCallbackInfo<v8::Value>&);

private:
};
#endif //NODE_ADDON_STUDY_OBJECTWRAP_H
