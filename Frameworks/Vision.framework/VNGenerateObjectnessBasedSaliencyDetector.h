/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:50:41 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Vision/Vision-Structs.h>
#import <Vision/VNEspressoModelFileBasedDetector.h>

@interface VNGenerateObjectnessBasedSaliencyDetector : VNEspressoModelFileBasedDetector
+(id)espressoModelFileNameForConfigurationOptions:(id)arg1 ;
+(id)configurationOptionKeysForDetectorKey;
+(id)espressoModelInputImageDimensionsBlobNameForConfigurationOptions:(id)arg1 ;
-(BOOL)_runAnalysisOnImage:(CVBufferRef)arg1 espressoResources:(id)arg2 inputBlobName:(id)arg3 error:(id*)arg4 ;
-(id)_observationsForImageIn32BGRAPixelBuffer:(CVBufferRef)arg1 withOptions:(id)arg2 originalImageSize:(CGSize)arg3 regionOfInterest:(CGRect)arg4 warningRecorder:(id)arg5 error:(id*)arg6 ;
-(BOOL)warmUpSession:(id)arg1 withOptions:(id)arg2 error:(id*)arg3 ;
-(BOOL)supportsProcessingDevice:(id)arg1 ;
-(id)processWithOptions:(id)arg1 regionOfInterest:(CGRect)arg2 warningRecorder:(id)arg3 error:(id*)arg4 ;
@end

