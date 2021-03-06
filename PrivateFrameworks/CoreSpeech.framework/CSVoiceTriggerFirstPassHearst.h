/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:46:48 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CSActivationEventNotificationHandlerDelegate.h>
#import <libobjc.A.dylib/CSSiriClientBehaviorMonitorDelegate.h>

@protocol CSVoiceTriggerDelegate, OS_dispatch_queue;
@class NSObject, NSMutableDictionary, CSAsset, CSAudioStreamHolding, CSAudioProvider, NSString;

@interface CSVoiceTriggerFirstPassHearst : NSObject <CSActivationEventNotificationHandlerDelegate, CSSiriClientBehaviorMonitorDelegate> {

	float _remoteMicVADThreshold;
	float _remoteMicVADMyriadThreshold;
	float _minimumPhraseLengthForVADGating;
	id<CSVoiceTriggerDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _queue;
	NSMutableDictionary* _hearstSecondPassRequests;
	CSAsset* _currentAsset;
	CSAudioStreamHolding* _triggeredAudioStreamHolding;
	CSAudioProvider* _triggeredAudioProvider;
	unsigned long long _secondChanceHotTillMachTime;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                              //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * hearstSecondPassRequests;                  //@synthesize hearstSecondPassRequests=_hearstSecondPassRequests - In the implementation block
@property (nonatomic,retain) CSAsset * currentAsset;                                          //@synthesize currentAsset=_currentAsset - In the implementation block
@property (assign,nonatomic) float remoteMicVADThreshold;                                     //@synthesize remoteMicVADThreshold=_remoteMicVADThreshold - In the implementation block
@property (assign,nonatomic) float remoteMicVADMyriadThreshold;                               //@synthesize remoteMicVADMyriadThreshold=_remoteMicVADMyriadThreshold - In the implementation block
@property (assign,nonatomic) float minimumPhraseLengthForVADGating;                           //@synthesize minimumPhraseLengthForVADGating=_minimumPhraseLengthForVADGating - In the implementation block
@property (nonatomic,retain) CSAudioStreamHolding * triggeredAudioStreamHolding;              //@synthesize triggeredAudioStreamHolding=_triggeredAudioStreamHolding - In the implementation block
@property (nonatomic,retain) CSAudioProvider * triggeredAudioProvider;                        //@synthesize triggeredAudioProvider=_triggeredAudioProvider - In the implementation block
@property (assign,nonatomic) unsigned long long secondChanceHotTillMachTime;                  //@synthesize secondChanceHotTillMachTime=_secondChanceHotTillMachTime - In the implementation block
@property (assign,nonatomic,__weak) id<CSVoiceTriggerDelegate> delegate;                      //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(CSAsset *)currentAsset;
-(void)setCurrentAsset:(CSAsset *)arg1 ;
-(void)_reset;
-(void)reset;
-(void)setSecondChanceHotTillMachTime:(unsigned long long)arg1 ;
-(void)start;
-(void)_setAsset:(id)arg1 ;
-(id)init;
-(void)siriClientBehaviorMonitor:(id)arg1 willStopStream:(id)arg2 ;
-(void)setDelegate:(id<CSVoiceTriggerDelegate>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setAsset:(id)arg1 ;
-(void)siriClientBehaviorMonitor:(id)arg1 didStartStreamWithContext:(id)arg2 successfully:(BOOL)arg3 option:(id)arg4 withEventUUID:(id)arg5 ;
-(void)siriClientBehaviorMonitor:(id)arg1 willStartStreamWithContext:(id)arg2 option:(id)arg3 ;
-(id<CSVoiceTriggerDelegate>)delegate;
-(void)activationEventNotificationHandler:(id)arg1 event:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(unsigned long long)secondChanceHotTillMachTime;
-(void)siriClientBehaviorMonitor:(id)arg1 didStopStream:(id)arg2 withEventUUID:(id)arg3 ;
-(void)_cancelAllAudioStreamHoldings;
-(void)_requestStartAudioStreamWitContext:(id)arg1 secondPassRequest:(id)arg2 startStreamOption:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)_handleSecondPassResult:(unsigned long long)arg1 secondPassRequest:(id)arg2 voiceTriggerInfo:(id)arg3 deviceId:(id)arg4 secondChanceCandidate:(BOOL)arg5 error:(id)arg6 completion:(/*^block*/id)arg7 ;
-(CSAudioProvider *)triggeredAudioProvider;
-(CSAudioStreamHolding *)triggeredAudioStreamHolding;
-(void)setTriggeredAudioStreamHolding:(CSAudioStreamHolding *)arg1 ;
-(void)setTriggeredAudioProvider:(CSAudioProvider *)arg1 ;
-(void)_handleRemoteMicVoiceTriggerEvent:(id)arg1 secondPassRequest:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_handleRemoteMicVADEventWithSecondPassRequest:(id)arg1 ;
-(NSMutableDictionary *)hearstSecondPassRequests;
-(void)setHearstSecondPassRequests:(NSMutableDictionary *)arg1 ;
-(float)remoteMicVADThreshold;
-(void)setRemoteMicVADThreshold:(float)arg1 ;
-(float)remoteMicVADMyriadThreshold;
-(void)setRemoteMicVADMyriadThreshold:(float)arg1 ;
-(float)minimumPhraseLengthForVADGating;
-(void)setMinimumPhraseLengthForVADGating:(float)arg1 ;
@end

