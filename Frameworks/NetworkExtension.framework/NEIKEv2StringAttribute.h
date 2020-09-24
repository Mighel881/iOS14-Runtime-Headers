/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:50:19 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NetworkExtension/NetworkExtension-Structs.h>
#import <NetworkExtension/NEIKEv2ConfigurationAttribute.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface NEIKEv2StringAttribute : NEIKEv2ConfigurationAttribute <NSCopying> {

	NSString* _stringValue;
	unsigned long long _customType;

}

@property (assign,nonatomic) unsigned long long customType;              //@synthesize customType=_customType - In the implementation block
@property (retain) NSString * stringValue;                               //@synthesize stringValue=_stringValue - In the implementation block
+(id)copyTypeDescription;
-(unsigned long long)valueType;
-(unsigned long long)customType;
-(void)setCustomType:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initCustomWithAttributeType:(unsigned long long)arg1 attributeName:(id)arg2 stringValue:(id)arg3 ;
-(id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2 ;
-(void)setStringValue:(NSString *)arg1 ;
-(NSString *)stringValue;
-(unsigned long long)attributeType;
-(id)initWithStringValue:(id)arg1 ;
-(id)description;
@end
