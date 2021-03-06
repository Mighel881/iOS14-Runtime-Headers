/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:39:07 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, NSMutableArray;

@interface GEORegionalResourceSet : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	GEOTileSetRegion* _regions;
	unsigned long long _regionsCount;
	unsigned long long _regionsSpace;
	NSMutableArray* _resources;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned read_unknownFields : 1;
		unsigned read_regions : 1;
		unsigned read_resources : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) unsigned long long regionsCount; 
@property (nonatomic,readonly) GEOTileSetRegion* regions; 
@property (nonatomic,retain) NSMutableArray * resources; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(Class)resourceType;
+(BOOL)isValid:(id)arg1 ;
-(void)addRegion:(GEOTileSetRegion)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)addResource:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(GEOTileSetRegion*)regions;
-(GEOTileSetRegion)regionAtIndex:(unsigned long long)arg1 ;
-(void)clearRegions;
-(unsigned long long)resourcesCount;
-(void)dealloc;
-(id)jsonRepresentation;
-(id)resourceAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)regionsCount;
-(void)setResources:(NSMutableArray *)arg1 ;
-(void)setRegions:(GEOTileSetRegion*)arg1 count:(unsigned long long)arg2 ;
-(void)clearResources;
-(id)init;
-(NSMutableArray *)resources;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)readAll:(BOOL)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(unsigned long long)hash;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(id)description;
-(id)dictionaryRepresentation;
@end

