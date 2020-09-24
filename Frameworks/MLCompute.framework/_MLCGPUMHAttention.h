/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:50:14 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/MLCompute.framework/MLCompute
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MLCompute/_MLCGPULayer.h>

@interface _MLCGPUMHAttention : _MLCGPULayer
+(BOOL)compileWithDevice:(id)arg1 deviceOps:(id)arg2 sourceTensors:(id)arg3 resultTensor:(id)arg4 ;
+(id)layerWithDevice:(id)arg1 desciptor:(id)arg2 weights:(id)arg3 bias:(id)arg4 attnBias:(id)arg5 inferenceOnly:(BOOL)arg6 ;
+(BOOL)setOptimizerDataForDevice:(id)arg1 deviceOps:(id)arg2 dataForWeights:(id)arg3 dataForBias:(id)arg4 ;
+(BOOL)setMHAOptimizerDataForDevice:(unsigned long long)arg1 deviceOps:(id)arg2 dataForWeights:(id)arg3 dataForBias:(id)arg4 momentumArray:(id)arg5 velocityArray:(id)arg6 centerWeightArray:(id)arg7 headIndex:(unsigned long long)arg8 weightIndex:(unsigned long long)arg9 targetIndex:(unsigned long long)arg10 attnBias:(BOOL)arg11 ;
-(id)initWithDevice:(id)arg1 desciptor:(id)arg2 weights:(id)arg3 bias:(id)arg4 attnBias:(id)arg5 inferenceOnly:(BOOL)arg6 ;
@end
