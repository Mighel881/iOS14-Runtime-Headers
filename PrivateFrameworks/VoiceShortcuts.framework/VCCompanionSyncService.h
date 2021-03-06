/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:46:24 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/VoiceShortcuts.framework/VoiceShortcuts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SYServiceDelegate.h>
#import <libobjc.A.dylib/VCCompanionSyncSessionDelegate.h>

@protocol VCCompanionSyncServiceDelegate, OS_dispatch_queue, VCSyncDataEndpoint;
@class SYService, NSObject, WFDebouncer, NSSet, VCCompanionSyncSession, VCNRDeviceSyncService, NSString;

@interface VCCompanionSyncService : NSObject <SYServiceDelegate, VCCompanionSyncSessionDelegate> {

	id<VCCompanionSyncServiceDelegate> _delegate;
	SYService* _service;
	NSObject*<OS_dispatch_queue> _queue;
	id<VCSyncDataEndpoint> _syncDataEndpoint;
	WFDebouncer* _debouncer;
	NSSet* _currentDataHandlers;
	VCCompanionSyncSession* _currentSession;
	VCNRDeviceSyncService* _currentSyncService;

}

@property (nonatomic,readonly) SYService * service;                                           //@synthesize service=_service - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;                            //@synthesize queue=_queue - In the implementation block
@property (nonatomic,readonly) id<VCSyncDataEndpoint> syncDataEndpoint;                       //@synthesize syncDataEndpoint=_syncDataEndpoint - In the implementation block
@property (nonatomic,readonly) WFDebouncer * debouncer;                                       //@synthesize debouncer=_debouncer - In the implementation block
@property (nonatomic,copy) NSSet * currentDataHandlers;                                       //@synthesize currentDataHandlers=_currentDataHandlers - In the implementation block
@property (nonatomic,retain) VCCompanionSyncSession * currentSession;                         //@synthesize currentSession=_currentSession - In the implementation block
@property (nonatomic,copy) VCNRDeviceSyncService * currentSyncService;                        //@synthesize currentSyncService=_currentSyncService - In the implementation block
@property (assign,nonatomic,__weak) id<VCCompanionSyncServiceDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(VCCompanionSyncSession *)currentSession;
-(id)initWithSyncDataEndpoint:(id)arg1 ;
-(void)companionSyncSession:(id)arg1 didUpdateProgress:(double)arg2 ;
-(void)setCurrentSession:(VCCompanionSyncSession *)arg1 ;
-(void)updateSyncDataHandlers;
-(BOOL)service:(id)arg1 startSession:(id)arg2 error:(id*)arg3 ;
-(void)requestSyncImmediately;
-(void)resumeServiceIfNecessary;
-(void)updateCurrentSyncServiceIfNecessary;
-(void)dealloc;
-(id<VCSyncDataEndpoint>)syncDataEndpoint;
-(NSSet *)currentDataHandlers;
-(void)service:(id)arg1 didSwitchFromPairingID:(id)arg2 toPairingID:(id)arg3 ;
-(VCNRDeviceSyncService *)currentSyncService;
-(void)companionSyncSession:(id)arg1 didFinishWithError:(id)arg2 ;
-(void)setCurrentSyncService:(VCNRDeviceSyncService *)arg1 ;
-(WFDebouncer *)debouncer;
-(void)resetSession;
-(void)companionSyncSessionDidFinishSendingChanges:(id)arg1 ;
-(void)requestSync;
-(void)service:(id)arg1 encounteredError:(id)arg2 context:(id)arg3 ;
-(void)setDelegate:(id<VCCompanionSyncServiceDelegate>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(SYService *)service;
-(BOOL)isRunningOnWatch;
-(void)requestFullResync;
-(id<VCCompanionSyncServiceDelegate>)delegate;
-(void)configureReasonForUnderlyingSession:(id)arg1 withSession:(id)arg2 ;
-(void)setCurrentDataHandlers:(NSSet *)arg1 ;
-(void)service:(id)arg1 willSwitchFromPairingID:(id)arg2 toPairingID:(id)arg3 ;
@end

