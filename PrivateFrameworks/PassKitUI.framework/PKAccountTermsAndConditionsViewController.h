/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:44:43 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitUI/PKFeatureTermsAndConditionsViewController.h>

@class PKAccount, PKPaymentWebService, NSString;

@interface PKAccountTermsAndConditionsViewController : PKFeatureTermsAndConditionsViewController {

	PKAccount* _account;
	PKPaymentWebService* _webService;
	NSString* _termsIdentifier;

}
-(void)termsShown;
-(void)htmlTermsDataWithCompletion:(/*^block*/id)arg1 ;
-(void)_termsDataForIdentifier:(id)arg1 format:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)termsAccepted:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(id)initWithAccount:(id)arg1 webService:(id)arg2 context:(long long)arg3 termsIdentifier:(id)arg4 ;
-(void)initalTermsDataWithCompletion:(/*^block*/id)arg1 ;
-(void)pdfTermsDataWithIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)presentErrorAlert;
-(id)displayTitle;
@end

