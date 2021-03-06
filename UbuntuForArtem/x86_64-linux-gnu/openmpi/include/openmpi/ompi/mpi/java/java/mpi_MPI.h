/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class mpi_MPI */

#ifndef _Included_mpi_MPI
#define _Included_mpi_MPI
#ifdef __cplusplus
extern "C" {
#endif
#undef mpi_MPI_MAX_PROCESSOR_NAME
#define mpi_MPI_MAX_PROCESSOR_NAME 256L
/*
 * Class:     mpi_MPI
 * Method:    newInt2
 * Signature: ()Lmpi/Int2;
 */
JNIEXPORT jobject JNICALL Java_mpi_MPI_newInt2
  (JNIEnv *, jclass);

/*
 * Class:     mpi_MPI
 * Method:    newShortInt
 * Signature: ()Lmpi/ShortInt;
 */
JNIEXPORT jobject JNICALL Java_mpi_MPI_newShortInt
  (JNIEnv *, jclass);

/*
 * Class:     mpi_MPI
 * Method:    newLongInt
 * Signature: ()Lmpi/LongInt;
 */
JNIEXPORT jobject JNICALL Java_mpi_MPI_newLongInt
  (JNIEnv *, jclass);

/*
 * Class:     mpi_MPI
 * Method:    newFloatInt
 * Signature: ()Lmpi/FloatInt;
 */
JNIEXPORT jobject JNICALL Java_mpi_MPI_newFloatInt
  (JNIEnv *, jclass);

/*
 * Class:     mpi_MPI
 * Method:    newDoubleInt
 * Signature: ()Lmpi/DoubleInt;
 */
JNIEXPORT jobject JNICALL Java_mpi_MPI_newDoubleInt
  (JNIEnv *, jclass);

/*
 * Class:     mpi_MPI
 * Method:    initVersion
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_mpi_MPI_initVersion
  (JNIEnv *, jclass);

/*
 * Class:     mpi_MPI
 * Method:    Init_jni
 * Signature: ([Ljava/lang/String;)[Ljava/lang/String;
 */
JNIEXPORT jobjectArray JNICALL Java_mpi_MPI_Init_1jni
  (JNIEnv *, jclass, jobjectArray);

/*
 * Class:     mpi_MPI
 * Method:    InitThread_jni
 * Signature: ([Ljava/lang/String;I)I
 */
JNIEXPORT jint JNICALL Java_mpi_MPI_InitThread_1jni
  (JNIEnv *, jclass, jobjectArray, jint);

/*
 * Class:     mpi_MPI
 * Method:    queryThread_jni
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_mpi_MPI_queryThread_1jni
  (JNIEnv *, jclass);

/*
 * Class:     mpi_MPI
 * Method:    isThreadMain_jni
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_mpi_MPI_isThreadMain_1jni
  (JNIEnv *, jclass);

/*
 * Class:     mpi_MPI
 * Method:    Finalize_jni
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_mpi_MPI_Finalize_1jni
  (JNIEnv *, jclass);

/*
 * Class:     mpi_MPI
 * Method:    wtime_jni
 * Signature: ()D
 */
JNIEXPORT jdouble JNICALL Java_mpi_MPI_wtime_1jni
  (JNIEnv *, jclass);

/*
 * Class:     mpi_MPI
 * Method:    wtick_jni
 * Signature: ()D
 */
JNIEXPORT jdouble JNICALL Java_mpi_MPI_wtick_1jni
  (JNIEnv *, jclass);

/*
 * Class:     mpi_MPI
 * Method:    getVersionJNI
 * Signature: ()Lmpi/Version;
 */
JNIEXPORT jobject JNICALL Java_mpi_MPI_getVersionJNI
  (JNIEnv *, jclass);

/*
 * Class:     mpi_MPI
 * Method:    getLibVersionJNI
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_mpi_MPI_getLibVersionJNI
  (JNIEnv *, jclass);

/*
 * Class:     mpi_MPI
 * Method:    getProcessorName
 * Signature: ([B)I
 */
JNIEXPORT jint JNICALL Java_mpi_MPI_getProcessorName
  (JNIEnv *, jclass, jbyteArray);

/*
 * Class:     mpi_MPI
 * Method:    isInitialized
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_mpi_MPI_isInitialized
  (JNIEnv *, jclass);

/*
 * Class:     mpi_MPI
 * Method:    isFinalized
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_mpi_MPI_isFinalized
  (JNIEnv *, jclass);

/*
 * Class:     mpi_MPI
 * Method:    attachBuffer_jni
 * Signature: ([B)V
 */
JNIEXPORT void JNICALL Java_mpi_MPI_attachBuffer_1jni
  (JNIEnv *, jclass, jbyteArray);

/*
 * Class:     mpi_MPI
 * Method:    detachBuffer_jni
 * Signature: ([B)V
 */
JNIEXPORT void JNICALL Java_mpi_MPI_detachBuffer_1jni
  (JNIEnv *, jclass, jbyteArray);

#ifdef __cplusplus
}
#endif
#endif
