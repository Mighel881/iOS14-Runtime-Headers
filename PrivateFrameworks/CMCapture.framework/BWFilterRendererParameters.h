/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:37:21 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol BWFilterRendererParameters <NSObject,NSCopying>
@property (nonatomic,readonly) short type; 
@property (nonatomic,readonly) float interpolationFractionComplete; 
@required
-(float)interpolationFractionComplete;
-(int)prepareForRenderingWithInputVideoFormat:(id)arg1;
-(void)updateByInterpolatingFromParameters:(id)arg1 toParameters:(id)arg2 withFractionComplete:(float)arg3;
-(short)type;

@end

