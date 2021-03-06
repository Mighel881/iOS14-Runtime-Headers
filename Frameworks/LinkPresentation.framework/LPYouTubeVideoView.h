/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:50:05 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <LinkPresentation/LPVideoView.h>
#import <libobjc.A.dylib/LPYouTubePlayerDelegate.h>

@class LPYouTubePlayerView, NSString;

@interface LPYouTubeVideoView : LPVideoView <LPYouTubePlayerDelegate> {

	LPYouTubePlayerView* _platformYouTubeView;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setVolume:(double)arg1 ;
-(void)setPlaying:(BOOL)arg1 ;
-(double)volume;
-(void)setMuted:(BOOL)arg1 ;
-(id)initWithVideo:(id)arg1 style:(id)arg2 posterFrame:(id)arg3 posterFrameStyle:(id)arg4 configuration:(id)arg5 ;
-(BOOL)shouldShowMuteButton;
-(BOOL)usesSharedAudioSession;
-(id)createVideoPlayerView;
-(BOOL)usesCustomFullScreenImplementation;
-(BOOL)isMuted;
-(void)youTubePlayer:(id)arg1 didChangeToState:(long long)arg2 ;
-(void)youTubePlayer:(id)arg1 didReceiveError:(id)arg2 ;
-(void)youTubePlayer:(id)arg1 didChangeToFullScreen:(BOOL)arg2 ;
-(void)enterCustomFullScreen;
@end

