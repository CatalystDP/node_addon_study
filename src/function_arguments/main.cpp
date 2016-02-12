//
// Created by dp on 16-2-12.
//

#include "main.h"
#include <string>
void needCallback(const Nan::FunctionCallbackInfo<v8::Value>& info){
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
void createObject(const Nan::FunctionCallbackInfo<v8::Value>& info){
    v8::Local<v8::Object> obj=Nan::New<v8::Object>();
    obj->Set(Nan::New("msg").ToLocalChecked(),info[0]->ToString());
    info.GetReturnValue().Set(obj);
}//创建对象
void createFunction(const Nan::FunctionCallbackInfo<v8::Value>& info){
    v8::Local<v8::FunctionTemplate> tpl=Nan::New<v8::FunctionTemplate>(myFunction);//创建js函数模板
    v8::Local<v8::Function> fn=tpl->GetFunction();
    fn->SetName(Nan::New("myFunc").ToLocalChecked());
    info.GetReturnValue().Set(fn);
}

NAN_MODULE_INIT(Init){
    NAN_EXPORT(target,needCallback);
    NAN_EXPORT(target,createObject);
    NAN_EXPORT(target,createFunction);
}//导出函数名称给js调用
NODE_MODULE(funcargs,Init);
