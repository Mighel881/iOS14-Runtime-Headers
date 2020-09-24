/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:46:26 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PLCloudPersistentHistoryMigratorContext
@required
-(id)readMigrationMarker;
-(void)setLocalVersion:(id)arg1;
-(void)setMigrationMarker:(id)arg1;
-(void)saveTokenObject:(id)arg1;
-(id)readLocalVersion;
-(void)setMigratedLocalVersion:(id)arg1;
-(void)updateTransferCountsWithInsertedPhotoCount:(unsigned long long)arg1 insertedVideoCount:(unsigned long long)arg2;
-(void)resetSyncDueToMigrationMarker;

@end
