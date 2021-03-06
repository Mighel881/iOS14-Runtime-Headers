/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:50:19 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NetworkExtension/NetworkExtension-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface NEIKEv2EncryptionProtocol : NSObject <NSCopying> {

	BOOL _is256Bit;
	unsigned long long _wireType;

}

@property (readonly) unsigned keyLength; 
@property (readonly) unsigned blockLength; 
@property (readonly) unsigned ivLength; 
@property (readonly) unsigned icvLength; 
@property (assign) unsigned long long wireType;              //@synthesize wireType=_wireType - In the implementation block
@property (readonly) BOOL isAuthenticated; 
@property (readonly) BOOL isGCM; 
@property (assign) BOOL is256Bit;                            //@synthesize is256Bit=_is256Bit - In the implementation block
-(BOOL)isAuthenticated;
-(unsigned)ivLength;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned)keyLength;
-(unsigned)blockLength;
-(unsigned)ccAlgorithm;
-(unsigned)icvLength;
-(BOOL)isGCM;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)wireType;
-(BOOL)is256Bit;
-(void)setWireType:(unsigned long long)arg1 ;
-(void)setIs256Bit:(BOOL)arg1 ;
-(id)initWithEncryptionWireType:(unsigned long long)arg1 is256Bit:(BOOL)arg2 ;
-(id)initWithEncryptionType:(unsigned long long)arg1 ;
-(unsigned long long)hash;
-(id)description;
@end

