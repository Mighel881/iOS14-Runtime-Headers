/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:43:47 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <HealthDaemon/HDHealthEntity.h>

@interface HDObjectAuthorizationEntity : HDHealthEntity
+(id)uniquedColumns;
+(const SCD_Struct_HD0*)columnDefinitionsWithCount:(unsigned long long*)arg1 ;
+(id)databaseTable;
+(long long)protectionClass;
+(id)foreignKeys;
+(BOOL)resetObjectAuthorizationRecordsForSource:(id)arg1 profile:(id)arg2 error:(id*)arg3 ;
+(BOOL)resetAllObjectAuthorizationRecordsForProfile:(id)arg1 error:(id*)arg2 ;
+(BOOL)_setObjectAuthorizationRecords:(id)arg1 syncProvenance:(long long)arg2 skipErrors:(BOOL)arg3 profile:(id)arg4 error:(id*)arg5 ;
+(BOOL)resetAuthorizationForObjects:(id)arg1 profile:(id)arg2 error:(id*)arg3 ;
+(id)authorizationRecordsForSamples:(id)arg1 sourceEntity:(id)arg2 profile:(id)arg3 error:(id*)arg4 ;
+(id)authorizationRecordsBySourceForSampleWithUUID:(id)arg1 profile:(id)arg2 error:(id*)arg3 ;
+(id)authorizationStatusForSamplesOfType:(id)arg1 sourceEntity:(id)arg2 profile:(id)arg3 error:(id*)arg4 ;
+(BOOL)_insertCodableObjectAuthorizations:(id)arg1 syncProvenance:(long long)arg2 profile:(id)arg3 error:(id*)arg4 ;
+(BOOL)setObjectAuthorizationRecords:(id)arg1 syncProvenance:(long long)arg2 profile:(id)arg3 error:(id*)arg4 ;
+(id)propertyForSyncProvenance;
@end
