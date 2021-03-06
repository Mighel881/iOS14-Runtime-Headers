/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:38:25 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AppStoreKit.framework/AppStoreKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/RadiosPreferencesDelegate.h>

@protocol ASKAirplaneModeInquiryDelegate;
@class RadiosPreferences;

@interface ASKAirplaneModeInquiry : NSObject <RadiosPreferencesDelegate> {

	id<ASKAirplaneModeInquiryDelegate> _delegate;
	RadiosPreferences* _radiosPreferences;

}

@property (nonatomic,readonly) RadiosPreferences * radiosPreferences;                         //@synthesize radiosPreferences=_radiosPreferences - In the implementation block
@property (assign,nonatomic,__weak) id<ASKAirplaneModeInquiryDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) BOOL isEnabled; 
+(id)settingsURL;
-(void)airplaneModeChanged;
-(BOOL)isEnabled;
-(id)init;
-(void)setDelegate:(id<ASKAirplaneModeInquiryDelegate>)arg1 ;
-(RadiosPreferences *)radiosPreferences;
-(id<ASKAirplaneModeInquiryDelegate>)delegate;
@end

