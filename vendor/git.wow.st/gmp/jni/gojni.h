#ifndef __ANDROID_API__
__attribute__ ((visibility ("hidden"))) JavaVM *_jni_CreateJavaVM(const char **options, int nOptions);
#endif /* __ANDROID_API__ */

__attribute__ ((visibility ("hidden"))) jint _jni_GetEnv(JavaVM *vm, JNIEnv **env, jint version);
__attribute__ ((visibility ("hidden"))) jint _jni_AttachCurrentThread(JavaVM *vm, JNIEnv **p_env, void *thr_args);
__attribute__ ((visibility ("hidden"))) jint _jni_DetachCurrentThread(JavaVM *vm);
__attribute__ ((visibility ("hidden"))) jclass _jni_FindClass(JNIEnv *env, const char *name);
__attribute__ ((visibility ("hidden"))) jthrowable _jni_ExceptionOccurred(JNIEnv *env);
__attribute__ ((visibility ("hidden"))) void _jni_ExceptionClear(JNIEnv *env);
__attribute__ ((visibility ("hidden"))) jclass _jni_GetObjectClass(JNIEnv *env, jobject obj);
__attribute__ ((visibility ("hidden"))) jmethodID _jni_GetMethodID(JNIEnv *env, jclass clazz, const char *name, const char *sig);
__attribute__ ((visibility ("hidden"))) jmethodID _jni_GetStaticMethodID(JNIEnv *env, jclass clazz, const char *name, const char *sig);
__attribute__ ((visibility ("hidden"))) jfieldID _jni_GetFieldID(JNIEnv *env, jclass clazz, const char *name, const char *sig);
__attribute__ ((visibility ("hidden"))) jfieldID _jni_GetStaticFieldID(JNIEnv *env, jclass clazz, const char *name, const char *sig);
__attribute__ ((visibility ("hidden"))) jsize _jni_GetStringLength(JNIEnv *env, jstring str);
__attribute__ ((visibility ("hidden"))) const jchar *_jni_GetStringChars(JNIEnv *env, jstring str);
__attribute__ ((visibility ("hidden"))) jstring _jni_NewString(JNIEnv *env, const jchar *unicodeChars, jsize len);
__attribute__ ((visibility ("hidden"))) jboolean _jni_IsSameObject(JNIEnv *env, jobject ref1, jobject ref2);
__attribute__ ((visibility ("hidden"))) jboolean _jni_IsInstanceOf(JNIEnv *env, jobject obj, jclass cls);
__attribute__ ((visibility ("hidden"))) jobject _jni_NewGlobalRef(JNIEnv *env, jobject obj);
__attribute__ ((visibility ("hidden"))) void _jni_DeleteGlobalRef(JNIEnv *env, jobject obj);
__attribute__ ((visibility ("hidden"))) jobject _jni_NewLocalRef(JNIEnv *env, jobject obj);
__attribute__ ((visibility ("hidden"))) void _jni_DeleteLocalRef(JNIEnv *env, jobject obj);
__attribute__ ((visibility ("hidden"))) jint _jni_CallStaticIntMethodA(JNIEnv *env, jclass cls, jmethodID method, jvalue *args);
__attribute__ ((visibility ("hidden"))) jboolean _jni_CallStaticBooleanMethodA(JNIEnv *env, jclass cls, jmethodID method, jvalue *args);
__attribute__ ((visibility ("hidden"))) jobject _jni_CallStaticObjectMethodA(JNIEnv *env, jclass cls, jmethodID method, jvalue *args);
__attribute__ ((visibility ("hidden"))) jobject _jni_NewObjectA(JNIEnv *env, jclass cls, jmethodID method, jvalue *args);
__attribute__ ((visibility ("hidden"))) void _jni_CallStaticVoidMethodA(JNIEnv *env, jclass cls, jmethodID method, jvalue *args);
__attribute__ ((visibility ("hidden"))) jobject _jni_CallObjectMethodA(JNIEnv *env, jobject obj, jmethodID method, jvalue *args);
__attribute__ ((visibility ("hidden"))) jint _jni_CallIntMethodA(JNIEnv *env, jobject obj, jmethodID method, jvalue *args);
__attribute__ ((visibility ("hidden"))) void _jni_CallVoidMethodA(JNIEnv *env, jobject obj, jmethodID method, jvalue *args);
__attribute__ ((visibility ("hidden"))) jboolean _jni_CallBooleanMethodA(JNIEnv *env, jobject obj, jmethodID method, jvalue *args);
__attribute__ ((visibility ("hidden"))) jbyte _jni_CallByteMethodA(JNIEnv *env, jobject obj, jmethodID method, jvalue *args);
__attribute__ ((visibility ("hidden"))) jchar _jni_CallCharMethodA(JNIEnv *env, jobject obj, jmethodID method, jvalue *args);
__attribute__ ((visibility ("hidden"))) jshort _jni_CallShortMethodA(JNIEnv *env, jobject obj, jmethodID method, jvalue *args);
__attribute__ ((visibility ("hidden"))) jlong _jni_CallLongMethodA(JNIEnv *env, jobject obj, jmethodID method, jvalue *args);
__attribute__ ((visibility ("hidden"))) jfloat _jni_CallFloatMethodA(JNIEnv *env, jobject obj, jmethodID method, jvalue *args);
__attribute__ ((visibility ("hidden"))) jdouble _jni_CallDoubleMethodA(JNIEnv *env, jobject obj, jmethodID method, jvalue *args);
__attribute__ ((visibility ("hidden"))) jbyteArray _jni_NewByteArray(JNIEnv *env, jsize length);
__attribute__ ((visibility ("hidden"))) jobjectArray _jni_NewObjectArray(JNIEnv *env, jsize length, jclass elementClass, jobject initialElement);
__attribute__ ((visibility ("hidden"))) jobject _jni_GetObjectArrayElement(JNIEnv *env, jobjectArray array, jsize index);
__attribute__ ((visibility ("hidden"))) void _jni_SetObjectArrayElement(JNIEnv *env, jobjectArray array, jsize index, jobject value);
__attribute__ ((visibility ("hidden"))) jbyte *_jni_GetByteArrayElements(JNIEnv *env, jbyteArray arr);
__attribute__ ((visibility ("hidden"))) void _jni_ReleaseByteArrayElements(JNIEnv *env, jbyteArray arr, jbyte *elems, jint mode);
__attribute__ ((visibility ("hidden"))) jsize _jni_GetArrayLength(JNIEnv *env, jarray arr);
__attribute__ ((visibility ("hidden"))) jobject _jni_GetStaticObjectField(JNIEnv *env, jclass clazz, jfieldID fieldID);
__attribute__ ((visibility ("hidden"))) jboolean _jni_GetStaticBooleanField(JNIEnv *env, jclass clazz, jfieldID fieldID);
__attribute__ ((visibility ("hidden"))) jbyte _jni_GetStaticByteField(JNIEnv *env, jclass clazz, jfieldID fieldID);
__attribute__ ((visibility ("hidden"))) jchar _jni_GetStaticCharField(JNIEnv *env, jclass clazz, jfieldID fieldID);
__attribute__ ((visibility ("hidden"))) jshort _jni_GetStaticShortField(JNIEnv *env, jclass clazz, jfieldID fieldID);
__attribute__ ((visibility ("hidden"))) jint _jni_GetStaticIntField(JNIEnv *env, jclass clazz, jfieldID fieldID);
__attribute__ ((visibility ("hidden"))) jlong _jni_GetStaticLongField(JNIEnv *env, jclass clazz, jfieldID fieldID);
__attribute__ ((visibility ("hidden"))) jfloat _jni_GetStaticFloatField(JNIEnv *env, jclass clazz, jfieldID fieldID);
__attribute__ ((visibility ("hidden"))) jdouble _jni_GetStaticDoubleField(JNIEnv *env, jclass clazz, jfieldID fieldID);
__attribute__ ((visibility ("hidden"))) jobject _jni_GetObjectField(JNIEnv *env, jobject obj, jfieldID fieldID);
__attribute__ ((visibility ("hidden"))) jboolean _jni_GetBooleanField(JNIEnv *env, jobject obj, jfieldID fieldID);
__attribute__ ((visibility ("hidden"))) jbyte _jni_GetByteField(JNIEnv *env, jobject obj, jfieldID fieldID);
__attribute__ ((visibility ("hidden"))) jchar _jni_GetCharField(JNIEnv *env, jobject obj, jfieldID fieldID);
__attribute__ ((visibility ("hidden"))) jshort _jni_GetShortField(JNIEnv *env, jobject obj, jfieldID fieldID);
__attribute__ ((visibility ("hidden"))) jint _jni_GetIntField(JNIEnv *env, jobject obj, jfieldID fieldID);
__attribute__ ((visibility ("hidden"))) jlong _jni_GetLongField(JNIEnv *env, jobject obj, jfieldID fieldID);
__attribute__ ((visibility ("hidden"))) jfloat _jni_GetFloatField(JNIEnv *env, jobject obj, jfieldID fieldID);
__attribute__ ((visibility ("hidden"))) jdouble _jni_GetDoubleField(JNIEnv *env, jobject obj, jfieldID fieldID);
