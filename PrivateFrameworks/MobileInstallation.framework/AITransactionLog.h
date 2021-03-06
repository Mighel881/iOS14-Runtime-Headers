/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:42:08 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/MobileInstallation.framework/MobileInstallation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_os_log;
@class NSObject;

@interface AITransactionLog : NSObject {

	NSObject*<OS_os_log> _log;

}
+(void)logStep:(unsigned long long)arg1 byParty:(unsigned long long)arg2 phase:(unsigned long long)arg3 success:(BOOL)arg4 forBundleID:(id)arg5 description:(id)arg6 ;
+(id)_defaultLog;
+(void)initializeWithLog:(id)arg1 ;
+(void)logScenario:(id)arg1 step:(unsigned long long)arg2 success:(BOOL)arg3 forBundleID:(id)arg4 description:(id)arg5 ;
-(id)_initWithLog:(id)arg1 ;
-(void)_logScenario:(id)arg1 step:(unsigned long long)arg2 success:(BOOL)arg3 forBundleID:(id)arg4 description:(id)arg5 ;
@end

