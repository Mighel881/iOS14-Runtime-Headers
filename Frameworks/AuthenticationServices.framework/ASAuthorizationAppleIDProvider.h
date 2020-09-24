/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:50:07 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/AuthenticationServices.framework/AuthenticationServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/AKAuthorizationNotificationHandler.h>
#import <libobjc.A.dylib/ASAuthorizationProvider.h>

@class NSString;

@interface ASAuthorizationAppleIDProvider : NSObject <AKAuthorizationNotificationHandler, ASAuthorizationProvider>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
-(void)credentialStateDidChange:(long long)arg1 completion:(/*^block*/id)arg2 ;
-(id)createRequest;
-(void)getCredentialStateForUserID:(id)arg1 completion:(/*^block*/id)arg2 ;
@end
