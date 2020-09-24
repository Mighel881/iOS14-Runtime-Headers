/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:46:41 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PKDASession.h>

@class DAKeySharingSession;

@interface PKAppletSubcredentialSharingSession : PKDASession

@property (nonatomic,retain) DAKeySharingSession * session; 
+(id)createSessionWithDelegate:(id)arg1 ;
-(void)sendSharingInvitation:(id)arg1 forInvitationRequest:(id)arg2 withSharedCredential:(id)arg3 completion:(/*^block*/id)arg4 ;
-(BOOL)cancelSharingInvitationWithIdentifier:(id)arg1 ;
-(void)acceptSharingInvitation:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)sendSharingInvitationWithRequest:(id)arg1 auth:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)setAccountAttestation:(id)arg1 forCredential:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)accountAttestionRequestForCredential:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)requestSharingInvitation:(id)arg1 from:(id)arg2 completion:(/*^block*/id)arg3 ;
@end
