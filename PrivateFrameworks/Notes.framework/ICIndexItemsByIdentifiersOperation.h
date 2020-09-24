/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:39:23 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/Notes.framework/Notes
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Notes/ICIndexItemsOperation.h>

@class NSArray;

@interface ICIndexItemsByIdentifiersOperation : ICIndexItemsOperation {

	NSArray* _objectIDURIsToIndex;

}

@property (nonatomic,copy) NSArray * objectIDURIsToIndex;              //@synthesize objectIDURIsToIndex=_objectIDURIsToIndex - In the implementation block
-(id)initWithSearchableIndex:(id)arg1 dataSources:(id)arg2 ;
-(id)initWithSearchableIndex:(id)arg1 dataSources:(id)arg2 objectIDURIsToIndex:(id)arg3 ;
-(void)setObjectIDURIsToIndex:(NSArray *)arg1 ;
-(NSArray *)objectIDURIsToIndex;
-(void)main;
@end
