#include "./createobject.h"
void createObject(const Nan::FunctionCallbackInfo<v8::Value>& info) {
	Nan::HandleScope scope;
	v8::Local<v8::Object> obj = Nan::New<v8::Object>();
	obj->Set(Nan::New("msg").ToLocalChecked(), info[0]->ToString());
	info.GetReturnValue().Set(obj);
}//