/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:43:39 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/InAppMessages.framework/InAppMessages
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class IAMMessage, IAMMessageGroup, UIViewController, NSTimer;

@interface IAMPresentingModalMessageContext : NSObject {

	IAMMessage* _message;
	IAMMessageGroup* _messageGroup;
	UIViewController* _presentingViewController;
	NSTimer* _presentationExpirationTimer;
	/*^block*/id _presentationHandler;

}

@property (nonatomic,retain) IAMMessage * message;                                            //@synthesize message=_message - In the implementation block
@property (nonatomic,retain) IAMMessageGroup * messageGroup;                                  //@synthesize messageGroup=_messageGroup - In the implementation block
@property (assign,nonatomic,__weak) UIViewController * presentingViewController;              //@synthesize presentingViewController=_presentingViewController - In the implementation block
@property (nonatomic,retain) NSTimer * presentationExpirationTimer;                           //@synthesize presentationExpirationTimer=_presentationExpirationTimer - In the implementation block
@property (nonatomic,copy) id presentationHandler;                                            //@synthesize presentationHandler=_presentationHandler - In the implementation block
-(void)setPresentingViewController:(UIViewController *)arg1 ;
-(void)setMessage:(IAMMessage *)arg1 ;
-(NSTimer *)presentationExpirationTimer;
-(id)initWithMessage:(id)arg1 messageGroup:(id)arg2 presentingViewController:(id)arg3 presentationExpirationTimer:(id)arg4 presentationHandler:(/*^block*/id)arg5 ;
-(UIViewController *)presentingViewController;
-(void)setPresentationExpirationTimer:(NSTimer *)arg1 ;
-(IAMMessageGroup *)messageGroup;
-(void)setMessageGroup:(IAMMessageGroup *)arg1 ;
-(void)setPresentationHandler:(id)arg1 ;
-(id)presentationHandler;
-(IAMMessage *)message;
@end
