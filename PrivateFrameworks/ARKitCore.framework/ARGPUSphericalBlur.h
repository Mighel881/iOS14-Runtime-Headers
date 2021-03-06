/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:38:53 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ARKitCore.framework/ARKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MTLDevice, MTLCommandQueue, MTLComputePipelineState;
#import <ARKitCore/ARKitCore-Structs.h>
@interface ARGPUSphericalBlur : NSObject {

	id<MTLDevice> _device;
	id<MTLCommandQueue> _commandQueue;
	id<MTLComputePipelineState> _cubemapBlurPipelineState;
	BOOL _gpuFamilyAtleast4;

}
-(id)init;
-(id)blurCubemapTexture:(id)arg1 roughness:(id)arg2 rotation:(SCD_Struct_AR25)arg3 ;
@end

