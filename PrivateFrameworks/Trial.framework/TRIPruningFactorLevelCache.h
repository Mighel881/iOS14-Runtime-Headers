/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:35:39 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/Trial.framework/Trial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/TRIFactorLevelCaching.h>

@class _PASLock, _PASSimpleCoalescingTimer;

@interface TRIPruningFactorLevelCache : NSObject <TRIFactorLevelCaching> {

	_PASLock* _lock;
	_PASSimpleCoalescingTimer* _pruningTimer;
	double _pruningDelaySeconds;

}
-(id)objectForKeyedSubscript:(id)arg1 ;
-(void)pruneSynchronously;
-(id)init;
-(void)enumerateFactorLevelsUsingBlock:(/*^block*/id)arg1 ;
-(void)_populateCacheForRequiredKey:(id)arg1 guardedData:(id)arg2 ;
-(id)initWithPruningDelaySeconds:(double)arg1 loadFactorLevels:(/*^block*/id)arg2 ;
-(id)factorLevelCurrentlyCachedForFactorName:(id)arg1 ;
@end
