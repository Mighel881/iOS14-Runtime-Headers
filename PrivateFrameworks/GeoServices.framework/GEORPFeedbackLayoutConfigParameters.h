/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:39:18 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, GEOLatLng, GEOMapRegion, GEOPDMapsIdentifier;

@interface GEORPFeedbackLayoutConfigParameters : PBCodable <NSCopying> {

	PBDataReader* _reader;
	GEOLatLng* _coordinate;
	GEOMapRegion* _mapRegion;
	GEOPDMapsIdentifier* _mapsId;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	int _formType;
	struct {
		unsigned has_formType : 1;
		unsigned read_coordinate : 1;
		unsigned read_mapRegion : 1;
		unsigned read_mapsId : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasFormType; 
@property (assign,nonatomic) int formType; 
@property (nonatomic,readonly) BOOL hasMapRegion; 
@property (nonatomic,retain) GEOMapRegion * mapRegion; 
@property (nonatomic,readonly) BOOL hasCoordinate; 
@property (nonatomic,retain) GEOLatLng * coordinate; 
@property (nonatomic,readonly) BOOL hasMapsId; 
@property (nonatomic,retain) GEOPDMapsIdentifier * mapsId; 
+(BOOL)isValid:(id)arg1 ;
-(void)setCoordinate:(GEOLatLng *)arg1 ;
-(GEOLatLng *)coordinate;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setMapsId:(GEOPDMapsIdentifier *)arg1 ;
-(void)setHasFormType:(BOOL)arg1 ;
-(BOOL)hasFormType;
-(id)formTypeAsString:(int)arg1 ;
-(void)writeTo:(id)arg1 ;
-(int)StringAsFormType:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(GEOPDMapsIdentifier *)mapsId;
-(BOOL)hasMapRegion;
-(int)formType;
-(id)jsonRepresentation;
-(BOOL)hasMapsId;
-(GEOMapRegion *)mapRegion;
-(id)init;
-(void)setMapRegion:(GEOMapRegion *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)hasCoordinate;
-(void)readAll:(BOOL)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(unsigned long long)hash;
-(void)setFormType:(int)arg1 ;
-(id)description;
-(id)dictionaryRepresentation;
@end
