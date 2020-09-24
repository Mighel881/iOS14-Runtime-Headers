/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:45:12 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIPanGestureRecognizer.h>

@interface _UIBarPanGestureRecognizer : UIPanGestureRecognizer {

	long long _barAction;
	double _bias;

}

@property (nonatomic,readonly) long long barAction;              //@synthesize barAction=_barAction - In the implementation block
@property (nonatomic,readonly) double bias;                      //@synthesize bias=_bias - In the implementation block
-(double)bias;
-(long long)barAction;
-(void)setDelegate:(id)arg1 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(id)description;
-(BOOL)canPreventGestureRecognizer:(id)arg1 ;
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 ;
-(void)_setDelegate:(id)arg1 ;
@end
