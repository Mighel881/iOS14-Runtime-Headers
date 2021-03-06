/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:51:01 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/Social.framework/Social
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface SLFacebookAlbum : NSObject <NSSecureCoding> {

	BOOL _canUpload;
	BOOL _isDefaultAlbum;
	NSString* _identifier;
	NSString* _name;
	NSString* _coverPhotoIdentifier;
	long long _count;

}

@property (retain) NSString * identifier;                        //@synthesize identifier=_identifier - In the implementation block
@property (retain) NSString * name;                              //@synthesize name=_name - In the implementation block
@property (retain) NSString * coverPhotoIdentifier;              //@synthesize coverPhotoIdentifier=_coverPhotoIdentifier - In the implementation block
@property (assign) long long count;                              //@synthesize count=_count - In the implementation block
@property (assign) BOOL canUpload;                               //@synthesize canUpload=_canUpload - In the implementation block
@property (assign) BOOL isDefaultAlbum;                          //@synthesize isDefaultAlbum=_isDefaultAlbum - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)albumWithDataDictionary:(id)arg1 ;
+(id)albumsWithAlbumDataDictionaries:(id)arg1 ;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(void)setCount:(long long)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)count;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)name;
-(id)description;
-(void)setCoverPhotoIdentifier:(NSString *)arg1 ;
-(void)setCanUpload:(BOOL)arg1 ;
-(void)setIsDefaultAlbum:(BOOL)arg1 ;
-(NSString *)coverPhotoIdentifier;
-(BOOL)canUpload;
-(BOOL)isDefaultAlbum;
@end

