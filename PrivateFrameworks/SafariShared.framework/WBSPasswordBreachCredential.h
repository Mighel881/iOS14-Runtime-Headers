/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:40:03 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSData, NSDate;

@interface WBSPasswordBreachCredential : NSObject {

	NSString* _password;
	NSData* _persistentIdentifier;
	NSDate* _dateLastModified;

}

@property (nonatomic,readonly) NSString * password;                        //@synthesize password=_password - In the implementation block
@property (nonatomic,readonly) NSData * persistentIdentifier;              //@synthesize persistentIdentifier=_persistentIdentifier - In the implementation block
@property (nonatomic,readonly) NSDate * dateLastModified;                  //@synthesize dateLastModified=_dateLastModified - In the implementation block
-(NSDate *)dateLastModified;
-(id)initWithPassword:(id)arg1 persistentIdentifier:(id)arg2 dateLastModified:(id)arg3 ;
-(NSString *)password;
-(id)initWithSecItemDictionary:(id)arg1 ;
-(id)description;
-(NSData *)persistentIdentifier;
@end
