/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:40:56 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSSet;

@interface PGDeduper : NSObject {

	NSSet* _identifiersOfRequiredItems;

}

@property (nonatomic,copy) NSSet * identifiersOfRequiredItems;              //@synthesize identifiersOfRequiredItems=_identifiersOfRequiredItems - In the implementation block
-(id)requiredItemsInItems:(id)arg1 ;
-(NSSet *)identifiersOfRequiredItems;
-(void)setIdentifiersOfRequiredItems:(NSSet *)arg1 ;
-(BOOL)itemIsRequired:(id)arg1 ;
-(id)deduplicatedItemsWithItems:(id)arg1 debugInfo:(id)arg2 progressBlock:(/*^block*/id)arg3 ;
@end

