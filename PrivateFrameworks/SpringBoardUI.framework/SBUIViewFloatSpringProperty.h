/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:36:54 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoardUI/SpringBoardUI-Structs.h>
#import <UIKitCore/UIViewFloatAnimatableProperty.h>
#import <UIKit/UIViewSpringAnimationBehaviorDescribing.h>

@interface SBUIViewFloatSpringProperty : UIViewFloatAnimatableProperty <UIViewSpringAnimationBehaviorDescribing> {

	double _dampingRatio;
	double _response;
	double _impulse;
	double _trackingDampingRatio;
	double _trackingResponse;
	double _trackingImpulse;
	BOOL _tracking;

}

@property (assign,nonatomic) double input; 
@property (assign,nonatomic) double output; 
@property (assign,nonatomic) BOOL tracking;              //@synthesize tracking=_tracking - In the implementation block
+(void)_withoutAnimation:(/*^block*/id)arg1 ;
-(double)projectForDeceleration:(double)arg1 ;
-(void)setTracking:(BOOL)arg1 ;
-(BOOL)tracking;
-(double)output;
-(double)projectForTime:(double)arg1 ;
-(void)setTrackingDampingRatio:(double)arg1 response:(double)arg2 ;
-(id)init;
-(SCD_Struct_SB3)parametersForTransitionFromState:(int)arg1 toState:(int)arg2 ;
-(void)setDampingRatio:(double)arg1 response:(double)arg2 impulse:(double)arg3 ;
-(void)setOutput:(double)arg1 ;
-(void)setInput:(double)arg1 ;
-(void)setDampingRatio:(double)arg1 response:(double)arg2 ;
-(double)input;
-(void)setTrackingDampingRatio:(double)arg1 response:(double)arg2 impulse:(double)arg3 ;
@end

