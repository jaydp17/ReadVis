LOCAL_PATH := $(call my-dir)

include $(CLEAR_VARS)

include /home/jaydeep/SDKs/Android/OpenCV-2.4.5-android-sdk/sdk/native/jni/OpenCV.mk

LOCAL_MODULE    := readvis
LOCAL_SRC_FILES := main.cpp
LOCAL_LDLIBS +=  -llog -ldl

include $(BUILD_SHARED_LIBRARY)
