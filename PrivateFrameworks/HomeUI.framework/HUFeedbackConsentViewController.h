/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:42:31 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIViewController.h>

@protocol HUFeedbackConsentViewControllerDelegate;
@class WKWebView;

@interface HUFeedbackConsentViewController : UIViewController {

	BOOL _isFamilyAndFriendsConsent;
	WKWebView* _consentView;
	id<HUFeedbackConsentViewControllerDelegate> _consentDelegate;

}

@property (nonatomic,retain) WKWebView * consentView;                                                  //@synthesize consentView=_consentView - In the implementation block
@property (assign,nonatomic) BOOL isFamilyAndFriendsConsent;                                           //@synthesize isFamilyAndFriendsConsent=_isFamilyAndFriendsConsent - In the implementation block
@property (nonatomic,retain) id<HUFeedbackConsentViewControllerDelegate> consentDelegate;              //@synthesize consentDelegate=_consentDelegate - In the implementation block
-(void)updateViewConstraints;
-(void)dealloc;
-(void)viewDidLoad;
-(void)loadView;
-(id)htmlString;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)initWithConsentDelegate:(id)arg1 ;
-(WKWebView *)consentView;
-(void)didDeclineConsent;
-(void)didAcceptConsent;
-(id<HUFeedbackConsentViewControllerDelegate>)consentDelegate;
-(id)consentFormFilePath;
-(void)setConsentView:(WKWebView *)arg1 ;
-(BOOL)isFamilyAndFriendsConsent;
-(void)setIsFamilyAndFriendsConsent:(BOOL)arg1 ;
-(void)setConsentDelegate:(id<HUFeedbackConsentViewControllerDelegate>)arg1 ;
@end
