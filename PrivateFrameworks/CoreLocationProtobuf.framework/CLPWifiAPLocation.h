/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:43:39 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CoreLocationProtobuf.framework/CoreLocationProtobuf
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreLocationProtobuf/CoreLocationProtobuf-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, CLPLocation;

@interface CLPWifiAPLocation : PBCodable <NSCopying> {

	double _scanTimestamp;
	NSString* _appBundleId;
	int _channel;
	int _hidden;
	CLPLocation* _location;
	NSString* _mac;
	int _rssi;
	int _scanType;
	int _serverHash;
	SCD_Struct_CL2 _has;

}

@property (nonatomic,retain) NSString * mac;                      //@synthesize mac=_mac - In the implementation block
@property (assign,nonatomic) int channel;                         //@synthesize channel=_channel - In the implementation block
@property (assign,nonatomic) BOOL hasHidden; 
@property (assign,nonatomic) int hidden;                          //@synthesize hidden=_hidden - In the implementation block
@property (assign,nonatomic) int rssi;                            //@synthesize rssi=_rssi - In the implementation block
@property (assign,nonatomic) BOOL hasScanTimestamp; 
@property (assign,nonatomic) double scanTimestamp;                //@synthesize scanTimestamp=_scanTimestamp - In the implementation block
@property (nonatomic,retain) CLPLocation * location;              //@synthesize location=_location - In the implementation block
@property (nonatomic,readonly) BOOL hasAppBundleId; 
@property (nonatomic,retain) NSString * appBundleId;              //@synthesize appBundleId=_appBundleId - In the implementation block
@property (assign,nonatomic) BOOL hasServerHash; 
@property (assign,nonatomic) int serverHash;                      //@synthesize serverHash=_serverHash - In the implementation block
@property (assign,nonatomic) BOOL hasScanType; 
@property (assign,nonatomic) int scanType;                        //@synthesize scanType=_scanType - In the implementation block
-(BOOL)hasAppBundleId;
-(void)setHasServerHash:(BOOL)arg1 ;
-(void)setChannel:(int)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)StringAsScanType:(id)arg1 ;
-(id)scanTypeAsString:(int)arg1 ;
-(void)setRssi:(int)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setHasScanTimestamp:(BOOL)arg1 ;
-(int)hidden;
-(BOOL)readFrom:(id)arg1 ;
-(void)setScanType:(int)arg1 ;
-(void)setHasScanType:(BOOL)arg1 ;
-(void)setMac:(NSString *)arg1 ;
-(BOOL)hasServerHash;
-(BOOL)hasHidden;
-(BOOL)hasScanTimestamp;
-(NSString *)mac;
-(CLPLocation *)location;
-(double)scanTimestamp;
-(void)setLocation:(CLPLocation *)arg1 ;
-(void)setHasHidden:(BOOL)arg1 ;
-(void)setScanTimestamp:(double)arg1 ;
-(int)serverHash;
-(int)rssi;
-(BOOL)hasScanType;
-(void)mergeFrom:(id)arg1 ;
-(int)channel;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setServerHash:(int)arg1 ;
-(void)setAppBundleId:(NSString *)arg1 ;
-(void)setHidden:(int)arg1 ;
-(NSString *)appBundleId;
-(unsigned long long)hash;
-(int)scanType;
-(id)description;
-(id)dictionaryRepresentation;
@end
