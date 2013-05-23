#include <jni.h>

#include <opencv2/core/core.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include <opencv2/features2d/features2d.hpp>
#include <vector>


using namespace std;
using namespace cv;


extern "C" {
JNIEXPORT void JNICALL Java_com_readvis_MainActivity_ProcessFrame(JNIEnv*, jobject, jlong addrGray, jlong addrRgba);

JNIEXPORT void JNICALL Java_com_readvis_MainActivity_ProcessFrame(JNIEnv*, jobject, jlong addrGray, jlong addrRgba)
{
    //Mat& mGr  = *(Mat*)addrGray;
    //Mat& mRgb = *(Mat*)addrRgba;

	// all magic goes here :)
}
}
