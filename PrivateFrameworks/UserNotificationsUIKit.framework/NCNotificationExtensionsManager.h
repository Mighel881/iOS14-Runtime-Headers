/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:45:51 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NCNotificationExtensionCache;

@interface NCNotificationExtensionsManager : NSObject {

	NCNotificationExtensionCache* _extensionsCache;
	id _extensionsDiscoveryToken;

}

@property (nonatomic,retain) NCNotificationExtensionCache * extensionsCache;              //@synthesize extensionsCache=_extensionsCache - In the implementation block
@property (nonatomic,retain) id extensionsDiscoveryToken;                                 //@synthesize extensionsDiscoveryToken=_extensionsDiscoveryToken - In the implementation block
+(id)sharedInstance;
+(void)initialize;
-(NCNotificationExtensionCache *)extensionsCache;
-(id)extensionsDiscoveryToken;
-(id)init;
-(id)_matchingAttributes;
-(void)_stopMatchingExtensions;
-(void)setExtensionsCache:(NCNotificationExtensionCache *)arg1 ;
-(void)setExtensionsDiscoveryToken:(id)arg1 ;
-(void)_beginMatchingExtensions;
-(id)extensionForNotificationRequest:(id)arg1 ;
@end
