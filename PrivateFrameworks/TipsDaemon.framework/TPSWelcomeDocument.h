/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:37:18 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/TipsDaemon.framework/TipsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TipsDaemon/TipsDaemon-Structs.h>
#import <TipsCore/TPSDocument.h>

@class NSString;

@interface TPSWelcomeDocument : TPSDocument {

	NSString* _majorVersion;

}

@property (nonatomic,copy) NSString * majorVersion;              //@synthesize majorVersion=_majorVersion - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setMajorVersion:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)debugDescription;
-(NSString *)majorVersion;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
@end

