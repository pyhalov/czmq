/*
################################################################################
#  THIS FILE IS 100% GENERATED BY ZPROJECT; DO NOT EDIT EXCEPT EXPERIMENTALLY  #
#  Please refer to the README for information about making permanent changes.  #
################################################################################
*/
#include <stdio.h>
#include <stdlib.h>
#include <jni.h>
#include "czmq.h"
#include "../../native/include/org_zeromq_czmq_Zfile.h"

JNIEXPORT jlong JNICALL
Java_org_zeromq_czmq_Zfile__1_1init (JNIEnv *env, jclass c, jstring path, jstring name) {
    zfile_t *self = zfile_new (path, name);
    if (self)
        return (jlong) self;
    return -1;
}

JNIEXPORT void JNICALL
Java_org_zeromq_czmq_Zfile__1_1destroy (JNIEnv *env, jclass c, jlong jself) {
    zfile_t *self = (zfile_t *) jself;
    zfile_destroy (&self);
}

JNIEXPORT jlong JNICALL
Java_org_zeromq_czmq_Zfile__1_1dup (JNIEnv *env, jclass c, jlong jself) {
    zfile_t *self = (zfile_t *) jself;
    zfile_t * rc = zfile_dup (self);
    return rc;
}

JNIEXPORT jstring JNICALL
Java_org_zeromq_czmq_Zfile__1_1filename (JNIEnv *env, jclass c, jlong jself, jstring path) {
    zfile_t *self = (zfile_t *) jself;
    const char * rc = zfile_filename (self, path);
    return rc;
}

JNIEXPORT void JNICALL
Java_org_zeromq_czmq_Zfile__1_1restat (JNIEnv *env, jclass c, jlong jself) {
    zfile_t *self = (zfile_t *) jself;
    void rc = zfile_restat (self);
    return rc;
}

JNIEXPORT jlong JNICALL
Java_org_zeromq_czmq_Zfile__1_1modified (JNIEnv *env, jclass c, jlong jself) {
    zfile_t *self = (zfile_t *) jself;
    time_t rc = zfile_modified (self);
    return rc;
}

JNIEXPORT jlong JNICALL
Java_org_zeromq_czmq_Zfile__1_1cursize (JNIEnv *env, jclass c, jlong jself) {
    zfile_t *self = (zfile_t *) jself;
    off_t rc = zfile_cursize (self);
    return rc;
}

JNIEXPORT jboolean JNICALL
Java_org_zeromq_czmq_Zfile__1_1is_directory (JNIEnv *env, jclass c, jlong jself) {
    zfile_t *self = (zfile_t *) jself;
    bool rc = zfile_is_directory (self);
    return rc;
}

JNIEXPORT jboolean JNICALL
Java_org_zeromq_czmq_Zfile__1_1is_regular (JNIEnv *env, jclass c, jlong jself) {
    zfile_t *self = (zfile_t *) jself;
    bool rc = zfile_is_regular (self);
    return rc;
}

JNIEXPORT jboolean JNICALL
Java_org_zeromq_czmq_Zfile__1_1is_readable (JNIEnv *env, jclass c, jlong jself) {
    zfile_t *self = (zfile_t *) jself;
    bool rc = zfile_is_readable (self);
    return rc;
}

JNIEXPORT jboolean JNICALL
Java_org_zeromq_czmq_Zfile__1_1is_writeable (JNIEnv *env, jclass c, jlong jself) {
    zfile_t *self = (zfile_t *) jself;
    bool rc = zfile_is_writeable (self);
    return rc;
}

JNIEXPORT jboolean JNICALL
Java_org_zeromq_czmq_Zfile__1_1is_stable (JNIEnv *env, jclass c, jlong jself) {
    zfile_t *self = (zfile_t *) jself;
    bool rc = zfile_is_stable (self);
    return rc;
}

JNIEXPORT jboolean JNICALL
Java_org_zeromq_czmq_Zfile__1_1has_changed (JNIEnv *env, jclass c, jlong jself) {
    zfile_t *self = (zfile_t *) jself;
    bool rc = zfile_has_changed (self);
    return rc;
}

JNIEXPORT void JNICALL
Java_org_zeromq_czmq_Zfile__1_1remove (JNIEnv *env, jclass c, jlong jself) {
    zfile_t *self = (zfile_t *) jself;
    void rc = zfile_remove (self);
    return rc;
}

JNIEXPORT jint JNICALL
Java_org_zeromq_czmq_Zfile__1_1input (JNIEnv *env, jclass c, jlong jself) {
    zfile_t *self = (zfile_t *) jself;
    int rc = zfile_input (self);
    return rc;
}

JNIEXPORT jint JNICALL
Java_org_zeromq_czmq_Zfile__1_1output (JNIEnv *env, jclass c, jlong jself) {
    zfile_t *self = (zfile_t *) jself;
    int rc = zfile_output (self);
    return rc;
}

JNIEXPORT jlong JNICALL
Java_org_zeromq_czmq_Zfile__1_1read (JNIEnv *env, jclass c, jlong jself, jlong bytes, jlong offset) {
    zfile_t *self = (zfile_t *) jself;
    zchunk_t * rc = zfile_read (self, bytes, offset);
    return rc;
}

JNIEXPORT jboolean JNICALL
Java_org_zeromq_czmq_Zfile__1_1eof (JNIEnv *env, jclass c, jlong jself) {
    zfile_t *self = (zfile_t *) jself;
    bool rc = zfile_eof (self);
    return rc;
}

JNIEXPORT jint JNICALL
Java_org_zeromq_czmq_Zfile__1_1write (JNIEnv *env, jclass c, jlong jself, jlong chunk, jlong offset) {
    zfile_t *self = (zfile_t *) jself;
    int rc = zfile_write (self, chunk, offset);
    return rc;
}

JNIEXPORT jstring JNICALL
Java_org_zeromq_czmq_Zfile__1_1readln (JNIEnv *env, jclass c, jlong jself) {
    zfile_t *self = (zfile_t *) jself;
    const char * rc = zfile_readln (self);
    return rc;
}

JNIEXPORT void JNICALL
Java_org_zeromq_czmq_Zfile__1_1close (JNIEnv *env, jclass c, jlong jself) {
    zfile_t *self = (zfile_t *) jself;
    void rc = zfile_close (self);
    return rc;
}

JNIEXPORT jstring JNICALL
Java_org_zeromq_czmq_Zfile__1_1digest (JNIEnv *env, jclass c, jlong jself) {
    zfile_t *self = (zfile_t *) jself;
    const char * rc = zfile_digest (self);
    return rc;
}

JNIEXPORT void JNICALL
Java_org_zeromq_czmq_Zfile__1_1test (JNIEnv *env, jclass c, jlong jself, jboolean verbose) {
    zfile_t *self = (zfile_t *) jself;
    void rc = zfile_test (verbose);
    return rc;
}

}
