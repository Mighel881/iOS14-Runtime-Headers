/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:40:43 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AVFCapture.framework/AVFCapture
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AVFCapture/AVFCapture-Structs.h>
@class AVWeakReferencingDelegateStorage, AVCapturePhotoSettings, AVCaptureResolvedPhotoSettings, NSArray;

@interface AVCapturePhotoRequest : NSObject {

	AVWeakReferencingDelegateStorage* _delegateStorage;
	unsigned _photoCallbackFlavor;
	AVCapturePhotoSettings* _unresolvedSettings;
	AVCaptureResolvedPhotoSettings* _resolvedSettings;
	NSArray* _expectedPhotoManifest;
	unsigned _firedCallbackFlags;
	unsigned long long _firedPhotoCallbacksCount;
	IOSurfaceRef _previewSurface;
	opaqueCMSampleBufferRef _previewSampleBuffer;
	IOSurfaceRef _thumbnailSurface;
	BOOL _delegateSupportsDebugMetadataSidecarFile;
	BOOL _lensStabilizationSupported;

}

@property (readonly) unsigned photoCallbackFlavor;                                           //@synthesize photoCallbackFlavor=_photoCallbackFlavor - In the implementation block
@property (readonly) AVWeakReferencingDelegateStorage * delegateStorage;                     //@synthesize delegateStorage=_delegateStorage - In the implementation block
@property (readonly) AVCapturePhotoSettings * unresolvedSettings;                            //@synthesize unresolvedSettings=_unresolvedSettings - In the implementation block
@property (nonatomic,retain) AVCaptureResolvedPhotoSettings * resolvedSettings; 
@property (nonatomic,readonly) NSArray * expectedPhotoManifest;                              //@synthesize expectedPhotoManifest=_expectedPhotoManifest - In the implementation block
@property (nonatomic,readonly) unsigned long long expectedPhotoCount; 
@property (assign,nonatomic) unsigned firedCallbackFlags;                                    //@synthesize firedCallbackFlags=_firedCallbackFlags - In the implementation block
@property (assign,nonatomic) unsigned long long firedPhotoCallbacksCount;                    //@synthesize firedPhotoCallbacksCount=_firedPhotoCallbacksCount - In the implementation block
@property (readonly) BOOL delegateSupportsDebugMetadataSidecarFile;                          //@synthesize delegateSupportsDebugMetadataSidecarFile=_delegateSupportsDebugMetadataSidecarFile - In the implementation block
@property (readonly) BOOL lensStabilizationSupported;                                        //@synthesize lensStabilizationSupported=_lensStabilizationSupported - In the implementation block
@property (nonatomic,retain) IOSurfaceRef previewSurface;                                    //@synthesize previewSurface=_previewSurface - In the implementation block
@property (nonatomic,retain) opaqueCMSampleBufferRef previewSampleBuffer;                    //@synthesize previewSampleBuffer=_previewSampleBuffer - In the implementation block
@property (nonatomic,retain) IOSurfaceRef thumbnailSurface;                                  //@synthesize thumbnailSurface=_thumbnailSurface - In the implementation block
+(void)initialize;
+(id)requestWithDelegate:(id)arg1 settings:(id)arg2 lensStabilizationSupported:(BOOL)arg3 ;
-(void)setFiredPhotoCallbacksCount:(unsigned long long)arg1 ;
-(id)initWithDelegate:(id)arg1 settings:(id)arg2 lensStabilizationSupported:(BOOL)arg3 ;
-(void)setResolvedSettings:(AVCaptureResolvedPhotoSettings *)arg1 ;
-(void)_resolveExpectedPhotoManifest;
-(IOSurfaceRef)previewSurface;
-(BOOL)delegateSupportsDebugMetadataSidecarFile;
-(unsigned long long)firedPhotoCallbacksCount;
-(void)dealloc;
-(IOSurfaceRef)thumbnailSurface;
-(AVCaptureResolvedPhotoSettings *)resolvedSettings;
-(AVWeakReferencingDelegateStorage *)delegateStorage;
-(AVCapturePhotoSettings *)unresolvedSettings;
-(void)setThumbnailSurface:(IOSurfaceRef)arg1 ;
-(unsigned)photoCallbackFlavor;
-(opaqueCMSampleBufferRef)previewSampleBuffer;
-(unsigned)firedCallbackFlags;
-(void)setFiredCallbackFlags:(unsigned)arg1 ;
-(BOOL)lensStabilizationSupported;
-(void)setPreviewSurface:(IOSurfaceRef)arg1 ;
-(unsigned long long)expectedPhotoCount;
-(void)setPreviewSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(NSArray *)expectedPhotoManifest;
@end

