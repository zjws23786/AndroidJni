   #include "com_hh_androidjni_PtlmanerJni.h"

   JNIEXPORT jstring JNICALL Java_com_hh_androidjni_PtlmanerJni_getString
     (JNIEnv *env, jobject jobj){
     return (*env)->NewStringUTF(env, "laohua");
     }