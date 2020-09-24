/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:36:20 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AXMediaUtilities/AXMediaUtilities-Structs.h>
#import <AXMediaUtilities/AXMSourceNode.h>

@class AXMScreenGrabber;

@interface AXMScreenCaptureNode : AXMSourceNode {

	AXMScreenGrabber* _screenGrabber;

}

@property (nonatomic,retain) AXMScreenGrabber * screenGrabber;              //@synthesize screenGrabber=_screenGrabber - In the implementation block
+(BOOL)isSupported;
+(BOOL)supportsSecureCoding;
+(id)title;
-(AXMScreenGrabber *)screenGrabber;
-(void)produceImage:(id)arg1 ;
-(void)setScreenGrabber:(AXMScreenGrabber *)arg1 ;
-(void)triggerWithScreenCaptureRegion:(CGRect)arg1 interfaceOrientation:(long long)arg2 options:(id)arg3 cacheKey:(id)arg4 resultHandler:(/*^block*/id)arg5 ;
-(void)nodeInitialize;
@end
