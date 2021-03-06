/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:38:44 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDate, NSArray;

@interface ICEvernoteNote : NSObject <NSSecureCoding> {

	NSString* _title;
	NSString* _content;
	NSDate* _created;
	NSDate* _updated;
	NSArray* _resources;

}

@property (nonatomic,retain) NSString * title;                 //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) NSString * content;               //@synthesize content=_content - In the implementation block
@property (nonatomic,retain) NSDate * created;                 //@synthesize created=_created - In the implementation block
@property (nonatomic,retain) NSDate * updated;                 //@synthesize updated=_updated - In the implementation block
@property (nonatomic,retain) NSArray * resources;              //@synthesize resources=_resources - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSDate *)created;
-(NSString *)title;
-(void)setResources:(NSArray *)arg1 ;
-(NSString *)content;
-(NSArray *)resources;
-(void)setContent:(NSString *)arg1 ;
-(NSDate *)updated;
-(void)setCreated:(NSDate *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setUpdated:(NSDate *)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(id)description;
@end

