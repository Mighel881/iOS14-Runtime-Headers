/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:44:14 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CommunicationsSetupUI.framework/CommunicationsSetupUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSListController.h>

@class IMAccount, FTRegConnectionHandler;

@interface CNFInternalAccountViewController : PSListController {

	IMAccount* _account;
	FTRegConnectionHandler* _connectionHandler;

}

@property (nonatomic,retain) IMAccount * account;              //@synthesize account=_account - In the implementation block
-(void)viewWillDisappear:(BOOL)arg1 ;
-(id)bundle;
-(void)setAccount:(IMAccount *)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(IMAccount *)account;
-(void)_stopListeningForNotifications;
-(void)_startListeningForNotifications;
-(void)_handleDaemonConnected:(id)arg1 ;
-(void)_handleDaemonDisconnected:(id)arg1 ;
-(id)initWithAccount:(id)arg1 ;
-(id)specifiers;
-(id)statusForAlias:(id)arg1 ;
-(BOOL)isConnectedToDaemon;
-(id)specifierForAlias:(id)arg1 ;
-(void)_handleAccountNotification:(id)arg1 ;
-(id)accountLoginStatus:(id)arg1 ;
-(id)registrationStatus:(id)arg1 ;
-(id)accountLogin:(id)arg1 ;
-(id)accountType:(id)arg1 ;
-(id)accountDisplayName:(id)arg1 ;
-(id)registrationFailureReason:(id)arg1 ;
-(id)accountIsActive:(id)arg1 ;
@end

