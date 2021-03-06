/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:38:39 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppPredictionInternal/AppPredictionInternal-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface ATXMPBDonationRatioTracker : PBCodable <NSCopying> {

	double _ratio;
	NSString* _abGroup;
	int _actionType;
	SCD_Struct_AT2 _has;

}

@property (assign,nonatomic) BOOL hasActionType; 
@property (assign,nonatomic) int actionType;                  //@synthesize actionType=_actionType - In the implementation block
@property (assign,nonatomic) BOOL hasRatio; 
@property (assign,nonatomic) double ratio;                    //@synthesize ratio=_ratio - In the implementation block
@property (nonatomic,readonly) BOOL hasAbGroup; 
@property (nonatomic,retain) NSString * abGroup;              //@synthesize abGroup=_abGroup - In the implementation block
-(int)actionType;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(NSString *)abGroup;
-(double)ratio;
-(void)setRatio:(double)arg1 ;
-(void)setActionType:(int)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasAbGroup;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setAbGroup:(NSString *)arg1 ;
-(void)setHasActionType:(BOOL)arg1 ;
-(BOOL)hasActionType;
-(id)actionTypeAsString:(int)arg1 ;
-(int)StringAsActionType:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)dictionaryRepresentation;
-(void)setHasRatio:(BOOL)arg1 ;
-(BOOL)hasRatio;
@end

