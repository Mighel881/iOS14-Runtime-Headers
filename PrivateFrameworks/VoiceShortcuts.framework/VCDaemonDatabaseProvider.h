/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:46:24 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/VoiceShortcuts.framework/VoiceShortcuts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/VCDatabaseProvider.h>

@protocol OS_dispatch_queue;
@class WFDatabase, NSObject, NSString;

@interface VCDaemonDatabaseProvider : NSObject <VCDatabaseProvider> {

	WFDatabase* _database;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
@property (nonatomic,readonly) WFDatabase * database;                           //@synthesize database=_database - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(WFDatabase *)database;
-(id)databaseWithError:(id*)arg1 ;
-(BOOL)isShortcutsAppInstalled;
-(id)init;
-(NSObject*<OS_dispatch_queue>)queue;
-(BOOL)migrateDatabasesToShortcutsFolderIfNeeded;
-(void)migrateVoiceShortcutsToShortcutsInDatabase:(id)arg1 ;
@end

