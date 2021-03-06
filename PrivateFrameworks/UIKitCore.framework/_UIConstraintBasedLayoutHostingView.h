/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:45:31 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>

@class UIView;

@interface _UIConstraintBasedLayoutHostingView : UIView {

	UIView* _hostedView;
	BOOL _hasAddedConstraints;

}

@property (nonatomic,retain) UIView * hostedView;              //@synthesize hostedView=_hostedView - In the implementation block
+(BOOL)requiresConstraintBasedLayout;
-(void)_intrinsicContentSizeInvalidatedForChildView:(id)arg1 ;
-(void)willRemoveSubview:(id)arg1 ;
-(UIEdgeInsets)alignmentRectInsets;
-(void)updateConstraints;
-(void)setHostedView:(UIView *)arg1 ;
-(CGSize)_layoutSizeThatFits:(CGSize)arg1 fixedAxes:(unsigned long long)arg2 ;
-(id)initWithHostedView:(id)arg1 ;
-(BOOL)_layoutHeightDependsOnWidth;
-(void)_setFrameWithAlignmentRect:(CGRect)arg1 ;
-(void)_layoutMetricsInvalidatedForHostedView;
-(void)constraintsDidChangeInEngine:(id)arg1 ;
-(void)_scheduleUpdateConstraintsPassAsEngineHostNeedingLayout:(BOOL)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(UIView *)hostedView;
-(CGSize)_baselineOffsetsAtSize:(CGSize)arg1 ;
@end

