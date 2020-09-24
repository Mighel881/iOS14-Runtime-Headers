/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:40:22 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/Widgets.framework/Widgets
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIView.h>

@protocol WGWidgetPinningTeachingViewDelegate;
@class UIView, UILabel, UIButton, WGWidgetPinningTeachingAnimationView, NSLayoutConstraint;

@interface WGWidgetPinningTeachingView : UIView {

	UIView* _contentView;
	id<WGWidgetPinningTeachingViewDelegate> _delegate;
	UILabel* _titleLabel;
	UILabel* _bodyLabel;
	UIButton* _yesButton;
	UIButton* _noButton;
	WGWidgetPinningTeachingAnimationView* _iconImageView;
	NSLayoutConstraint* _titleLabelTopConstraint;
	NSLayoutConstraint* _titleLabelToBodyLabelConstraint;

}

@property (nonatomic,retain) UILabel * titleLabel;                                                 //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UILabel * bodyLabel;                                                  //@synthesize bodyLabel=_bodyLabel - In the implementation block
@property (nonatomic,retain) UIButton * yesButton;                                                 //@synthesize yesButton=_yesButton - In the implementation block
@property (nonatomic,retain) UIButton * noButton;                                                  //@synthesize noButton=_noButton - In the implementation block
@property (nonatomic,retain) WGWidgetPinningTeachingAnimationView * iconImageView;                 //@synthesize iconImageView=_iconImageView - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * titleLabelTopConstraint;                         //@synthesize titleLabelTopConstraint=_titleLabelTopConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * titleLabelToBodyLabelConstraint;                 //@synthesize titleLabelToBodyLabelConstraint=_titleLabelToBodyLabelConstraint - In the implementation block
@property (nonatomic,retain) UIView * contentView;                                                 //@synthesize contentView=_contentView - In the implementation block
@property (assign,nonatomic,__weak) id<WGWidgetPinningTeachingViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(UIView *)contentView;
-(WGWidgetPinningTeachingAnimationView *)iconImageView;
-(void)setIconImageView:(WGWidgetPinningTeachingAnimationView *)arg1 ;
-(UILabel *)titleLabel;
-(void)_updateAppearance;
-(UILabel *)bodyLabel;
-(void)setBodyLabel:(UILabel *)arg1 ;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(void)setContentView:(UIView *)arg1 ;
-(id)init;
-(void)_dynamicUserInterfaceTraitDidChange;
-(void)setDelegate:(id<WGWidgetPinningTeachingViewDelegate>)arg1 ;
-(UIButton *)noButton;
-(id<WGWidgetPinningTeachingViewDelegate>)delegate;
-(void)_updateFonts;
-(NSLayoutConstraint *)titleLabelTopConstraint;
-(void)setTitleLabelTopConstraint:(NSLayoutConstraint *)arg1 ;
-(void)stopAnimating;
-(UIButton *)yesButton;
-(void)_contentSizeCategoryDidChange;
-(void)_createConstraints;
-(void)startAnimating;
-(void)setYesButton:(UIButton *)arg1 ;
-(void)setNoButton:(UIButton *)arg1 ;
-(void)_createContainerViews;
-(void)_createContentViews;
-(void)_setupButtonsTargets;
-(void)_updateFontDependantConstraints;
-(void)_yesButtonTapped;
-(void)_noButtonTapped;
-(NSLayoutConstraint *)titleLabelToBodyLabelConstraint;
-(void)setTitleLabelToBodyLabelConstraint:(NSLayoutConstraint *)arg1 ;
@end
