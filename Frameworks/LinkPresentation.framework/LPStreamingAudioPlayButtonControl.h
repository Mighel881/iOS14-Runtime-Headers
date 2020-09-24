/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:50:06 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <LinkPresentation/LPPlayButtonControl.h>
#import <libobjc.A.dylib/LPStreamingAudioPlayerClient.h>

@class LPStreamingAudioPlayer;

@interface LPStreamingAudioPlayButtonControl : LPPlayButtonControl <LPStreamingAudioPlayerClient> {

	LPStreamingAudioPlayer* _player;

}
-(void)dealloc;
-(void)buttonPressed:(id)arg1 ;
-(void)streamingAudioPlayer:(id)arg1 didChangeProgress:(float)arg2 ;
-(void)streamingAudioPlayer:(id)arg1 didTransitionToState:(unsigned long long)arg2 ;
-(void)streamingAudioPlayerDidFailToPlay:(id)arg1 ;
-(id)initWithAudio:(id)arg1 style:(id)arg2 ;
@end
