/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:40:19 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServicesUI.framework/AppleMediaServicesUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/AAUISpecifierProvider.h>
#import <libobjc.A.dylib/AMSUIWebDelegate.h>

@protocol AAUISpecifierProviderDelegate;
@class NSArray, AIDAAccountManager, PSSpecifier, NSString;

@interface AMSUIManageSubsriptionSpecifierProvider : NSObject <AAUISpecifierProvider, AMSUIWebDelegate> {

	id<AAUISpecifierProviderDelegate> _delegate;
	NSArray* _specifiers;
	AIDAAccountManager* _accountManager;
	PSSpecifier* _activelyLoadingSpecifier;

}

@property (nonatomic,retain) AIDAAccountManager * accountManager;                            //@synthesize accountManager=_accountManager - In the implementation block
@property (nonatomic,retain) PSSpecifier * activelyLoadingSpecifier;                         //@synthesize activelyLoadingSpecifier=_activelyLoadingSpecifier - In the implementation block
@property (assign,nonatomic,__weak) id<AAUISpecifierProviderDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSArray * specifiers;                                             //@synthesize specifiers=_specifiers - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setAccountManager:(AIDAAccountManager *)arg1 ;
-(id)_appleAccount;
-(AIDAAccountManager *)accountManager;
-(void)setDelegate:(id<AAUISpecifierProviderDelegate>)arg1 ;
-(id<AAUISpecifierProviderDelegate>)delegate;
-(void)setSpecifiers:(NSArray *)arg1 ;
-(id)initWithAccountManager:(id)arg1 ;
-(NSArray *)specifiers;
-(id)_findViewController;
-(void)webViewController:(id)arg1 handleAuthenticateRequest:(id)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)webViewController:(id)arg1 handleDelegateAction:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)webViewController:(id)arg1 handleDialogRequest:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)_storeAccount;
-(void)_subscriptionsSpecifierWasTapped:(id)arg1 ;
-(BOOL)_isSingleIdentity;
-(PSSpecifier *)activelyLoadingSpecifier;
-(void)setActivelyLoadingSpecifier:(PSSpecifier *)arg1 ;
@end
