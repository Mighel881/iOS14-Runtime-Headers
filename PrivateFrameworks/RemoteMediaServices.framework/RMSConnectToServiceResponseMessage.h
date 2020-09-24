/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:46:15 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/RemoteMediaServices.framework/RemoteMediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RemoteMediaServices/RemoteMediaServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class RMSControlInterfaceMessage;

@interface RMSConnectToServiceResponseMessage : PBCodable <NSCopying> {

	RMSControlInterfaceMessage* _controlInterface;
	int _responseCode;
	int _responseData;
	int _sessionIdentifier;
	SCD_Struct_RM5 _has;

}

@property (assign,nonatomic) BOOL hasResponseCode; 
@property (assign,nonatomic) int responseCode;                                           //@synthesize responseCode=_responseCode - In the implementation block
@property (assign,nonatomic) BOOL hasSessionIdentifier; 
@property (assign,nonatomic) int sessionIdentifier;                                      //@synthesize sessionIdentifier=_sessionIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL hasControlInterface; 
@property (nonatomic,retain) RMSControlInterfaceMessage * controlInterface;              //@synthesize controlInterface=_controlInterface - In the implementation block
@property (assign,nonatomic) BOOL hasResponseData; 
@property (assign,nonatomic) int responseData;                                           //@synthesize responseData=_responseData - In the implementation block
-(int)responseData;
-(int)sessionIdentifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setResponseData:(int)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)setSessionIdentifier:(int)arg1 ;
-(void)setResponseCode:(int)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)hasSessionIdentifier;
-(int)responseCode;
-(unsigned long long)hash;
-(id)description;
-(id)dictionaryRepresentation;
-(void)setHasResponseCode:(BOOL)arg1 ;
-(BOOL)hasResponseCode;
-(BOOL)hasResponseData;
-(void)setHasSessionIdentifier:(BOOL)arg1 ;
-(RMSControlInterfaceMessage *)controlInterface;
-(void)setControlInterface:(RMSControlInterfaceMessage *)arg1 ;
-(BOOL)hasControlInterface;
-(void)setHasResponseData:(BOOL)arg1 ;
@end
