//
// Created by DP on 2016/7/31.
//
#include "./objectwrap.h"
void Init(v8::Local<v8::Object> target){
    MyObject::Init(target);
}
NODE_MODULE(objectwrap,Init)