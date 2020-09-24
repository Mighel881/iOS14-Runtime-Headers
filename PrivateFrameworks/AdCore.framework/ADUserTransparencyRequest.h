/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:44:42 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AdCore.framework/AdCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AdCore/AdCore-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData, NSString;

@interface ADUserTransparencyRequest : PBRequest <NSCopying> {

	NSData* _contentiAdID;
	NSData* _dPID;
	NSData* _iAdID;
	NSString* _iTunesStore;
	NSString* _localeIdentifier;
	BOOL _isSignedInToiTunes;
	BOOL _limitAdTracking;
	SCD_Struct_AD11 _has;

}

@property (nonatomic,readonly) BOOL hasDPID; 
@property (nonatomic,retain) NSData * dPID;                            //@synthesize dPID=_dPID - In the implementation block
@property (nonatomic,readonly) BOOL hasLocaleIdentifier; 
@property (nonatomic,retain) NSString * localeIdentifier;              //@synthesize localeIdentifier=_localeIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL hasIAdID; 
@property (nonatomic,retain) NSData * iAdID;                           //@synthesize iAdID=_iAdID - In the implementation block
@property (nonatomic,readonly) BOOL hasContentiAdID; 
@property (nonatomic,retain) NSData * contentiAdID;                    //@synthesize contentiAdID=_contentiAdID - In the implementation block
@property (nonatomic,readonly) BOOL hasITunesStore; 
@property (nonatomic,retain) NSString * iTunesStore;                   //@synthesize iTunesStore=_iTunesStore - In the implementation block
@property (assign,nonatomic) BOOL hasLimitAdTracking; 
@property (assign,nonatomic) BOOL limitAdTracking;                     //@synthesize limitAdTracking=_limitAdTracking - In the implementation block
@property (assign,nonatomic) BOOL hasIsSignedInToiTunes; 
@property (assign,nonatomic) BOOL isSignedInToiTunes;                  //@synthesize isSignedInToiTunes=_isSignedInToiTunes - In the implementation block
+(id)options;
-(void)setLocaleIdentifier:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSData *)dPID;
-(BOOL)limitAdTracking;
-(void)writeTo:(id)arg1 ;
-(void)setHasLimitAdTracking:(BOOL)arg1 ;
-(void)setLimitAdTracking:(BOOL)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(NSData *)iAdID;
-(BOOL)hasLocaleIdentifier;
-(void)mergeFrom:(id)arg1 ;
-(void)setITunesStore:(NSString *)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)hasDPID;
-(BOOL)hasITunesStore;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)hasLimitAdTracking;
-(NSString *)iTunesStore;
-(unsigned long long)hash;
-(void)setDPID:(NSData *)arg1 ;
-(BOOL)hasIAdID;
-(NSString *)localeIdentifier;
-(id)description;
-(id)dictionaryRepresentation;
-(void)setIAdID:(NSData *)arg1 ;
-(void)setContentiAdID:(NSData *)arg1 ;
-(BOOL)hasContentiAdID;
-(NSData *)contentiAdID;
-(void)setIsSignedInToiTunes:(BOOL)arg1 ;
-(void)setHasIsSignedInToiTunes:(BOOL)arg1 ;
-(BOOL)hasIsSignedInToiTunes;
-(BOOL)isSignedInToiTunes;
@end
