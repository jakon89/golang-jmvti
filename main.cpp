//#include "jvmti.h"
//#include <iostream>
//#include "_cgo_export.h"
//
//JNIEXPORT jint JNICALL Agent_OnLoad(JavaVM *jvm, char *options, void *reserved) {
//    dupa(jvm);
//    std::cout << "JVMTIGetSystemProperties :: Agent Initiated!!";
//    jvmtiEnv *jvmti;
//    jvmtiError error;
//    jint result;
//    jint count = 0;
//    char **props;
//
//    result = jvm->GetEnv((void **) &jvmti, JVMTI_VERSION_1_2);
//
//    if (result != JNI_OK) {
//        std::cerr << "Unable to access JVMTI!!!";
//    }
//
//    error = jvmti->GetSystemProperties(&count, &props);
//    if (error != JVMTI_ERROR_NONE) return JNI_FALSE;
//
//    std::cout << "JVMTI Agent (System Property) \n";
//    for (int i = 0; i < count; i++) {
//        char *value;
//        error = jvmti->GetSystemProperty(props[i], &value);
//        if (error != JVMTI_ERROR_NONE) return JNI_FALSE;
//        std::cout << props[i] << " = " << value << "\n";
//    }
//    return JNI_OK;
//}