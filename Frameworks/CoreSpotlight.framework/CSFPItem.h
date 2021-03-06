/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:50:23 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/CoreSpotlight.framework/CoreSpotlight
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FPItem, NSString, CSSearchableItem;

@interface CSFPItem : NSObject {

	FPItem* _internal;

}

@property (nonatomic,readonly) NSString * providerIdentifier; 
@property (nonatomic,readonly) NSString * itemIdentifier; 
@property (nonatomic,readonly) CSSearchableItem * searchableItem; 
+(void)initialize;
+(id)itemWithFileURL:(id)arg1 forEUID:(unsigned)arg2 ;
+(id)itemWithFileURL:(id)arg1 ;
-(NSString *)itemIdentifier;
-(CSSearchableItem *)searchableItem;
-(id)initWithFPItem:(id)arg1 ;
-(NSString *)providerIdentifier;
@end

