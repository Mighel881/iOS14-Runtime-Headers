/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:50:49 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CNUIContactsAuthorizationModelFetching.h>
#import <libobjc.A.dylib/CNUIContactsAuthorizationModelSaving.h>

@protocol CNTCCSettings, CNUICoreRemoteApplicationIconFetching;
@class NSString;

@interface CNUIContactsAuthorizationStore : NSObject <CNUIContactsAuthorizationModelFetching, CNUIContactsAuthorizationModelSaving> {

	NSString* _bundleIdentifier;
	id<CNTCCSettings> _tccSettings;
	id<CNUICoreRemoteApplicationIconFetching> _iconFetcher;

}

@property (nonatomic,readonly) NSString * bundleIdentifier;                                        //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,readonly) id<CNTCCSettings> tccSettings;                                      //@synthesize tccSettings=_tccSettings - In the implementation block
@property (nonatomic,readonly) id<CNUICoreRemoteApplicationIconFetching> iconFetcher;              //@synthesize iconFetcher=_iconFetcher - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)bundleIdentifier;
-(id)saveContactsAuthorizationModel:(id)arg1 ;
-(id)contactsAuthorizationModel;
-(id)contactsAuthorizationModelByLoadingIconsOfRemoteItemsInModel:(id)arg1 ;
-(id)recordForBundleIdentifier:(id)arg1 ;
-(id)records;
-(id)initWithBundleIdentifier:(id)arg1 ;
-(id)init;
-(id<CNTCCSettings>)tccSettings;
-(id<CNUICoreRemoteApplicationIconFetching>)iconFetcher;
@end
