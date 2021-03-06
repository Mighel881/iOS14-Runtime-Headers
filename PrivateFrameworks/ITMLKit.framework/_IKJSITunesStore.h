/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:45:07 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, NSDictionary;


@protocol _IKJSITunesStore <IKJSITunesStore,JSExport>
@property (nonatomic,readonly) NSString * DSID; 
@property (nonatomic,readonly) NSDictionary * accountInfo; 
@property (nonatomic,readonly) NSString * userAgent; 
@property (nonatomic,readonly) NSString * networkConnectionType; 
@property (nonatomic,retain) NSString * storefront; 
@property (nonatomic,retain) NSString * cookieURL; 
@property (nonatomic,retain) id cookie; 
@property (getter=isManagedAppleID,nonatomic,readonly) BOOL managedAppleID; 
@required
-(void)setStorefront:(id)arg1;
-(NSString *)storefront;
-(void)setCookie:(id)arg1;
-(NSString *)userAgent;
-(NSDictionary *)accountInfo;
-(id)getBag;
-(id)cookie;
-(id)eligibilityForService:(id)arg1;
-(BOOL)isManagedAppleID;
-(void)signOut;
-(NSString *)networkConnectionType;
-(NSString *)DSID;
-(void)flushUnreportedEvents;
-(void)invalidateBag;
-(id)makeStoreXMLHttpRequest;
-(void)recordEvent:(id)arg1 :(id)arg2;
-(void)clearCookies;
-(void)getServiceEligibility:(id)arg1 :(id)arg2;
-(void)loadStoreContent:(id)arg1 :(id)arg2;
-(void)evaluateScripts:(id)arg1 :(id)arg2;
-(void)authenticate:(id)arg1 :(id)arg2;
-(void)updateServiceEligibility:(id)arg1;
-(void)fetchMarketingItem:(id)arg1 :(id)arg2 :(id)arg3 :(id)arg4 :(id)arg5;
-(void)openMarketingItem:(id)arg1 :(id)arg2 :(id)arg3;
-(void)openDynamicUIURL:(id)arg1 :(id)arg2 :(id)arg3;
-(NSString *)cookieURL;
-(void)setCookieURL:(id)arg1;

@end

