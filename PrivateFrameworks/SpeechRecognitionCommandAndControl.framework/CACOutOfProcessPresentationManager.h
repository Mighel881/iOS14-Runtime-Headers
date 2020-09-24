/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:35:58 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SpeechRecognitionCommandAndControl.framework/SpeechRecognitionCommandAndControl
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CACAXNotificationObserverDelegate.h>
#import <libobjc.A.dylib/CACContentViewManager.h>

@class CACAXNotificationObserver;

@interface CACOutOfProcessPresentationManager : NSObject <CACAXNotificationObserverDelegate, CACContentViewManager> {

	CACAXNotificationObserver* _observer;

}

@property (nonatomic,retain) CACAXNotificationObserver * observer;              //@synthesize observer=_observer - In the implementation block
+(long long)remoteViewType;
+(int)axNotification;
-(void)hide;
-(BOOL)isOutOfProcess;
-(BOOL)isOverlay;
-(BOOL)isShowing;
-(id)init;
-(void)setObserver:(CACAXNotificationObserver *)arg1 ;
-(CACAXNotificationObserver *)observer;
-(void)handleAXNotificationData:(void*)arg1 ;
-(BOOL)isPhysiciallyInteractiveOverlay;
-(void)hideWithoutAnimation;
-(void)observer:(id)arg1 didObserveNotification:(int)arg2 notificationData:(void*)arg3 ;
-(void)presentWithData:(id)arg1 ;
@end
