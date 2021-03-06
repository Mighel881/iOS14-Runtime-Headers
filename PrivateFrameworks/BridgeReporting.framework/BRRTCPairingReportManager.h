/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:43:01 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/BridgeReporting.framework/BridgeReporting
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class BRRTCPairingMetric, NSMutableDictionary, BRSetupControllerTracker, NSString, NSURL, NSObject, NSMutableArray;

@interface BRRTCPairingReportManager : NSObject {

	BOOL _pairingMetricSetup;
	BOOL _metricBusy;
	BRRTCPairingMetric* _pairingMetric;
	NSMutableDictionary* _openPairingTimeEvents;
	BRSetupControllerTracker* _setupControllerTracker;
	NSString* _currentPairingMetricID;
	NSURL* _currentPairingMetricBridgePlistPath;
	NSObject*<OS_dispatch_queue> _queue;
	/*^block*/id _archivePairingMetric;
	NSMutableArray* _pendingEvents;
	/*^block*/id _pendingMetricSubmission;

}

@property (nonatomic,retain) BRRTCPairingMetric * pairingMetric;                             //@synthesize pairingMetric=_pairingMetric - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * openPairingTimeEvents;                    //@synthesize openPairingTimeEvents=_openPairingTimeEvents - In the implementation block
@property (nonatomic,retain) BRSetupControllerTracker * setupControllerTracker;              //@synthesize setupControllerTracker=_setupControllerTracker - In the implementation block
@property (assign,nonatomic,__weak) NSString * currentPairingMetricID;                       //@synthesize currentPairingMetricID=_currentPairingMetricID - In the implementation block
@property (nonatomic,retain) NSURL * currentPairingMetricBridgePlistPath;                    //@synthesize currentPairingMetricBridgePlistPath=_currentPairingMetricBridgePlistPath - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                             //@synthesize queue=_queue - In the implementation block
@property (nonatomic,copy) id archivePairingMetric;                                          //@synthesize archivePairingMetric=_archivePairingMetric - In the implementation block
@property (assign,nonatomic) BOOL pairingMetricSetup;                                        //@synthesize pairingMetricSetup=_pairingMetricSetup - In the implementation block
@property (nonatomic,retain) NSMutableArray * pendingEvents;                                 //@synthesize pendingEvents=_pendingEvents - In the implementation block
@property (assign,nonatomic) BOOL metricBusy;                                                //@synthesize metricBusy=_metricBusy - In the implementation block
@property (nonatomic,copy) id pendingMetricSubmission;                                       //@synthesize pendingMetricSubmission=_pendingMetricSubmission - In the implementation block
-(NSMutableArray *)pendingEvents;
-(void)completeRTCPairingMetricForMetricID:(id)arg1 withSuccess:(/*^block*/id)arg2 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setupPairingMetric:(unsigned long long)arg1 ;
-(void)setMetricBusy:(BOOL)arg1 ;
-(BOOL)eventClearedForRecord:(unsigned long long)arg1 ;
-(void)writeToPairingPlist:(id)arg1 withValue:(id)arg2 ;
-(void)addEventToPendingQueue:(unsigned long long)arg1 withValue:(id)arg2 ;
-(BOOL)pairingMetricSetup;
-(NSMutableDictionary *)openPairingTimeEvents;
-(void)addPairingTimeEventToPairingReportPlist:(unsigned long long)arg1 withValue:(id)arg2 withError:(id)arg3 ;
-(id)truncateSetupControllerClassName:(id)arg1 ;
-(BRSetupControllerTracker *)setupControllerTracker;
-(void)setSetupControllerTracker:(BRSetupControllerTracker *)arg1 ;
-(void)writeDeltasForSetupControllerActions:(id)arg1 action:(unsigned long long)arg2 ;
-(void)writePushOrHoldToPairingPlist:(id)arg1 action:(unsigned long long)arg2 ;
-(id)deltaForControllerAction:(id)arg1 ;
-(void)submitAnyPendingMetrics;
-(BOOL)metricKeyIsBlacklisted:(id)arg1 ;
-(id)trimPrecision:(id)arg1 ;
-(NSURL *)currentPairingMetricBridgePlistPath;
-(void)checkInWithClosingPairingTimeEvent:(unsigned long long)arg1 ;
-(id)pendingMetricSubmission;
-(void)setPendingMetricSubmission:(id)arg1 ;
-(void)setPairingMetricSetup:(BOOL)arg1 ;
-(void)clearPendingEventQueue;
-(void)createPairingReportPlistWithPairingType:(unsigned long long)arg1 ;
-(void)addPendingEventToMetric;
-(void)setOpenPairingTimeEvents:(NSMutableDictionary *)arg1 ;
-(void)initializeEndToEndMetric;
-(void)flagForAutomation;
-(void)addMetaKeys;
-(void)cleanUpMetricDirectoryWithCompletion:(/*^block*/id)arg1 ;
-(void)checkInWithOpenPairingTimeEvent:(unsigned long long)arg1 ;
-(void)setCurrentPairingMetricID:(NSString *)arg1 ;
-(void)setCurrentPairingMetricBridgePlistPath:(NSURL *)arg1 ;
-(void)archivePairingMetric:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(id)combineMetricPlistsForArchive:(id)arg1 ;
-(BOOL)metricBusy;
-(void)setPendingEvents:(NSMutableArray *)arg1 ;
-(id)initWithPairingBeginsType:(unsigned long long)arg1 ;
-(void)checkInWithController:(id)arg1 action:(unsigned long long)arg2 ;
-(void)completePairingMetricWithSuccess:(BOOL)arg1 ;
-(BRRTCPairingMetric *)pairingMetric;
-(void)setPairingMetric:(BRRTCPairingMetric *)arg1 ;
-(NSString *)currentPairingMetricID;
-(id)archivePairingMetric;
-(void)setArchivePairingMetric:(id)arg1 ;
@end

