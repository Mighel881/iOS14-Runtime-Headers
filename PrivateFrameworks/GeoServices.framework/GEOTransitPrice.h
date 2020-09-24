/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:39:02 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields, NSString;

@interface GEOTransitPrice : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	NSString* _currencyCode;
	int _amountInCents;
	unsigned _subunit;
	struct {
		unsigned has_amountInCents : 1;
		unsigned has_subunit : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasAmountInCents; 
@property (assign,nonatomic) int amountInCents; 
@property (nonatomic,readonly) BOOL hasCurrencyCode; 
@property (nonatomic,retain) NSString * currencyCode; 
@property (assign,nonatomic) BOOL hasSubunit; 
@property (assign,nonatomic) unsigned subunit; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(NSString *)currencyCode;
-(void)setAmountInCents:(int)arg1 ;
-(void)setSubunit:(unsigned)arg1 ;
-(int)amountInCents;
-(void)setHasAmountInCents:(BOOL)arg1 ;
-(BOOL)hasAmountInCents;
-(BOOL)hasCurrencyCode;
-(void)setHasSubunit:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(unsigned)subunit;
-(id)jsonRepresentation;
-(void)setCurrencyCode:(NSString *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)readAll:(BOOL)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(unsigned long long)hash;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(id)description;
-(BOOL)hasSubunit;
-(id)dictionaryRepresentation;
@end
