#include "createfunc.h"
void createFunction(const Nan::FunctionCallbackInfo<v8::Value>& info){
    Nan::HandleScope scope;
    v8::Local<v8::FunctionTemplate> tpl=Nan::New<v8::FunctionTemplate>(myFunction);//创建js函数模板
    v8::Local<v8::Function> fn=tpl->GetFunction();
    fn->SetName(Nan::New("myFunc").ToLocalChecked());
    info.GetReturnValue().Set(fn);
}