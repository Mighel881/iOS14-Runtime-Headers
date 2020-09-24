/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:45:07 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ITMLKit/IKJSObject.h>
#import <libobjc.A.dylib/NSObject.h>
#import <libobjc.A.dylib/IKJSITunesStore.h>

@protocol IKJSITunesStore <JSExport>
@end

#import <libobjc.A.dylib/_IKJSITunesStoreProxy.h>
#import <libobjc.A.dylib/_IKJSITunesStore.h>

@class NSString, NSDictionary, NSNumber, SSMetricsController, IKURLBagCache;

@interface IKJSITunesStore : IKJSObject <NSObject, IKJSITunesStore, _IKJSITunesStoreProxy, _IKJSITunesStore> {

	NSNumber* _lastAccountDSID;
	NSDictionary* _lastKnownStatusDictionary;
	SSMetricsController* _metricsController;
	NSString* _storeFrontSuffix;
	id _ssAccountStoreChangedToken;
	id _subscriptionStatusDidChangeToken;
	id _urlBagCacheUpdateToken;
	NSString* _cookieURL;
	IKURLBagCache* _bagCache;

}

@property (nonatomic,retain) IKURLBagCache * bagCache;                                   //@synthesize bagCache=_bagCache - In the implementation block
@property (nonatomic,retain) NSString * cookieURL;                                       //@synthesize cookieURL=_cookieURL - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * DSID; 
@property (nonatomic,readonly) NSDictionary * accountInfo; 
@property (nonatomic,readonly) NSString * userAgent; 
@property (nonatomic,readonly) NSString * networkConnectionType; 
@property (nonatomic,retain) NSString * storefront; 
@property (nonatomic,retain) id cookie; 
@property (getter=isManagedAppleID,nonatomic,readonly) BOOL managedAppleID; 
+(void)setITunesStoreHeaders:(id)arg1 ;
+(void)setHeadersForURL:(id)arg1 inRequestProperties:(id)arg2 ;
-(void)setStorefront:(NSString *)arg1 ;
-(NSString *)storefront;
-(void)setCookie:(id)arg1 ;
-(NSString *)userAgent;
-(NSDictionary *)accountInfo;
-(void)dealloc;
-(IKURLBagCache *)bagCache;
-(id)getBag;
-(id)cookie;
-(id)eligibilityForService:(id)arg1 ;
-(BOOL)isManagedAppleID;
-(void)signOut;
-(NSString *)networkConnectionType;
-(NSString *)DSID;
-(id)initWithAppContext:(id)arg1 ;
-(void)flushUnreportedEvents;
-(void)invalidateBag;
-(id)makeStoreXMLHttpRequest;
-(void)recordEvent:(id)arg1 :(id)arg2 ;
-(void)clearCookies;
-(void)getServiceEligibility:(id)arg1 :(id)arg2 ;
-(void)loadStoreContent:(id)arg1 :(id)arg2 ;
-(void)evaluateScripts:(id)arg1 :(id)arg2 ;
-(void)authenticate:(id)arg1 :(id)arg2 ;
-(void)updateServiceEligibility:(id)arg1 ;
-(void)fetchMarketingItem:(id)arg1 :(id)arg2 :(id)arg3 :(id)arg4 :(id)arg5 ;
-(void)openMarketingItem:(id)arg1 :(id)arg2 :(id)arg3 ;
-(void)openDynamicUIURL:(id)arg1 :(id)arg2 :(id)arg3 ;
-(NSString *)cookieURL;
-(void)setCookieURL:(NSString *)arg1 ;
-(id)initWithAppContext:(id)arg1 urlBagCache:(id)arg2 ;
-(void)_bagCacheUpdated;
-(void)_accountStoreChanged;
-(void)_subscriptionStatusDidChanged:(id)arg1 ;
-(id)_subscriptionStatusDictionaryWithStatus:(id)arg1 isFinal:(BOOL)arg2 ;
-(id)asPrivateIKJSITunesStore;
-(void)setBagCache:(IKURLBagCache *)arg1 ;
@end
