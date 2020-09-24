/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:44:50 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SiriOntology.framework/SiriOntology
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSNumber, NSString;

@interface USOSerializedGraphNode : NSObject <NSSecureCoding> {

	int _usoElementId;
	NSNumber* _usoVerbId;
	NSNumber* _integerPayload;
	NSString* _stringPayload;
	NSString* _entityLabel;
	NSString* _verbLabel;

}

@property (assign) int usoElementId;                                 //@synthesize usoElementId=_usoElementId - In the implementation block
@property (nonatomic,retain) NSNumber * usoVerbId;                   //@synthesize usoVerbId=_usoVerbId - In the implementation block
@property (nonatomic,retain) NSNumber * integerPayload;              //@synthesize integerPayload=_integerPayload - In the implementation block
@property (nonatomic,retain) NSString * stringPayload;               //@synthesize stringPayload=_stringPayload - In the implementation block
@property (retain) NSString * entityLabel;                           //@synthesize entityLabel=_entityLabel - In the implementation block
@property (retain) NSString * verbLabel;                             //@synthesize verbLabel=_verbLabel - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(int)usoElementId;
-(NSNumber *)usoVerbId;
-(NSNumber *)integerPayload;
-(NSString *)stringPayload;
-(NSString *)entityLabel;
-(NSString *)verbLabel;
-(id)initWithUsoElementId:(int)arg1 ;
-(void)setUsoElementId:(int)arg1 ;
-(void)setUsoVerbId:(NSNumber *)arg1 ;
-(void)setIntegerPayload:(NSNumber *)arg1 ;
-(void)setStringPayload:(NSString *)arg1 ;
-(void)setEntityLabel:(NSString *)arg1 ;
-(void)setVerbLabel:(NSString *)arg1 ;
@end
