/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:36:12 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsCore/NewsCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSSet;

@interface FCBundleSubscription : NSObject <NSCopying, NSSecureCoding> {

	BOOL _isPurchaser;
	BOOL _isAmplifyUser;
	NSString* _bundlePurchaseID;
	NSSet* _bundleChannelIDs;
	NSString* _servicesBundlePurchaseID;
	unsigned long long _unprotectedSubscriptionState;

}

@property (nonatomic,copy) NSString * bundlePurchaseID;                                    //@synthesize bundlePurchaseID=_bundlePurchaseID - In the implementation block
@property (nonatomic,copy) NSString * servicesBundlePurchaseID;                            //@synthesize servicesBundlePurchaseID=_servicesBundlePurchaseID - In the implementation block
@property (assign,nonatomic) unsigned long long unprotectedSubscriptionState;              //@synthesize unprotectedSubscriptionState=_unprotectedSubscriptionState - In the implementation block
@property (assign,nonatomic) BOOL isPurchaser;                                             //@synthesize isPurchaser=_isPurchaser - In the implementation block
@property (assign,nonatomic) BOOL isAmplifyUser;                                           //@synthesize isAmplifyUser=_isAmplifyUser - In the implementation block
@property (nonatomic,copy) NSSet * bundleChannelIDs;                                       //@synthesize bundleChannelIDs=_bundleChannelIDs - In the implementation block
@property (nonatomic,readonly) BOOL isSubscribed; 
@property (nonatomic,readonly) BOOL isServicesBundleUser; 
@property (nonatomic,readonly) unsigned long long subscriptionState; 
+(BOOL)supportsSecureCoding;
+(id)subscriptionWithSubscriptionState:(unsigned long long)arg1 bundleChannelIDs:(id)arg2 ;
-(void)setBundleChannelIDs:(NSSet *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)debugDescription;
-(void)setServicesBundlePurchaseID:(NSString *)arg1 ;
-(BOOL)isSubscribed;
-(BOOL)isServicesBundleUser;
-(void)setUnprotectedSubscriptionState:(unsigned long long)arg1 ;
-(void)setIsPurchaser:(BOOL)arg1 ;
-(void)setBundlePurchaseID:(NSString *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)containsHeadline:(id)arg1 ;
-(BOOL)isAmplifyUser;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithBundlePurchaseID:(id)arg1 bundleChannelIDs:(id)arg2 inTrialPeriod:(BOOL)arg3 isPurchaser:(BOOL)arg4 servicesBundlePurchaseID:(id)arg5 isAmplifyUser:(BOOL)arg6 ;
-(unsigned long long)unprotectedSubscriptionState;
-(NSString *)servicesBundlePurchaseID;
-(unsigned long long)hash;
-(void)setIsAmplifyUser:(BOOL)arg1 ;
-(BOOL)isPurchaser;
-(unsigned long long)subscriptionState;
-(NSString *)bundlePurchaseID;
-(BOOL)containsTagID:(id)arg1 ;
-(NSSet *)bundleChannelIDs;
@end
