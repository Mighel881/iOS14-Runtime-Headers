/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:37:51 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CardKit.framework/CardKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CRCardSection, CRKCardSectionView, CRKFeedbackDelegateProxying, CRKCardSectionViewControlling;
@class UIView, UIViewController, NSString, _CRKDebugOverlayView, CRKCardSectionViewController;

@interface CRKCardSectionViewConfiguration : NSObject {

	BOOL _debugModeEnabled;
	id<CRCardSection> _cardSection;
	UIView*<CRKCardSectionView> _cardSectionView;
	id<CRKFeedbackDelegateProxying> _feedbackDelegateProxy;
	UIViewController*<CRKCardSectionViewControlling> _cardSectionViewController;
	NSString* _providerIdentifier;
	_CRKDebugOverlayView* _debugOverlayView;
	CRKCardSectionViewController* _cardKitCardSectionViewController;

}

@property (setter=_setProviderIdentifier:,getter=_providerIdentifier,nonatomic,copy) NSString * providerIdentifier;                                                                              //@synthesize providerIdentifier=_providerIdentifier - In the implementation block
@property (setter=_setDebugOverlayView:,getter=_debugOverlayView,nonatomic,retain) _CRKDebugOverlayView * debugOverlayView;                                                                      //@synthesize debugOverlayView=_debugOverlayView - In the implementation block
@property (assign,setter=_setDebugModeEnabled:,getter=_debugModeEnabled,nonatomic) BOOL debugModeEnabled;                                                                                        //@synthesize debugModeEnabled=_debugModeEnabled - In the implementation block
@property (setter=_setCardKitCardSectionViewController:,getter=_cardKitCardSectionViewController,nonatomic,retain) CRKCardSectionViewController * cardKitCardSectionViewController;              //@synthesize cardKitCardSectionViewController=_cardKitCardSectionViewController - In the implementation block
@property (nonatomic,retain) id<CRCardSection> cardSection;                                                                                                                                      //@synthesize cardSection=_cardSection - In the implementation block
@property (nonatomic,retain) UIView*<CRKCardSectionView> cardSectionView;                                                                                                                        //@synthesize cardSectionView=_cardSectionView - In the implementation block
@property (nonatomic,retain) id<CRKFeedbackDelegateProxying> feedbackDelegateProxy;                                                                                                              //@synthesize feedbackDelegateProxy=_feedbackDelegateProxy - In the implementation block
@property (nonatomic,retain) UIViewController*<CRKCardSectionViewControlling> cardSectionViewController;                                                                                         //@synthesize cardSectionViewController=_cardSectionViewController - In the implementation block
-(id<CRCardSection>)cardSection;
-(void)setCardSectionView:(UIView*<CRKCardSectionView>)arg1 ;
-(void)setCardSection:(id<CRCardSection>)arg1 ;
-(id)_providerIdentifier;
-(void)_setProviderIdentifier:(id)arg1 ;
-(UIView*<CRKCardSectionView>)cardSectionView;
-(id)_debugOverlayView;
-(void)_setDebugModeEnabled:(BOOL)arg1 ;
-(id)_cardKitCardSectionViewController;
-(BOOL)_debugModeEnabled;
-(UIViewController*<CRKCardSectionViewControlling>)cardSectionViewController;
-(id<CRKFeedbackDelegateProxying>)feedbackDelegateProxy;
-(void)_updateDebugOverlayViewText:(id)arg1 ;
-(void)_setDebugOverlayView:(id)arg1 ;
-(void)setFeedbackDelegateProxy:(id<CRKFeedbackDelegateProxying>)arg1 ;
-(void)setCardSectionViewController:(UIViewController*<CRKCardSectionViewControlling>)arg1 ;
-(void)_setCardKitCardSectionViewController:(id)arg1 ;
@end
