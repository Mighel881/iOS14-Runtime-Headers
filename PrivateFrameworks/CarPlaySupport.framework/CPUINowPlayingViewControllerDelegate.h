/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:43:57 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CarPlaySupport.framework/CarPlaySupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CPUINowPlayingViewControllerDelegate <NSObject>
@optional
-(BOOL)nowPlayingViewController:(id)arg1 shouldDisplayButton:(long long)arg2 withImage:(out id*)arg3 existingIdentifier:(id)arg4 tinted:(out BOOL*)arg5;
-(BOOL)nowPlayingViewController:(id)arg1 buttonShouldBeActive:(long long)arg2;
-(void)nowPlayingViewController:(id)arg1 didSendAction:(long long)arg2 state:(long long)arg3;
-(BOOL)nowPlayingViewControllerCanShuffle:(id)arg1;
-(void)nowPlayingViewControllerToggleShuffle:(id)arg1;
-(BOOL)nowPlayingViewControllerCanRepeat:(id)arg1;
-(void)nowPlayingViewControllerToggleRepeat:(id)arg1;
-(BOOL)nowPlayingViewControllerCanShowAddToLibrary:(id)arg1;
-(void)nowPlayingViewControllerAddToLibrary:(id)arg1;
-(BOOL)nowPlayingViewControllerIsFuseSubscriber:(id)arg1;
-(BOOL)nowPlayingViewControllerCanShowAlbumLink:(id)arg1;
-(void)nowPlayingViewControllerAlbumArtistButtonTapped:(id)arg1;
-(BOOL)nowPlayingViewControllerCanShowUpNext:(id)arg1;
-(id)titleForUpNextInNowPlayingViewController:(id)arg1;
-(void)nowPlayingViewControllerUpNextButtonTapped:(id)arg1;
-(BOOL)nowPlayingViewControllerCanShowChangePlaybackRate:(id)arg1;
-(void)nowPlayingViewControllerChangePlaybackRate:(id)arg1;
-(id)nowPlayingViewControllerGetPlaybackRate:(id)arg1;
-(BOOL)nowPlayingViewControllerCanShowMore:(id)arg1;
-(void)nowPlayingViewControllerMore:(id)arg1;
-(BOOL)nowPlayingViewControllerCanShowAlbumArt:(id)arg1;
-(BOOL)nowPlayingViewControllerShouldUseMusicExplicitGlyph:(id)arg1;
-(void)nowPlayingViewControllerWillAppear:(id)arg1;
-(id)customPlaybackControlButtonsForNowPlayingViewController:(id)arg1;
-(void)nowPlayingViewController:(id)arg1 didSelectButton:(id)arg2;

@end

