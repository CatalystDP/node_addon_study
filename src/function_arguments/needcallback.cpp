//
// Created by DP on 2016/7/31.
//
#include "needcallback.h"
void needCallback(const Nan::FunctionCallbackInfo<v8::Value>& info){
    Nan::HandleScope scope;
    v8::Local<v8::Function> cb;
    if(info[0]->IsFunction()){
        cb=info[0].As<v8::Function>();
        v8::Local<v8::Value> argv[1]={
                v8::String::NewFromUtf8(Nan::GetCurrentContext()->GetIsolate(),"receive callback")
        };
        Nan::MakeCallback(Nan::GetCurrentContext()->Global(),cb,1,argv);
    }else{
        //抛出js异常

    }
}