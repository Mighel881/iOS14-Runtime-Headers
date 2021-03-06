/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:39:05 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, NSMutableArray;

@interface GEOPDSiriSearchResult : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	NSMutableArray* _disambiguationLabels;
	NSMutableArray* _resultDetourInfos;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	BOOL _isChainResultSet;
	struct {
		unsigned has_isChainResultSet : 1;
		unsigned read_unknownFields : 1;
		unsigned read_disambiguationLabels : 1;
		unsigned read_resultDetourInfos : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,retain) NSMutableArray * disambiguationLabels; 
@property (nonatomic,retain) NSMutableArray * resultDetourInfos; 
@property (assign,nonatomic) BOOL hasIsChainResultSet; 
@property (assign,nonatomic) BOOL isChainResultSet; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(Class)disambiguationLabelType;
+(Class)resultDetourInfoType;
+(BOOL)isValid:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(BOOL)isChainResultSet;
-(id)jsonRepresentation;
-(BOOL)hasIsChainResultSet;
-(void)setHasIsChainResultSet:(BOOL)arg1 ;
-(id)init;
-(void)addDisambiguationLabel:(id)arg1 ;
-(unsigned long long)disambiguationLabelsCount;
-(void)clearDisambiguationLabels;
-(id)disambiguationLabelAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)disambiguationLabels;
-(void)setDisambiguationLabels:(NSMutableArray *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(void)setIsChainResultSet:(BOOL)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)readAll:(BOOL)arg1 ;
-(void)addResultDetourInfo:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(unsigned long long)resultDetourInfosCount;
-(void)clearResultDetourInfos;
-(id)resultDetourInfoAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)resultDetourInfos;
-(void)setResultDetourInfos:(NSMutableArray *)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(unsigned long long)hash;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(id)description;
-(id)dictionaryRepresentation;
@end

