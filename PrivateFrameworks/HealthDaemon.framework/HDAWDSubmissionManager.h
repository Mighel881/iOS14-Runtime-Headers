/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:43:45 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/HDHealthDaemonReadyObserver.h>
#import <libobjc.A.dylib/HDDiagnosticObject.h>
#import <libobjc.A.dylib/HDAnalyticsSubmissionCoordinatorDelegate.h>

@protocol OS_dispatch_queue;
@class HDProfile, NSMutableDictionary, NSMutableArray, NSObject, _HDAWDPeriodicAction, NSString;

@interface HDAWDSubmissionManager : NSObject <HDHealthDaemonReadyObserver, HDDiagnosticObject, HDAnalyticsSubmissionCoordinatorDelegate> {

	HDProfile* _profile;
	NSMutableDictionary* _serverConnectionsByComponentId;
	NSMutableArray* _actions;
	NSObject*<OS_dispatch_queue> _queue;
	_HDAWDPeriodicAction* _fitnessDailyAction;
	BOOL _started;
	int _fitnessDailyCollectionEnabledNotifyToken;
	/*^block*/id _testHandler;

}

@property (nonatomic,copy) id testHandler;                              //@synthesize testHandler=_testHandler - In the implementation block
@property (nonatomic,__weak,readonly) HDProfile * profile;              //@synthesize profile=_profile - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)daemonReady:(id)arg1 ;
-(id)_generateHeartDailyAnalyticsWithStartDate:(id)arg1 endDate:(id)arg2 ;
-(id)_sleepNightEventFromSamples:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 calendar:(id)arg4 ;
-(id)_ecgClassificationsBetweenStartDate:(id)arg1 endDate:(id)arg2 ;
-(id)initWithProfile:(id)arg1 ;
-(long long)_int64ForKeyPrefix:(id)arg1 profile:(id)arg2 date:(id*)arg3 error:(id*)arg4 ;
-(BOOL)isFitnessDailyCollectionEnabled;
-(long long)_countOfObjectsWithSQLQuery:(id)arg1 database:(id)arg2 error:(id*)arg3 bindingHandler:(/*^block*/id)arg4 ;
-(long long)_countRecordedTachogramsBetweenStartDate:(id)arg1 endDate:(id)arg2 ;
-(void)_registerForFitnessDailyCollection;
-(long long)_countAnalyzedTachogramsPast24Hours;
-(void)_queue_updateFitnessDailyCollectionEnabled;
-(long long)_nonAppleSourcesWithDataSince:(id)arg1 transaction:(id)arg2 error:(id*)arg3 ;
-(HDProfile *)profile;
-(id)_actions;
-(void)dealloc;
-(long long)_deletedRowCountWithTransaction:(id)arg1 error:(id*)arg2 ;
-(BOOL)_computeAndSubmitHealthTypesDifferentialPrivacyMetric;
-(BOOL)_submitMetric:(id)arg1 container:(id)arg2 connection:(id)arg3 force:(BOOL)arg4 ;
-(BOOL)_computeAndSubmitSleepAlarmStatistics:(BOOL)arg1 ;
-(void)reportDailyAnalyticsWithCoordinator:(id)arg1 completion:(/*^block*/id)arg2 ;
-(long long)_countActiveEnergySamplesBetweenStartDate:(id)arg1 endDate:(id)arg2 ;
-(id)_updateDeltaToInt64:(long long)arg1 forKey:(id)arg2 profile:(id)arg3 currentDate:(id)arg4 timeInterval:(double)arg5 error:(id*)arg6 ;
-(long long)_objectRowCountWithTransaction:(id)arg1 afterRowId:(long long)arg2 error:(id*)arg3 ;
-(id)_sleepConsistencyEventForMonthPriorToDate:(id)arg1 calendar:(id)arg2 ;
-(BOOL)_addRowCountDeltaToEvent:(id)arg1 profile:(id)arg2 currentDate:(id)arg3 ;
-(id)diagnosticDescription;
-(id)_serverConnectionForComponentId:(unsigned)arg1 ;
-(id)_ecgAlgorithmVersion;
-(long long)_nonAppleSourcesCountWithTransaction:(id)arg1 error:(id*)arg2 ;
-(BOOL)_updateDatabaseStatsEvent:(id)arg1 profile:(id)arg2 currentDate:(id)arg3 ;
-(long long)_countMobileAssetsDownloadedPast24Hours;
-(void)setTestHandler:(id)arg1 ;
-(BOOL)aggregateDatabaseSizeStats:(id)arg1 ;
-(id)_hourlyStatisticsCollectionForStartDate:(id)arg1 endDate:(id)arg2 quantityType:(id)arg3 statisticsOptions:(unsigned long long)arg4 error:(id*)arg5 ;
-(id)_exerciseMinuteHoursFromDate:(id)arg1 toDate:(id)arg2 error:(id*)arg3 ;
-(id)_statisticsForTimeDeltas:(id)arg1 ;
-(BOOL)_computeAndSubmitSleepAlarmDailyReportWithAction:(id)arg1 force:(BOOL)arg2 ;
-(BOOL)_enumerateAppleStandHoursFromDate:(id)arg1 toDate:(id)arg2 error:(id*)arg3 handler:(/*^block*/id)arg4 ;
-(void)_resetCountAnalyzedTachogramsPast24Hours;
-(id)testHandler;
-(void)updateFitnessDailyCollectionEnabled;
-(long long)_manuallyEnteredTypesCountWithTransaction:(id)arg1 error:(id*)arg2 ;
-(BOOL)_computeAndSubmitDatabaseStatsMetric:(BOOL)arg1 ;
-(BOOL)_computeAndSubmitFitnessDailyReportWithAction:(id)arg1 force:(BOOL)arg2 ;
-(BOOL)_setInt64:(long long)arg1 keyPrefix:(id)arg2 profile:(id)arg3 date:(id)arg4 error:(id*)arg5 ;
-(void)_resetMobileAssetsDownloadedPast24Hours;
-(id)_hasWatchSourcesWithTransaction:(id)arg1 error:(id*)arg2 ;
-(id)_activitySummaryForActivityCacheIndex:(long long)arg1 error:(id*)arg2 ;
-(long long)_CDACountWithTransaction:(id)arg1 error:(id*)arg2 ;
-(id)_aFibSamplesBetweenStartDate:(id)arg1 endDate:(id)arg2 ;
-(BOOL)_isBradycardiaDetectionEnabled;
-(id)_sleepSamplesBeforeDate:(id)arg1 days:(long long)arg2 startDate:(id*)arg3 endDate:(id*)arg4 calendar:(id)arg5 ;
-(void)resetTask:(id)arg1 ;
-(BOOL)runTask:(id)arg1 error:(id*)arg2 ;
-(void)_queue_start;
-(BOOL)_isTachycardiaDetectionEnabled;
-(BOOL)_computeAndSubmitHeartDailyAnalyticsWithAction:(id)arg1 force:(BOOL)arg2 ;
-(id)motionToken;
@end
