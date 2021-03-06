/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:42:20 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface SFAirDropTransferItem : NSObject <NSSecureCoding> {

	BOOL _isFile;
	NSString* _type;
	NSString* _subtype;
	long long _count;

}

@property (nonatomic,copy,readonly) NSString * type;                 //@synthesize type=_type - In the implementation block
@property (nonatomic,copy,readonly) NSString * subtype;              //@synthesize subtype=_subtype - In the implementation block
@property (nonatomic,readonly) long long count;                      //@synthesize count=_count - In the implementation block
@property (nonatomic,readonly) BOOL isFile;                          //@synthesize isFile=_isFile - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithType:(id)arg1 isFile:(BOOL)arg2 ;
-(id)initWithType:(id)arg1 subtype:(id)arg2 isFile:(BOOL)arg3 ;
-(BOOL)isFile;
-(NSString *)subtype;
-(id)init;
-(NSString *)type;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)count;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(void)incrementCount;
-(id)description;
@end

