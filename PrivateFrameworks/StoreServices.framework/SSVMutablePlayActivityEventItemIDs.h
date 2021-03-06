/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:36:50 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreServices/StoreServices-Structs.h>
#import <StoreServices/SSVPlayActivityEventItemIDs.h>

@class NSString;

@interface SSVMutablePlayActivityEventItemIDs : SSVPlayActivityEventItemIDs

@property (assign,nonatomic) unsigned long long cloudID; 
@property (nonatomic,copy) NSString * lyricsID; 
@property (assign,nonatomic) long long purchasedAdamID; 
@property (assign,nonatomic) long long radioAdamID; 
@property (assign,nonatomic) long long equivalencySourceAdamID; 
@property (assign,nonatomic) long long subscriptionAdamID; 
@property (assign,nonatomic) long long tvShowPurchasedAdamID; 
@property (assign,nonatomic) long long tvShowSubscriptionAdamID; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setCloudID:(unsigned long long)arg1 ;
-(void)setLyricsID:(NSString *)arg1 ;
-(void)setPurchasedAdamID:(long long)arg1 ;
-(void)setSubscriptionAdamID:(long long)arg1 ;
-(void)setRadioAdamID:(long long)arg1 ;
-(void)setEquivalencySourceAdamID:(long long)arg1 ;
-(void)setTvShowPurchasedAdamID:(long long)arg1 ;
-(void)setTvShowSubscriptionAdamID:(long long)arg1 ;
@end

