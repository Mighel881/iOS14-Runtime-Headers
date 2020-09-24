/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:46:35 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/DataDetectorsUI.framework/DataDetectorsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/_UIRemoteViewController.h>
#import <libobjc.A.dylib/DDParsecHostVCInterface.h>

@protocol DDParsecHostVCInterface;
@interface DDParsecRemoteCollectionViewController : _UIRemoteViewController <DDParsecHostVCInterface> {

	BOOL _receivedInteractionDidFinish;
	id<DDParsecHostVCInterface> _hostSideDelegate;

}

@property (__weak) id<DDParsecHostVCInterface> hostSideDelegate;              //@synthesize hostSideDelegate=_hostSideDelegate - In the implementation block
+(id)exportedInterface;
+(id)serviceViewControllerInterface;
-(BOOL)canBecomeFirstResponder;
-(void)interactionEnded;
-(void)viewServiceDidTerminateWithError:(id)arg1 ;
-(BOOL)_canShowWhileLocked;
-(void)interactionEndedWithPunchout:(BOOL)arg1 ;
-(void)showingErrorView:(BOOL)arg1 ;
-(void)showingFTE:(BOOL)arg1 ;
-(void)openParsecURL:(id)arg1 ;
-(void)getStatusBarHidden:(/*^block*/id)arg1 ;
-(void)openTrailerPunchout:(id)arg1 ;
-(id<DDParsecHostVCInterface>)hostSideDelegate;
-(void)setHostSideDelegate:(id<DDParsecHostVCInterface>)arg1 ;
@end
