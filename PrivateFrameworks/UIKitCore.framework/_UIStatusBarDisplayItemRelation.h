/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:45:39 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray;

@interface _UIStatusBarDisplayItemRelation : NSObject

@property (getter=isFulfilled,nonatomic,readonly) BOOL fulfilled; 
@property (nonatomic,readonly) NSArray * itemStates; 
+(id)allRelationWithRelations:(id)arg1 ;
+(id)exclusionWithDisplayItemState:(id)arg1 placement:(id)arg2 ;
+(id)requirementWithDisplayItemState:(id)arg1 placement:(id)arg2 ;
+(id)anyRelationWithRelations:(id)arg1 ;
-(NSArray *)itemStates;
-(id)_ui_descriptionBuilder;
-(BOOL)isFulfilled;
-(id)type;
-(id)description;
@end

