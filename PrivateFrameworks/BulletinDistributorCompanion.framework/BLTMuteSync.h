/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:36:59 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSMutableDictionary, NPSManager, NSObject, NSSet;

@interface BLTMuteSync : NSObject {

	NSMutableDictionary* _mutedSectionIdentifiersForDay;
	NPSManager* _npsManager;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,readonly) NSSet * mutedForTodaySectionIdentifiers; 
-(void)dealloc;
-(id)init;
-(void)_updateObservers;
-(void)_loadMutedSectionIdentifiers;
-(NSSet *)mutedForTodaySectionIdentifiers;
-(void)_queue_sync;
-(BOOL)isMutedForTodaySectionIdentifier:(id)arg1 ;
-(void)addSectionIdentifiers:(id)arg1 ;
-(void)removeSectionIdentifiers:(id)arg1 ;
-(void)_cleanMuteIdentifiers;
@end
