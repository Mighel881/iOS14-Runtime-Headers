/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:42:33 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SiriPlaybackControlIntents.framework/SiriPlaybackControlIntents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SetSubtitleStateIntentHandling.h>

@interface SiriPlaybackControlIntents.SetSubtitleStateIntentHandler : NSObject <SetSubtitleStateIntentHandling> {

	 playbackController;
	 deviceSelector;
	 analyticsService;

}
-(id)init;
-(void)handleSetSubtitleState:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)resolveDeviceForSetSubtitleState:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)resolveLanguageForSetSubtitleState:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)confirmSetSubtitleState:(id)arg1 completion:(/*^block*/id)arg2 ;
@end
