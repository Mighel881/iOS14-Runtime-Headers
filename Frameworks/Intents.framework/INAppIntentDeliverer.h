/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:47:13 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/RBSAssertionObserving.h>

@protocol OS_dispatch_queue, INIntentBackgroundHandlingAssertion;
@class INIntentForwardingAction, NSString, NSObject, RBSAssertion, RBSProcessMonitor, INWatchdogTimer;

@interface INAppIntentDeliverer : NSObject <RBSAssertionObserving> {

	INIntentForwardingAction* _intentForwardingAction;
	NSString* _bundleIdentifier;
	NSObject*<OS_dispatch_queue> _queue;
	RBSAssertion* _processAssertion;
	RBSProcessMonitor* _processMonitor;
	/*^block*/id _completionBlock;
	INWatchdogTimer* _requestTimer;
	id<INIntentBackgroundHandlingAssertion> _auxiliaryAssertion;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;                                    //@synthesize queue=_queue - In the implementation block
@property (nonatomic,readonly) RBSAssertion * processAssertion;                                       //@synthesize processAssertion=_processAssertion - In the implementation block
@property (nonatomic,readonly) RBSProcessMonitor * processMonitor;                                    //@synthesize processMonitor=_processMonitor - In the implementation block
@property (nonatomic,copy) id completionBlock;                                                        //@synthesize completionBlock=_completionBlock - In the implementation block
@property (nonatomic,retain) INWatchdogTimer * requestTimer;                                          //@synthesize requestTimer=_requestTimer - In the implementation block
@property (nonatomic,retain) id<INIntentBackgroundHandlingAssertion> auxiliaryAssertion;              //@synthesize auxiliaryAssertion=_auxiliaryAssertion - In the implementation block
@property (nonatomic,readonly) INIntentForwardingAction * intentForwardingAction;                     //@synthesize intentForwardingAction=_intentForwardingAction - In the implementation block
@property (nonatomic,copy,readonly) NSString * bundleIdentifier;                                      //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setCompletionBlock:(id)arg1 ;
-(void)assertion:(id)arg1 didInvalidateWithError:(id)arg2 ;
-(id)completionBlock;
-(NSString *)bundleIdentifier;
-(void)dealloc;
-(id)initWithBundleIdentifier:(id)arg1 ;
-(RBSProcessMonitor *)processMonitor;
-(NSObject*<OS_dispatch_queue>)queue;
-(id)initWithBundleIdentifier:(id)arg1 intentForwardingAction:(id)arg2 ;
-(INWatchdogTimer *)requestTimer;
-(void)deliverIntentForwardingActionWithResponseHandler:(/*^block*/id)arg1 ;
-(void)deliverIntent:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)invalidateIntentDelivery;
-(void)_deliverIntentForwardingActionWithResponseHandler:(/*^block*/id)arg1 ;
-(void)completeWithIntentForwardingActionResponse:(id)arg1 ;
-(void)setRequestTimer:(INWatchdogTimer *)arg1 ;
-(id<INIntentBackgroundHandlingAssertion>)auxiliaryAssertion;
-(void)setAuxiliaryAssertion:(id<INIntentBackgroundHandlingAssertion>)arg1 ;
-(RBSAssertion *)processAssertion;
-(INIntentForwardingAction *)intentForwardingAction;
@end
