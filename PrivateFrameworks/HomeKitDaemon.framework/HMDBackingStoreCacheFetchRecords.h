/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:41:04 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HMDBackingStoreOperation.h>

@class HMDBackingStoreCacheGroup, NSArray;

@interface HMDBackingStoreCacheFetchRecords : HMDBackingStoreOperation {

	BOOL _recursive;
	HMDBackingStoreCacheGroup* _group;
	/*^block*/id _fetchResult;
	NSArray* _recordNames;
	NSArray* _uuids;
	NSArray* _parentUuids;

}

@property (nonatomic,retain) HMDBackingStoreCacheGroup * group;              //@synthesize group=_group - In the implementation block
@property (nonatomic,copy) id fetchResult;                                   //@synthesize fetchResult=_fetchResult - In the implementation block
@property (nonatomic,retain) NSArray * recordNames;                          //@synthesize recordNames=_recordNames - In the implementation block
@property (nonatomic,retain) NSArray * uuids;                                //@synthesize uuids=_uuids - In the implementation block
@property (nonatomic,retain) NSArray * parentUuids;                          //@synthesize parentUuids=_parentUuids - In the implementation block
@property (assign) BOOL recursive;                                           //@synthesize recursive=_recursive - In the implementation block
-(NSArray *)uuids;
-(void)setGroup:(HMDBackingStoreCacheGroup *)arg1 ;
-(void)setFetchResult:(id)arg1 ;
-(HMDBackingStoreCacheGroup *)group;
-(void)setUuids:(NSArray *)arg1 ;
-(id)fetchResult;
-(NSArray *)recordNames;
-(id)mainReturningError;
-(void)setRecordNames:(NSArray *)arg1 ;
-(NSArray *)parentUuids;
-(BOOL)recursive;
-(id)initWithGroup:(id)arg1 uuids:(id)arg2 fetchResult:(/*^block*/id)arg3 ;
-(id)initWithGroup:(id)arg1 parentUuids:(id)arg2 fetchResult:(/*^block*/id)arg3 ;
-(id)initWithGroup:(id)arg1 records:(id)arg2 fetchResult:(/*^block*/id)arg3 ;
-(void)setRecursive:(BOOL)arg1 ;
-(void)setParentUuids:(NSArray *)arg1 ;
@end

