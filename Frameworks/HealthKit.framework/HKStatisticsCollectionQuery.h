/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:50:11 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthKit/HKQuery.h>
#import <libobjc.A.dylib/HKStatisticsCollectionQueryClientInterface.h>

@class NSDate, NSDateComponents, NSMutableArray, NSNumber, HKStatisticsCollection, NSString;

@interface HKStatisticsCollectionQuery : HKQuery <HKStatisticsCollectionQueryClientInterface> {

	NSDate* _anchorDate;
	unsigned long long _options;
	NSDateComponents* _intervalComponents;
	NSMutableArray* _results;
	BOOL _hasReceivedInitialResults;
	BOOL _requireQuantityType;
	/*^block*/id _initialResultsHandler;
	/*^block*/id _statisticsUpdateHandler;
	NSNumber* _lastAnchor;
	HKStatisticsCollection* _statisticsCollection;
	unsigned long long _mergeStrategy;

}

@property (retain) NSNumber * lastAnchor;                                      //@synthesize lastAnchor=_lastAnchor - In the implementation block
@property (retain) HKStatisticsCollection * statisticsCollection;              //@synthesize statisticsCollection=_statisticsCollection - In the implementation block
@property (assign,nonatomic) unsigned long long mergeStrategy;                 //@synthesize mergeStrategy=_mergeStrategy - In the implementation block
@property (readonly) NSDate * anchorDate;                                      //@synthesize anchorDate=_anchorDate - In the implementation block
@property (readonly) unsigned long long options;                               //@synthesize options=_options - In the implementation block
@property (copy,readonly) NSDateComponents * intervalComponents;               //@synthesize intervalComponents=_intervalComponents - In the implementation block
@property (nonatomic,copy) id initialResultsHandler;                           //@synthesize initialResultsHandler=_initialResultsHandler - In the implementation block
@property (nonatomic,copy) id statisticsUpdateHandler;                         //@synthesize statisticsUpdateHandler=_statisticsUpdateHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)configurationClass;
+(id)clientInterfaceProtocol;
+(void)configureClientInterface:(id)arg1 ;
-(unsigned long long)mergeStrategy;
-(void)queue_queryDidDeactivate:(id)arg1 ;
-(void)queue_deliverError:(id)arg1 ;
-(BOOL)queue_shouldDeactivateAfterInitialResults;
-(NSNumber *)lastAnchor;
-(id)initWithSampleType:(id)arg1 samplePredicate:(id)arg2 options:(unsigned long long)arg3 anchorDate:(id)arg4 intervalComponents:(id)arg5 ;
-(void)setLastAnchor:(NSNumber *)arg1 ;
-(void)client_deliverStatisticsBatch:(id)arg1 resetStatistics:(BOOL)arg2 isFinal:(BOOL)arg3 anchor:(id)arg4 query:(id)arg5 ;
-(void)_queue_deliverStatisticsObjects:(id)arg1 forQuery:(id)arg2 ;
-(void)client_deliverUpdatedStatistics:(id)arg1 anchor:(id)arg2 query:(id)arg3 ;
-(void)_queue_deliverInitialStatisticsObjects:(id)arg1 anchor:(id)arg2 queryUUID:(id)arg3 ;
-(void)_queue_deliverResetStatisticsObjects:(id)arg1 forQuery:(id)arg2 ;
-(HKStatisticsCollection *)statisticsCollection;
-(void)setStatisticsCollection:(HKStatisticsCollection *)arg1 ;
-(void)setStatisticsUpdateHandler:(id)arg1 ;
-(id)initWithQuantityType:(id)arg1 quantitySamplePredicate:(id)arg2 options:(unsigned long long)arg3 anchorDate:(id)arg4 intervalComponents:(id)arg5 ;
-(void)setInitialResultsHandler:(id)arg1 ;
-(id)initialResultsHandler;
-(id)statisticsUpdateHandler;
-(unsigned long long)options;
-(void)queue_validate;
-(void)queue_populateConfiguration:(id)arg1 ;
-(NSDateComponents *)intervalComponents;
-(void)setMergeStrategy:(unsigned long long)arg1 ;
-(NSDate *)anchorDate;
@end
