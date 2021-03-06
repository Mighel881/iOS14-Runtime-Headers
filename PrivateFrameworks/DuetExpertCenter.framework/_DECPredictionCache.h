/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:42:59 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/DuetExpertCenter.framework/DuetExpertCenter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSObject;

@interface _DECPredictionCache : NSObject {

	NSMutableDictionary* _cache;
	NSObject*<OS_dispatch_queue> _queue;

}
-(id)predictionsForCategories:(unsigned long long)arg1 consumer:(unsigned long long)arg2 ;
-(id)init;
-(void)clearCacheForCategory:(unsigned long long)arg1 consumer:(unsigned long long)arg2 ;
-(void)cachePredictions:(id)arg1 consumer:(unsigned long long)arg2 ;
-(id)description;
@end

