/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:37:00 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/LoginKit.framework/LoginKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface LKLogoutSupport : NSObject
-(BOOL)isCurrentUserAnonymous;
-(void)logoutToLoginSessionWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)init;
-(void)logoutToLoginWindowWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)logoutToLoginUserWithCompletionHandler:(/*^block*/id)arg1 ;
-(BOOL)_canLogoutToLoginSession;
-(id)logoutWarningMessage;
@end

