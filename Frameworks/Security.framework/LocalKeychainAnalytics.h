/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:50:36 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/Security.framework/Security
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Security/SFAnalytics.h>

@protocol OS_dispatch_queue;
@class NSMutableArray, NSObject, NSDate;

@interface LocalKeychainAnalytics : SFAnalytics {

	BOOL _probablyInClassD;
	NSMutableArray* _pendingReports;
	NSObject*<OS_dispatch_queue> _queue;
	int _notificationToken;
	NSDate* _backupStartTime;
	int _backupType;

}
+(id)databasePath;
-(BOOL)canPersistMetrics;
-(void)processPendingMessages;
-(void)reportKeychainUpgradeFrom:(int)arg1 to:(int)arg2 outcome:(int)arg3 error:(id)arg4 ;
-(void)reportKeychainUpgradeOutcome:(int)arg1 attributes:(id)arg2 ;
-(void)reportKeychainBackupStartWithType:(int)arg1 ;
-(void)reportKeychainBackupEnd:(BOOL)arg1 error:(id)arg2 ;
-(id)init;
@end
