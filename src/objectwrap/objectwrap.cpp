//
// Created by DP on 2016/7/31.
//
#include "objectwrap.h"

MyObject::MyObject() {}

MyObject::~MyObject() {}
void MyObject::Init(v8::Local<v8::Object> target) {
//    Nan::HandleScope scope;
//    //先从New创建函数模板
//    v8::Local<v8::FunctionTempalte> tpl = Nan::New<v8::FunctionTemplate>(New);
}
void MyObject::New(const Nan::FunctionCallbackInfo<v8::Value> &info) {

}
