/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:44:45 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <UIKitCore/UIView.h>

@class PKContinuousButton, UITextView, PKPaymentSetupFooterView, OBPrivacyLinkController, NSString, ASCLockupView;

@interface PKPaymentSetupDockView : UIView {

	PKContinuousButton* _continuousButton;
	UITextView* _buttonExplanationTextView;
	PKPaymentSetupFooterView* _footerView;
	BOOL _isBuddyiPad;
	BOOL _requiresAdditionalContinuousButtonPadding;
	long long _context;
	OBPrivacyLinkController* _privacyLink;
	NSString* _buttonExplanationText;
	ASCLockupView* _lockUpView;

}

@property (assign,nonatomic) BOOL requiresAdditionalContinuousButtonPadding;              //@synthesize requiresAdditionalContinuousButtonPadding=_requiresAdditionalContinuousButtonPadding - In the implementation block
@property (nonatomic,readonly) long long context;                                         //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) OBPrivacyLinkController * privacyLink;                       //@synthesize privacyLink=_privacyLink - In the implementation block
@property (nonatomic,retain) NSString * buttonExplanationText;                            //@synthesize buttonExplanationText=_buttonExplanationText - In the implementation block
@property (nonatomic,readonly) UITextView * buttonExplanationTextView; 
@property (nonatomic,retain) PKContinuousButton * continuousButton; 
@property (nonatomic,retain) PKPaymentSetupFooterView * footerView; 
@property (nonatomic,retain) ASCLockupView * lockUpView;                                  //@synthesize lockUpView=_lockUpView - In the implementation block
-(void)setFooterView:(PKPaymentSetupFooterView *)arg1 ;
-(void)setRequiresAdditionalContinuousButtonPadding:(BOOL)arg1 ;
-(void)setButtonExplanationText:(NSString *)arg1 ;
-(void)setButtonsEnabled:(BOOL)arg1 ;
-(PKPaymentSetupFooterView *)footerView;
-(CGSize)_sizeForButton:(id)arg1 constrainedToSize:(CGSize)arg2 ;
-(NSString *)buttonExplanationText;
-(void)layoutSubviews;
-(BOOL)requiresAdditionalContinuousButtonPadding;
-(ASCLockupView *)lockUpView;
-(UITextView *)buttonExplanationTextView;
-(void)setLockUpView:(ASCLockupView *)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)initWithFrame:(CGRect)arg1 context:(long long)arg2 ;
-(long long)context;
-(void)setPrivacyLink:(OBPrivacyLinkController *)arg1 ;
-(void)setContinuousButton:(PKContinuousButton *)arg1 ;
-(OBPrivacyLinkController *)privacyLink;
-(PKContinuousButton *)continuousButton;
@end

