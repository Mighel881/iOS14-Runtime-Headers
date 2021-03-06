/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:38:53 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ARKitCore.framework/ARKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MTLDevice, MTLCommandQueue, MTLRenderPipelineState, MTLDepthStencilState;
#import <ARKitCore/ARKitCore-Structs.h>
@interface ARGPUCubemapProjector : NSObject {

	id<MTLDevice> _device;
	id<MTLCommandQueue> _commandQueue;
	id<MTLRenderPipelineState> _cubemapPipelineStateSRGB_BGRA;
	id<MTLRenderPipelineState> _cubemapPipelineStateSRGB_RGBA;
	id<MTLRenderPipelineState> _cubemapPipelineStateHDR;
	id<MTLDepthStencilState> _cubemapDepthState;

}
+(id)createCubemap:(unsigned long long)arg1 ;
-(id)init;
-(void)projectToCube:(id)arg1 transformWorldFromCube:(SCD_Struct_AR1)arg2 meshes:(id)arg3 blend:(BOOL)arg4 ;
@end

