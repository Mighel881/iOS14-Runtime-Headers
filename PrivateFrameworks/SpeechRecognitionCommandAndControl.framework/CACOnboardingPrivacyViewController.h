/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:35:57 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SpeechRecognitionCommandAndControl.framework/SpeechRecognitionCommandAndControl
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OnBoardingKit/OBWelcomeController.h>

@class OBBoldTrayButton;

@interface CACOnboardingPrivacyViewController : OBWelcomeController {

	OBBoldTrayButton* _acceptButton;

}

@property (nonatomic,retain) OBBoldTrayButton * acceptButton;              //@synthesize acceptButton=_acceptButton - In the implementation block
+(id)defaultController;
-(OBBoldTrayButton *)acceptButton;
-(void)setAcceptButton:(OBBoldTrayButton *)arg1 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)dismiss;
-(BOOL)isModalInPresentation;
-(BOOL)_canShowWhileLocked;
-(id)_defaultController;
-(void)allowDataCollection;
-(void)disallowDataCollection;
-(void)showPrivacy;
@end

