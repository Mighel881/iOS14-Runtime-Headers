/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:44:46 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/_UIRemoteViewController.h>
#import <libobjc.A.dylib/PKRemoteSubcredentialMessageComposeViewControllerProtocol.h>

@protocol PKSubcredentialMessageComposeViewControllerDelegate;
@class NSString;

@interface PKRemoteSubcredentialMessageComposeViewController : _UIRemoteViewController <PKRemoteSubcredentialMessageComposeViewControllerProtocol> {

	BOOL _finished;
	id<PKSubcredentialMessageComposeViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<PKSubcredentialMessageComposeViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)shouldPropagateAppearanceCustomizations;
+(id)exportedInterface;
+(id)serviceViewControllerInterface;
-(void)messageComposeViewControllerDidFinishWithResult:(BOOL)arg1 ;
-(void)setDelegate:(id<PKSubcredentialMessageComposeViewControllerDelegate>)arg1 ;
-(void)viewServiceDidTerminateWithError:(id)arg1 ;
-(id<PKSubcredentialMessageComposeViewControllerDelegate>)delegate;
@end
