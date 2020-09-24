/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:43:43 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/HDSyncStore.h>

@class HDProfile, NSUUID, NSString;

@interface _HDStaticSyncStore : NSObject <HDSyncStore> {

	long long _syncProvenance;
	HDProfile* _profile;
	NSUUID* _storeIdentifier;

}

@property (nonatomic,copy,readonly) NSUUID * storeIdentifier;              //@synthesize storeIdentifier=_storeIdentifier - In the implementation block
@property (nonatomic,__weak,readonly) HDProfile * profile;                 //@synthesize profile=_profile - In the implementation block
@property (readonly) int protocolVersion; 
@property (readonly) long long syncStoreType; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(int)protocolVersion;
-(id)syncStoreIdentifier;
-(HDProfile *)profile;
-(NSUUID *)storeIdentifier;
-(NSString *)description;
-(id)orderedSyncEntities;
-(id)databaseIdentifier;
-(BOOL)replacePersistedAnchorMap:(id)arg1 error:(id*)arg2 ;
-(long long)syncProvenance;
-(BOOL)supportsSpeculativeChangesForSyncEntityClass:(Class)arg1 ;
-(id)initWithProfile:(id)arg1 storeIdentifier:(id)arg2 error:(id*)arg3 ;
-(BOOL)resetReceivedSyncAnchorMapWithError:(id*)arg1 ;
-(long long)syncEpoch;
-(id)syncStoreDefaultSourceBundleIdentifier;
-(id)syncEntityDependenciesForSyncEntity:(Class)arg1 ;
-(BOOL)canRecieveSyncObjectsForEntityClass:(Class)arg1 ;
-(BOOL)enforceSyncEntityOrdering;
-(BOOL)shouldContinueAfterAnchorValidationError:(id)arg1 ;
-(BOOL)shouldEnforceSequenceOrdering;
-(long long)expectedSequenceNumberForSyncEntityClass:(Class)arg1 ;
-(void)setExpectedSequenceNumber:(long long)arg1 forSyncEntityClass:(Class)arg2 ;
-(long long)syncStoreType;
@end
