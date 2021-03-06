/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:50:09 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_os_log;
#import <HealthKit/HealthKit-Structs.h>
@class NSHashTable, NSString, NSObject, NSArray;

@interface HKSynchronousObserverSet : NSObject {

	NSHashTable* _observerTable;
	NSString* _name;
	NSObject*<OS_os_log> _category;
	os_unfair_lock_s _lock;

}

@property (readonly) unsigned long long count; 
@property (copy,readonly) NSArray * allObservers; 
-(void)unregisterObserver:(id)arg1 ;
-(void)registerObserver:(id)arg1 ;
-(unsigned long long)count;
-(id)initWithName:(id)arg1 loggingCategory:(id)arg2 ;
-(void)notifyObservers:(/*^block*/id)arg1 ;
-(NSArray *)allObservers;
@end

