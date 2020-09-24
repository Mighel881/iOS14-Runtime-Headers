/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:46:19 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoPassKit/NanoPassKit-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface NPKProtoPaymentPreconditionsNotMetRequest : PBRequest <NSCopying> {

	int _failedPrecondition;
	NSMutableArray* _passIDs;

}

@property (assign,nonatomic) int failedPrecondition;                //@synthesize failedPrecondition=_failedPrecondition - In the implementation block
@property (nonatomic,retain) NSMutableArray * passIDs;              //@synthesize passIDs=_passIDs - In the implementation block
+(Class)passIDsType;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSMutableArray *)passIDs;
-(id)description;
-(id)dictionaryRepresentation;
-(int)failedPrecondition;
-(void)setPassIDs:(NSMutableArray *)arg1 ;
-(void)addPassIDs:(id)arg1 ;
-(unsigned long long)passIDsCount;
-(void)clearPassIDs;
-(id)passIDsAtIndex:(unsigned long long)arg1 ;
-(id)failedPreconditionAsString:(int)arg1 ;
-(int)StringAsFailedPrecondition:(id)arg1 ;
-(void)setFailedPrecondition:(int)arg1 ;
@end
