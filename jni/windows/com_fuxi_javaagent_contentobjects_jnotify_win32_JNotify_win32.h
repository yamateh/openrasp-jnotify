/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_fuxi_javaagent_contentobjects_jnotify_win32_JNotify_win32 */

#ifndef _Included_com_fuxi_javaagent_contentobjects_jnotify_win32_JNotify_win32
#define _Included_com_fuxi_javaagent_contentobjects_jnotify_win32_JNotify_win32
#ifdef __cplusplus
extern "C" {
#endif
#undef com_fuxi_javaagent_contentobjects_jnotify_win32_JNotify_win32_FILE_NOTIFY_CHANGE_FILE_NAME
#define com_fuxi_javaagent_contentobjects_jnotify_win32_JNotify_win32_FILE_NOTIFY_CHANGE_FILE_NAME 1L
#undef com_fuxi_javaagent_contentobjects_jnotify_win32_JNotify_win32_FILE_NOTIFY_CHANGE_DIR_NAME
#define com_fuxi_javaagent_contentobjects_jnotify_win32_JNotify_win32_FILE_NOTIFY_CHANGE_DIR_NAME 2L
#undef com_fuxi_javaagent_contentobjects_jnotify_win32_JNotify_win32_FILE_NOTIFY_CHANGE_ATTRIBUTES
#define com_fuxi_javaagent_contentobjects_jnotify_win32_JNotify_win32_FILE_NOTIFY_CHANGE_ATTRIBUTES 4L
#undef com_fuxi_javaagent_contentobjects_jnotify_win32_JNotify_win32_FILE_NOTIFY_CHANGE_SIZE
#define com_fuxi_javaagent_contentobjects_jnotify_win32_JNotify_win32_FILE_NOTIFY_CHANGE_SIZE 8L
#undef com_fuxi_javaagent_contentobjects_jnotify_win32_JNotify_win32_FILE_NOTIFY_CHANGE_LAST_WRITE
#define com_fuxi_javaagent_contentobjects_jnotify_win32_JNotify_win32_FILE_NOTIFY_CHANGE_LAST_WRITE 16L
#undef com_fuxi_javaagent_contentobjects_jnotify_win32_JNotify_win32_FILE_NOTIFY_CHANGE_LAST_ACCESS
#define com_fuxi_javaagent_contentobjects_jnotify_win32_JNotify_win32_FILE_NOTIFY_CHANGE_LAST_ACCESS 32L
#undef com_fuxi_javaagent_contentobjects_jnotify_win32_JNotify_win32_FILE_NOTIFY_CHANGE_CREATION
#define com_fuxi_javaagent_contentobjects_jnotify_win32_JNotify_win32_FILE_NOTIFY_CHANGE_CREATION 64L
#undef com_fuxi_javaagent_contentobjects_jnotify_win32_JNotify_win32_FILE_NOTIFY_CHANGE_SECURITY
#define com_fuxi_javaagent_contentobjects_jnotify_win32_JNotify_win32_FILE_NOTIFY_CHANGE_SECURITY 256L
#undef com_fuxi_javaagent_contentobjects_jnotify_win32_JNotify_win32_FILE_ACTION_ADDED
#define com_fuxi_javaagent_contentobjects_jnotify_win32_JNotify_win32_FILE_ACTION_ADDED 1L
#undef com_fuxi_javaagent_contentobjects_jnotify_win32_JNotify_win32_FILE_ACTION_REMOVED
#define com_fuxi_javaagent_contentobjects_jnotify_win32_JNotify_win32_FILE_ACTION_REMOVED 2L
#undef com_fuxi_javaagent_contentobjects_jnotify_win32_JNotify_win32_FILE_ACTION_MODIFIED
#define com_fuxi_javaagent_contentobjects_jnotify_win32_JNotify_win32_FILE_ACTION_MODIFIED 3L
#undef com_fuxi_javaagent_contentobjects_jnotify_win32_JNotify_win32_FILE_ACTION_RENAMED_OLD_NAME
#define com_fuxi_javaagent_contentobjects_jnotify_win32_JNotify_win32_FILE_ACTION_RENAMED_OLD_NAME 4L
#undef com_fuxi_javaagent_contentobjects_jnotify_win32_JNotify_win32_FILE_ACTION_RENAMED_NEW_NAME
#define com_fuxi_javaagent_contentobjects_jnotify_win32_JNotify_win32_FILE_ACTION_RENAMED_NEW_NAME 5L
/*
 * Class:     com_fuxi_javaagent_contentobjects_jnotify_win32_JNotify_win32
 * Method:    nativeInit
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_com_fuxi_javaagent_contentobjects_jnotify_win32_JNotify_1win32_nativeInit
  (JNIEnv *, jclass);

/*
 * Class:     com_fuxi_javaagent_contentobjects_jnotify_win32_JNotify_win32
 * Method:    nativeAddWatch
 * Signature: (Ljava/lang/String;JZ)I
 */
JNIEXPORT jint JNICALL Java_com_fuxi_javaagent_contentobjects_jnotify_win32_JNotify_1win32_nativeAddWatch
  (JNIEnv *, jclass, jstring, jlong, jboolean);

/*
 * Class:     com_fuxi_javaagent_contentobjects_jnotify_win32_JNotify_win32
 * Method:    getErrorDesc
 * Signature: (J)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_fuxi_javaagent_contentobjects_jnotify_win32_JNotify_1win32_getErrorDesc
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_fuxi_javaagent_contentobjects_jnotify_win32_JNotify_win32
 * Method:    nativeRemoveWatch
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_com_fuxi_javaagent_contentobjects_jnotify_win32_JNotify_1win32_nativeRemoveWatch
  (JNIEnv *, jclass, jint);

#ifdef __cplusplus
}
#endif
#endif
