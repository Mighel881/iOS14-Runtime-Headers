/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:42:44 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ActionKitUI.framework/ActionKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WorkflowKit/WFActionUserInterface.h>
#import <libobjc.A.dylib/WFDictateTextActionViewDelegate.h>
#import <libobjc.A.dylib/WFDictateTextActionUserInterface.h>

@class WFDictateTextActionView, NSString;

@interface WFDictateTextActionUIKitUserInterface : WFActionUserInterface <WFDictateTextActionViewDelegate, WFDictateTextActionUserInterface> {

	WFDictateTextActionView* _actionView;
	/*^block*/id _completionHandler;

}

@property (nonatomic,retain) WFDictateTextActionView * actionView;              //@synthesize actionView=_actionView - In the implementation block
@property (nonatomic,copy) id completionHandler;                                //@synthesize completionHandler=_completionHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)finishWithError:(id)arg1 ;
-(WFDictateTextActionView *)actionView;
-(void)showWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setActionView:(WFDictateTextActionView *)arg1 ;
-(void)setCompletionHandler:(id)arg1 ;
-(id)completionHandler;
-(void)cancelPresentationWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)actionDidBeginListening;
-(void)actionDidReceiveTranscription:(id)arg1 ;
-(void)dictateTextActionViewDidTapStopButton:(id)arg1 ;
@end
