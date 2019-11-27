#include <jvmti.h>
#include<stdio.h>
#include "_cgo_export.h"

JNIEXPORT jint JNICALL Agent_OnLoad(JavaVM *jvm, char *options, void *reserved) {
    goAgent_onLoad(jvm);
    return JNI_OK;
}

const jint cagent_DestroyJvm(JavaVM *jvm) {
    return (*jvm)->DestroyJavaVM(jvm);
}