//
// Created by dp on 16-2-13.
//

#include "myFunction.h"
void myFunction(const Nan::FunctionCallbackInfo<v8::Value>& info){
    info.GetReturnValue().Set(Nan::New("calling myFunction").ToLocalChecked());
}