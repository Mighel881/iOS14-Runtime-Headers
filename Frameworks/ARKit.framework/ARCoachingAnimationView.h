/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:51:03 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/ARKit.framework/ARKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ARKit/ARKit-Structs.h>
#import <UIKitCore/UIView.h>
#import <ARKit/ARCoachingUpdateManagerDelegate.h>

@class CAMetalLayer, ARCoachingUpdateManager, ARCoachingGlyphRenderer, NSString;

@interface ARCoachingAnimationView : UIView <ARCoachingUpdateManagerDelegate> {

	CAMetalLayer* _metalLayer;
	ARCoachingUpdateManager* _updateManager;
	ARCoachingGlyphRenderer* _renderer;
	 _lastCameraRight;
	 _lastCameraTranslation;
	 _rotationStartCameraRight;
	 _rotationStartCameraTranslation;
	float _cubeAngle;
	BOOL _isRotating;
	BOOL _wasRotating;
	double _nextStateTime;
	long long _lastUpdateState;
	long long _animationState;

}

@property (assign,nonatomic) long long animationState;              //@synthesize animationState=_animationState - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(CGSize)intrinsicContentSize;
-(long long)animationState;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setAnimationState:(long long)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setupView;
-(void)updateForCurrentTime:(double)arg1 timeDelta:(double)arg2 ;
-(void)resizeForDrawable:(id)arg1 ;
-(void)drawInDrawable:(id)arg1 withCommandBuffer:(id)arg2 timeDelta:(double)arg3 ;
-(void)clampCubeToQuarterRotation;
-(void)updateMetalLayer;
-(void)updateCubeRotation:(id)arg1 motionTracker:(id)arg2 ;
-(double)calcNextAnimationSwitchTime:(double)arg1 forState:(unsigned long long)arg2 ;
-(void)updateAlternatingPlanes:(double)arg1 ;
-(void)updateVerticalClamp:(double)arg1 ;
-(void)startCoachingAnimation:(long long)arg1 ;
-(void)killCoachingAnimation;
-(void)updateWithFrame:(id)arg1 motionTracker:(id)arg2 ;
-(void)orientationChanged;
@end

