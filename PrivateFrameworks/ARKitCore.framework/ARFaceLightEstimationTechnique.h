/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:38:54 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ARKitCore.framework/ARKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ARKitCore/ARKitCore-Structs.h>
#import <ARKitCore/ARTechnique.h>

@protocol OS_dispatch_semaphore, OS_dispatch_queue;
@class NSObject, ARDirectionalLightEstimate;

@interface ARFaceLightEstimationTechnique : ARTechnique {

	NSObject*<OS_dispatch_semaphore> _resultSemaphore;
	ARDirectionalLightEstimate* _lastLightEstimate;
	float _lightIntensity;
	float _temperature;
	ExponentialSmoother<float> _smoother;
	NSObject*<OS_dispatch_queue> _lightEstimationQueue;
	NSObject*<OS_dispatch_semaphore> _estimatingSemaphore;
	FacialLightEstimation* _faceLightEstimator;
	float _shSmoothingAlpha;

}
+(float)_computeShSmoothingAlpha:(double)arg1 ;
+(shared_ptr<arkit::FaceTrackingData>*)_transformFaceTrackingData:(id)arg1 ;
-(id)processData:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)requestResultDataAtTimestamp:(double)arg1 context:(id)arg2 ;
-(unsigned long long)requiredSensorDataTypes;
@end
