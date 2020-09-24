/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:41:41 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortrait.framework/PersonalizationPortrait
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/PPConnectionsClientProtocol.h>

@class PPXPCClientHelper, PPXPCClientPipelinedBatchQueryManager;

@interface PPConnectionsClient : NSObject <PPConnectionsClientProtocol> {

	PPXPCClientHelper* _clientHelper;
	PPXPCClientPipelinedBatchQueryManager* _queryManager;

}
+(id)sharedInstance;
-(void)registerFeedback:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_unblockPendingQueries;
-(BOOL)recentLocationsForConsumer:(unsigned long long)arg1 criteria:(id)arg2 limit:(unsigned long long)arg3 explanationSet:(id)arg4 client:(id)arg5 error:(id*)arg6 handleBatch:(/*^block*/id)arg7 ;
-(BOOL)recentLocationDonationsSinceDate:(id)arg1 client:(id)arg2 error:(id*)arg3 handleBatch:(/*^block*/id)arg4 ;
-(id)_remoteObjectProxy;
-(id)init;
-(void)recentLocationsBatch:(id)arg1 isLast:(BOOL)arg2 error:(id)arg3 queryId:(unsigned long long)arg4 completion:(/*^block*/id)arg5 ;
@end
