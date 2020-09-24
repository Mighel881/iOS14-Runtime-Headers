/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:38:09 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ActionKit/FATObject.h>

@class NSData, NSNumber;

@interface EDAMData : FATObject {

	NSData* _bodyHash;
	NSNumber* _size;
	NSData* _body;

}

@property (nonatomic,retain) NSData * bodyHash;              //@synthesize bodyHash=_bodyHash - In the implementation block
@property (nonatomic,retain) NSNumber * size;                //@synthesize size=_size - In the implementation block
@property (nonatomic,retain) NSData * body;                  //@synthesize body=_body - In the implementation block
+(id)structName;
+(id)structFields;
-(void)setBody:(NSData *)arg1 ;
-(NSData *)body;
-(void)setSize:(NSNumber *)arg1 ;
-(NSNumber *)size;
-(NSData *)bodyHash;
-(void)setBodyHash:(NSData *)arg1 ;
@end
