/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:37:44 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/MSUDataAccessor.framework/MSUDataAccessor
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MSUDataAccessor/LPMedia.h>

@interface LPAPFSVolume : LPMedia
+(void)initialize;
+(void)_loadMountPointTableForMode:(int)arg1 ;
+(id)defaultMountPointGivenRole:(int)arg1 ;
+(id)defaultVolumeNameGivenRole:(int)arg1 ;
+(id)supportedContentTypes;
-(id)volumeGroupUUID;
-(id)snapshotMountPoints;
-(BOOL)mountAtPath:(id)arg1 error:(id*)arg2 ;
-(BOOL)mountAtPath:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
-(BOOL)unmountWithError:(id*)arg1 ;
-(BOOL)unmountWithOptions:(id)arg1 error:(id*)arg2 ;
-(id)snapshotInfoWithError:(id*)arg1 ;
-(BOOL)setRole:(int)arg1 withError:(id*)arg2 ;
-(BOOL)isCaseSenstive;
-(BOOL)isFilevaultEncrypted;
-(id)pairedVolume;
-(BOOL)eraseVolumeWithError:(id*)arg1 ;
-(BOOL)mountWithError:(id*)arg1 ;
-(id)mountAtTemporaryPathWithError:(id*)arg1 ;
-(BOOL)unmountAllWithError:(id*)arg1 ;
-(BOOL)deleteVolumeWithError:(id*)arg1 ;
-(id)snapshotsWithError:(id*)arg1 ;
-(BOOL)createSnapshot:(id)arg1 error:(id*)arg2 ;
-(BOOL)deleteSnapshots:(id)arg1 waitForDeletionFor:(double)arg2 error:(id*)arg3 ;
-(BOOL)renameSnapshot:(id)arg1 to:(id)arg2 error:(id*)arg3 ;
-(BOOL)revertToSnapshot:(id)arg1 error:(id*)arg2 ;
-(BOOL)rootToSnapshot:(id)arg1 error:(id*)arg2 ;
-(int)role;
-(BOOL)isEncrypted;
-(BOOL)isMounted;
-(id)container;
@end
