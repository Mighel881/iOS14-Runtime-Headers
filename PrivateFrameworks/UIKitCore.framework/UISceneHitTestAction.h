/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:45:25 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <BaseBoard/BSAction.h>

@interface UISceneHitTestAction : BSAction

@property (nonatomic,readonly) CGPoint touchLocation; 
-(id)initWithTouchLocation:(CGPoint)arg1 responseHandler:(/*^block*/id)arg2 ;
-(void)sendResponse:(id)arg1 ;
-(long long)UIActionType;
-(CGPoint)touchLocation;
@end
