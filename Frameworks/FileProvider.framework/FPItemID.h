/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:50:06 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/FileProvider.framework/FileProvider
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FileProvider/FileProvider-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface FPItemID : NSObject <NSCopying, NSSecureCoding> {

	NSString* _identifier;
	NSString* _providerID;
	NSString* _domainIdentifier;

}

@property (nonatomic,readonly) BOOL isPlaceholder; 
@property (nonatomic,readonly) NSString * identifier;                      //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) NSString * providerDomainID; 
@property (nonatomic,readonly) NSString * providerID;                      //@synthesize providerID=_providerID - In the implementation block
@property (nonatomic,readonly) NSString * domainIdentifier;                //@synthesize domainIdentifier=_domainIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * providerIdentifier; 
+(id)coreSpotlightEncodedDomainIdentifier:(id)arg1 ;
+(BOOL)supportsSecureCoding;
+(id)rootItemIDWithProviderIdentifier:(id)arg1 domainIdentifier:(id)arg2 ;
+(id)csIdentifierFromFPIdentifier:(id)arg1 domainIdentifier:(id)arg2 ;
+(id)rootItemIDWithProviderDomainID:(id)arg1 ;
+(void)getDomainIdentifier:(id*)arg1 andIdentifier:(id*)arg2 fromCoreSpotlightIdentifier:(id)arg3 ;
+(id)stringByRemovingPrefix:(id)arg1 fromIdentifier:(id)arg2 ;
+(id)fpIdentifierFromCoreSpotlightIdentifier:(id)arg1 domainIdentifier:(id)arg2 ;
-(NSString *)identifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)domainIdentifier;
-(BOOL)isPlaceholder;
-(BOOL)isEqualToItemID:(id)arg1 ;
-(NSString *)providerIdentifier;
-(id)initWithProviderID:(id)arg1 domainIdentifier:(id)arg2 itemIdentifier:(id)arg3 ;
-(id)initWithProviderDomainID:(id)arg1 itemIdentifier:(id)arg2 ;
-(void)setProviderDomainID:(NSString *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)coreSpotlightIdentifier;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithSearchableItem:(id)arg1 ;
-(NSString *)providerID;
-(unsigned long long)hash;
-(NSString *)providerDomainID;
-(id)description;
-(id)initWithProviderID:(id)arg1 domainIdentifier:(id)arg2 coreSpotlightIdentifier:(id)arg3 ;
@end

