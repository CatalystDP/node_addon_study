//
// Created by dp on 16-2-12.
//

#include "main.h"
//#include <string>
void sayHello(const Nan::FunctionCallbackInfo<v8::Value>& info){
//    v8::Local<v8::String> str=info.Data().Cast<v8::String>(info.Data());
    Nan::Utf8String str(info[0]);
//    std::cout<<*str<<std::endl;
//    char* helloStr="hello ";
    std::string hello=std::string("hello ")+std::string(*str);
//    v8::Local<v8::String> helloStr=
//            v8::String::NewFromUtf8(Nan::GetCurrentContext()->GetIsolate(),hello.c_str());
    v8::Local<v8::String> helloStr=Nan::New<v8::String>("hello ").ToLocalChecked();
    info.GetReturnValue().Set(helloStr);
}
NAN_MODULE_INIT(Init){
    NAN_EXPORT(target,sayHello);
}//导出函数名称给js调用
NODE_MODULE(helloworld,Init);
