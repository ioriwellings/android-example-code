/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
#include <stdio.h>
#include <pthread.h>
/* Header for class com_github_jiahuanyu_example_function_jni_HelloJNIActivity */

#ifndef _Included_com_github_jiahuanyu_example_function_jni_HelloJNIActivity
#define _Included_com_github_jiahuanyu_example_function_jni_HelloJNIActivity
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_github_jiahuanyu_example_function_jni_HelloJNIActivity
 * Method:    stringFromJNI
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_github_jiahuanyu_example_function_jni_HelloJNIActivity_stringFromJNI
  (JNIEnv *, jobject);

/*
 * Class:     com_github_jiahuanyu_example_function_jni_HelloJNIActivity
 * Method:    writeFile
 * Signature: (Ljava/lang/String;)Z
 */
JNIEXPORT jboolean JNICALL Java_com_github_jiahuanyu_example_function_jni_HelloJNIActivity_writeFile
  (JNIEnv *, jobject, jstring);

#ifdef __cplusplus
}
#endif
#endif