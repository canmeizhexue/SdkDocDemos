//
// Created by zengyaping on 2017-3-30.
//
#include <jni.h>
#include <string>

extern "C"
JNIEXPORT jstring JNICALL
Java_com_canmeizhexue_projectaddcsupprot_MainActivity_stringFromJNI(
        JNIEnv *env,
        jobject /* this */) {
    std::string hello = "我是在现有项目的基础上添加C++支持的啦";
    return env->NewStringUTF(hello.c_str());
}

