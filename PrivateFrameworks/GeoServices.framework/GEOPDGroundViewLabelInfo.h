/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:39:11 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, NSString;

@interface GEOPDGroundViewLabelInfo : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	double _endHeading;
	NSString* _localityName;
	NSString* _locationName;
	NSString* _secondaryLocationName;
	double _startHeading;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned has_endHeading : 1;
		unsigned has_startHeading : 1;
		unsigned read_unknownFields : 1;
		unsigned read_localityName : 1;
		unsigned read_locationName : 1;
		unsigned read_secondaryLocationName : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasLocationName; 
@property (nonatomic,retain) NSString * locationName; 
@property (nonatomic,readonly) BOOL hasSecondaryLocationName; 
@property (nonatomic,retain) NSString * secondaryLocationName; 
@property (nonatomic,readonly) BOOL hasLocalityName; 
@property (nonatomic,retain) NSString * localityName; 
@property (assign,nonatomic) BOOL hasStartHeading; 
@property (assign,nonatomic) double startHeading; 
@property (assign,nonatomic) BOOL hasEndHeading; 
@property (assign,nonatomic) double endHeading; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(void)setEndHeading:(double)arg1 ;
-(void)setLocationName:(NSString *)arg1 ;
-(double)startHeading;
-(void)setStartHeading:(double)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)locationName;
-(void)writeTo:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)setHasEndHeading:(BOOL)arg1 ;
-(void)setHasStartHeading:(BOOL)arg1 ;
-(id)jsonRepresentation;
-(BOOL)hasLocationName;
-(NSString *)localityName;
-(BOOL)hasEndHeading;
-(id)init;
-(void)setLocalityName:(NSString *)arg1 ;
-(NSString *)secondaryLocationName;
-(BOOL)hasSecondaryLocationName;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)readAll:(BOOL)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(unsigned long long)hash;
-(BOOL)hasStartHeading;
-(void)setSecondaryLocationName:(NSString *)arg1 ;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(BOOL)hasLocalityName;
-(id)description;
-(double)endHeading;
-(id)dictionaryRepresentation;
@end

