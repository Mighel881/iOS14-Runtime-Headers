/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:35:42 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AVFCore/AVFCore-Structs.h>
@class AVAssetImageGeneratorInternal, AVAsset, NSString, AVVideoComposition;

@interface AVAssetImageGenerator : NSObject {

	AVAssetImageGeneratorInternal* _priv;

}

@property (nonatomic,readonly) AVAsset * asset; 
@property (assign,nonatomic) BOOL appliesPreferredTrackTransform; 
@property (assign,nonatomic) CGSize maximumSize; 
@property (nonatomic,copy) NSString * apertureMode; 
@property (nonatomic,copy) AVVideoComposition * videoComposition; 
@property (nonatomic,readonly) id<AVVideoCompositing> customVideoCompositor; 
@property (assign,nonatomic) SCD_Struct_AV6 requestedTimeToleranceBefore; 
@property (assign,nonatomic) SCD_Struct_AV6 requestedTimeToleranceAfter; 
+(id)assetImageGeneratorWithAsset:(id)arg1 ;
-(id)initWithAsset:(id)arg1 ;
-(AVAsset *)asset;
-(void)setMaximumSize:(CGSize)arg1 ;
-(void)dealloc;
-(CGSize)maximumSize;
-(id)init;
-(NSString *)apertureMode;
-(AVVideoComposition *)videoComposition;
-(BOOL)appliesPreferredTrackTransform;
-(SCD_Struct_AV6)requestedTimeToleranceBefore;
-(SCD_Struct_AV6)requestedTimeToleranceAfter;
-(BOOL)prefersStandardDynamicRange;
-(id)_NSErrorForError:(int)arg1 ;
-(CGSize)_scaledSizeForRenderSize:(CGSize)arg1 ;
-(id)_videoSettingWithSize:(CGSize)arg1 ;
-(void)setVideoComposition:(AVVideoComposition *)arg1 ;
-(id)_makeAutoreleasedAssetReader;
-(CGImageRef)_copyCGImageAtTime:(SCD_Struct_AV6)arg1 usingAssetReader:(id)arg2 error:(id*)arg3 ;
-(id)_optionsDictionary;
-(BOOL)_ensureFigAssetImageGeneratorAllowingSynchronousPropertyLoad:(BOOL)arg1 error:(id*)arg2 ;
-(id)_requestWithRequestID:(id)arg1 ;
-(void)setApertureMode:(NSString *)arg1 ;
-(id<AVVideoCompositing>)customVideoCompositor;
-(void)generateCGImagesAsynchronouslyForTimes:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)cancelAllCGImageGeneration;
-(void)setPrefersStandardDynamicRange:(BOOL)arg1 ;
-(void)setRequestedTimeToleranceBefore:(SCD_Struct_AV6)arg1 ;
-(void)setRequestedTimeToleranceAfter:(SCD_Struct_AV6)arg1 ;
-(void)_didGenerateCGImage:(id)arg1 ;
-(void)_failedToGenerateCGImage:(id)arg1 ;
-(void)setAppliesPreferredTrackTransform:(BOOL)arg1 ;
-(CGImageRef)copyCGImageAtTime:(SCD_Struct_AV6)arg1 actualTime:(SCD_Struct_AV6*)arg2 error:(id*)arg3 ;
-(void)_serverDied;
@end

