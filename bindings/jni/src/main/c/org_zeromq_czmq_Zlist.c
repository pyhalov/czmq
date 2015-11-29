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
#include "../../native/include/org_zeromq_czmq_Zlist.h"

JNIEXPORT jlong JNICALL
Java_org_zeromq_czmq_Zlist__1_1init (JNIEnv *env, jclass c) {
    zlist_t *self = zlist_new ();
    if (self)
        return (jlong) self;
    return -1;
}

JNIEXPORT void JNICALL
Java_org_zeromq_czmq_Zlist__1_1destroy (JNIEnv *env, jclass c, jlong jself) {
    zlist_t *self = (zlist_t *) jself;
    zlist_destroy (&self);
}

JNIEXPORT jlong JNICALL
Java_org_zeromq_czmq_Zlist__1_1first (JNIEnv *env, jclass c, jlong jself) {
    zlist_t *self = (zlist_t *) jself;
    void * rc = zlist_first (self);
    return rc;
}

JNIEXPORT jlong JNICALL
Java_org_zeromq_czmq_Zlist__1_1next (JNIEnv *env, jclass c, jlong jself) {
    zlist_t *self = (zlist_t *) jself;
    void * rc = zlist_next (self);
    return rc;
}

JNIEXPORT jlong JNICALL
Java_org_zeromq_czmq_Zlist__1_1last (JNIEnv *env, jclass c, jlong jself) {
    zlist_t *self = (zlist_t *) jself;
    void * rc = zlist_last (self);
    return rc;
}

JNIEXPORT jlong JNICALL
Java_org_zeromq_czmq_Zlist__1_1head (JNIEnv *env, jclass c, jlong jself) {
    zlist_t *self = (zlist_t *) jself;
    void * rc = zlist_head (self);
    return rc;
}

JNIEXPORT jlong JNICALL
Java_org_zeromq_czmq_Zlist__1_1tail (JNIEnv *env, jclass c, jlong jself) {
    zlist_t *self = (zlist_t *) jself;
    void * rc = zlist_tail (self);
    return rc;
}

JNIEXPORT jlong JNICALL
Java_org_zeromq_czmq_Zlist__1_1item (JNIEnv *env, jclass c, jlong jself) {
    zlist_t *self = (zlist_t *) jself;
    void * rc = zlist_item (self);
    return rc;
}

JNIEXPORT jint JNICALL
Java_org_zeromq_czmq_Zlist__1_1append (JNIEnv *env, jclass c, jlong jself, jlong item) {
    zlist_t *self = (zlist_t *) jself;
    int rc = zlist_append (self, item);
    return rc;
}

JNIEXPORT jint JNICALL
Java_org_zeromq_czmq_Zlist__1_1push (JNIEnv *env, jclass c, jlong jself, jlong item) {
    zlist_t *self = (zlist_t *) jself;
    int rc = zlist_push (self, item);
    return rc;
}

JNIEXPORT jlong JNICALL
Java_org_zeromq_czmq_Zlist__1_1pop (JNIEnv *env, jclass c, jlong jself) {
    zlist_t *self = (zlist_t *) jself;
    void * rc = zlist_pop (self);
    return rc;
}

JNIEXPORT jboolean JNICALL
Java_org_zeromq_czmq_Zlist__1_1exists (JNIEnv *env, jclass c, jlong jself, jlong item) {
    zlist_t *self = (zlist_t *) jself;
    bool rc = zlist_exists (self, item);
    return rc;
}

JNIEXPORT void JNICALL
Java_org_zeromq_czmq_Zlist__1_1remove (JNIEnv *env, jclass c, jlong jself, jlong item) {
    zlist_t *self = (zlist_t *) jself;
    void rc = zlist_remove (self, item);
    return rc;
}

JNIEXPORT jlong JNICALL
Java_org_zeromq_czmq_Zlist__1_1dup (JNIEnv *env, jclass c, jlong jself) {
    zlist_t *self = (zlist_t *) jself;
    zlist_t * rc = zlist_dup (self);
    return rc;
}

JNIEXPORT void JNICALL
Java_org_zeromq_czmq_Zlist__1_1purge (JNIEnv *env, jclass c, jlong jself) {
    zlist_t *self = (zlist_t *) jself;
    void rc = zlist_purge (self);
    return rc;
}

JNIEXPORT jlong JNICALL
Java_org_zeromq_czmq_Zlist__1_1size (JNIEnv *env, jclass c, jlong jself) {
    zlist_t *self = (zlist_t *) jself;
    size_t rc = zlist_size (self);
    return rc;
}

JNIEXPORT void JNICALL
Java_org_zeromq_czmq_Zlist__1_1autofree (JNIEnv *env, jclass c, jlong jself) {
    zlist_t *self = (zlist_t *) jself;
    void rc = zlist_autofree (self);
    return rc;
}

JNIEXPORT void JNICALL
Java_org_zeromq_czmq_Zlist__1_1test (JNIEnv *env, jclass c, jlong jself, jboolean verbose) {
    zlist_t *self = (zlist_t *) jself;
    void rc = zlist_test (verbose);
    return rc;
}

}
