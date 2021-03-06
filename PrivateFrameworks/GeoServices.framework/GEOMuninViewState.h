/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:39:16 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, GEOCameraFrame, GEOLocationInfo;

@interface GEOMuninViewState : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	GEOCameraFrame* _cameraFrame;
	GEOLocationInfo* _locationInfo;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned read_unknownFields : 1;
		unsigned read_cameraFrame : 1;
		unsigned read_locationInfo : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasCameraFrame; 
@property (nonatomic,retain) GEOCameraFrame * cameraFrame; 
@property (nonatomic,readonly) BOOL hasLocationInfo; 
@property (nonatomic,retain) GEOLocationInfo * locationInfo; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(id)jsonRepresentation;
-(GEOCameraFrame *)cameraFrame;
-(id)init;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(GEOLocationInfo *)locationInfo;
-(void)setLocationInfo:(GEOLocationInfo *)arg1 ;
-(BOOL)hasCameraFrame;
-(id)initWithJSON:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)readAll:(BOOL)arg1 ;
-(id)initWithData:(id)arg1 ;
-(void)setCameraFrame:(GEOCameraFrame *)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(unsigned long long)hash;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(id)description;
-(id)dictionaryRepresentation;
-(BOOL)hasLocationInfo;
@end

