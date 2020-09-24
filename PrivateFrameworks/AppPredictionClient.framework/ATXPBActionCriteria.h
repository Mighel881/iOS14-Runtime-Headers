/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:41:48 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionClient.framework/AppPredictionClient
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppPredictionClient/AppPredictionClient-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData;

@interface ATXPBActionCriteria : PBCodable <NSCopying> {

	double _endDate;
	double _startDate;
	NSData* _predicate;
	BOOL _isLockScreenEligible;
	SCD_Struct_AT3 _has;

}

@property (assign,nonatomic) BOOL hasStartDate; 
@property (assign,nonatomic) double startDate;                          //@synthesize startDate=_startDate - In the implementation block
@property (assign,nonatomic) BOOL hasEndDate; 
@property (assign,nonatomic) double endDate;                            //@synthesize endDate=_endDate - In the implementation block
@property (assign,nonatomic) BOOL hasIsLockScreenEligible; 
@property (assign,nonatomic) BOOL isLockScreenEligible;                 //@synthesize isLockScreenEligible=_isLockScreenEligible - In the implementation block
@property (nonatomic,readonly) BOOL hasPredicate; 
@property (nonatomic,retain) NSData * predicate;                        //@synthesize predicate=_predicate - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)setHasStartDate:(BOOL)arg1 ;
-(BOOL)hasStartDate;
-(void)setHasEndDate:(BOOL)arg1 ;
-(BOOL)hasEndDate;
-(void)setStartDate:(double)arg1 ;
-(double)endDate;
-(void)mergeFrom:(id)arg1 ;
-(NSData *)predicate;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setPredicate:(NSData *)arg1 ;
-(double)startDate;
-(unsigned long long)hash;
-(id)description;
-(void)setEndDate:(double)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)isLockScreenEligible;
-(void)setIsLockScreenEligible:(BOOL)arg1 ;
-(void)setHasIsLockScreenEligible:(BOOL)arg1 ;
-(BOOL)hasIsLockScreenEligible;
-(BOOL)hasPredicate;
@end
