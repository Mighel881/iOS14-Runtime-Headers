/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:40:21 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/WelcomeKitUI.framework/WelcomeKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OnBoardingKit/OBWelcomeController.h>
#import <libobjc.A.dylib/OBSetupAssistantSupport.h>

@class WLWelcomeController, NSString;

@interface WLRetryViewController : OBWelcomeController <OBSetupAssistantSupport> {

	WLWelcomeController* _welcomeController;
	/*^block*/id _continueHandler;

}

@property (nonatomic,copy) id continueHandler;                      //@synthesize continueHandler=_continueHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)continueHandler;
-(void)setContinueHandler:(id)arg1 ;
-(id)initWithWelcomeController:(id)arg1 ;
-(void)_continueTapped:(id)arg1 ;
@end

