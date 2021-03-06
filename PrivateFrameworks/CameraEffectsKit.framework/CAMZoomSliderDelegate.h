/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:41:18 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CAMZoomSliderDelegate <NSObject>
@optional
-(void)willShowZoomSlider:(id)arg1 withAnimationDuration:(double)arg2;
-(void)willHideZoomSlider:(id)arg1 withAnimationDuration:(double)arg2;

@required
-(void)zoomSliderDidEndZooming:(id)arg1;
-(void)zoomSliderDidEndAutozooming:(id)arg1;
-(void)zoomSliderDidBeginAutozooming:(id)arg1;

@end

