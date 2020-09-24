/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:38:51 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSData, NSURL;

@interface CRKBook : NSObject <NSSecureCoding> {

	BOOL _hasChapters;
	NSString* _title;
	NSString* _author;
	NSString* _path;
	NSData* _image;
	NSURL* _webURL;
	long long _type;

}

@property (nonatomic,copy) NSString * title;                //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * author;               //@synthesize author=_author - In the implementation block
@property (nonatomic,copy) NSString * path;                 //@synthesize path=_path - In the implementation block
@property (nonatomic,copy) NSData * image;                  //@synthesize image=_image - In the implementation block
@property (nonatomic,copy) NSURL * webURL;                  //@synthesize webURL=_webURL - In the implementation block
@property (assign,nonatomic) long long type;                //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) BOOL hasChapters;              //@synthesize hasChapters=_hasChapters - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSURL *)webURL;
-(void)setWebURL:(NSURL *)arg1 ;
-(void)setAuthor:(NSString *)arg1 ;
-(void)setImage:(NSData *)arg1 ;
-(void)setPath:(NSString *)arg1 ;
-(NSString *)path;
-(NSString *)author;
-(NSString *)title;
-(id)imageDescription;
-(id)init;
-(long long)type;
-(NSData *)image;
-(id)initWithCoder:(id)arg1 ;
-(void)setType:(long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(id)description;
-(BOOL)hasChapters;
-(void)setHasChapters:(BOOL)arg1 ;
@end
