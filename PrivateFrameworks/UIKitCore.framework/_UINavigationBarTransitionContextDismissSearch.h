/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:45:13 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/_UINavigationBarTransitionContext.h>

@class UISearchBar;

@interface _UINavigationBarTransitionContextDismissSearch : _UINavigationBarTransitionContext {

	UISearchBar* _transitioningSearchBar;

}
-(void)cancel;
-(void)prepare;
-(void)animate;
-(void)complete;
-(int)transition;
@end

