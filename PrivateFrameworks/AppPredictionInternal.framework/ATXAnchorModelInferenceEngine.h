/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:38:40 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class ATXCoreDuetContextHelper, ATXAnchorModelPredictionScheduler, NSObject;

@interface ATXAnchorModelInferenceEngine : NSObject {

	ATXCoreDuetContextHelper* _contextHelper;
	ATXAnchorModelPredictionScheduler* _predictionScheduler;
	AB _started;
	NSObject*<OS_dispatch_queue> _queue;

}
+(id)sharedInstance;
-(void)registerAnchorEventListenerForAnchor:(id)arg1 ;
-(void)registerForAnchorEntrance:(id)arg1 cdContext:(id)arg2 ;
-(id)supportedAnchorsForInference;
-(void)registerAnchorEventListeners;
-(void)setupContextStoreListenerForAnchor:(id)arg1 context:(id)arg2 ;
-(void)handleInferenceEvent:(id)arg1 ;
-(id)currentDuetEventForAnchor:(id)arg1 ;
-(id)exitNotificationIdentifierForAnchor:(id)arg1 ;
-(void)registerForWakingNotificationForAnchor:(id)arg1 callback:(/*^block*/id)arg2 cdContext:(id)arg3 ;
-(void)handleAnchorEventForAnchor:(id)arg1 ;
-(/*^block*/id)exitCallbackForAnchor:(id)arg1 ;
-(void)start;
-(id)init;
-(void)retryPreviouslyIncompleteInference;
-(/*^block*/id)entranceCallbackForAnchor:(id)arg1 ;
-(id)notificationIdentifierForAnchor:(id)arg1 ;
-(void)registerForAnchorExit:(id)arg1 cdContext:(id)arg2 ;
@end

