/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:41:37 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/FMCoreUI.framework/FMCoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIView.h>

@class FMSlidingPaneViewController;

@interface ISPaneFrameView : UIView {

	FMSlidingPaneViewController* _owningViewController;

}

@property (assign,nonatomic,__weak) FMSlidingPaneViewController * owningViewController;              //@synthesize owningViewController=_owningViewController - In the implementation block
-(void)layoutSubviews;
-(FMSlidingPaneViewController *)owningViewController;
-(void)setOwningViewController:(FMSlidingPaneViewController *)arg1 ;
@end

