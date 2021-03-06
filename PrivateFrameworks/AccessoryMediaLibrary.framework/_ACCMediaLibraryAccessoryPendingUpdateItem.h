/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:42:21 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AccessoryMediaLibrary.framework/AccessoryMediaLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface _ACCMediaLibraryAccessoryPendingUpdateItem : NSObject {

	int _type;
	NSString* _libraryUID;
	NSString* _revision;
	id _item;

}

@property (nonatomic,readonly) NSString * libraryUID;              //@synthesize libraryUID=_libraryUID - In the implementation block
@property (nonatomic,readonly) NSString * revision;                //@synthesize revision=_revision - In the implementation block
@property (nonatomic,readonly) int type;                           //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) id item;                            //@synthesize item=_item - In the implementation block
-(NSString *)revision;
-(void)dealloc;
-(NSString *)libraryUID;
-(id)item;
-(int)type;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)initWithLibrary:(id)arg1 revision:(id)arg2 type:(int)arg3 item:(id)arg4 ;
@end

