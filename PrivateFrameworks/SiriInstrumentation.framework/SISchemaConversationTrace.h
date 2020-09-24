/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:40:50 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ProtocolBuffer/PBCodable.h>

@class NSData;

@interface SISchemaConversationTrace : PBCodable {

	NSData* _previousTurnID;
	BOOL _hasPreviousTurnID;

}

@property (nonatomic,copy) NSData * previousTurnID;               //@synthesize previousTurnID=_previousTurnID - In the implementation block
@property (assign,nonatomic) BOOL hasPreviousTurnID;              //@synthesize hasPreviousTurnID=_hasPreviousTurnID - In the implementation block
@property (nonatomic,readonly) NSData * jsonData; 
-(void)writeTo:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)setPreviousTurnID:(NSData *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(unsigned long long)hash;
-(NSData *)jsonData;
-(id)dictionaryRepresentation;
-(NSData *)previousTurnID;
-(BOOL)hasPreviousTurnID;
-(void)setHasPreviousTurnID:(BOOL)arg1 ;
@end
