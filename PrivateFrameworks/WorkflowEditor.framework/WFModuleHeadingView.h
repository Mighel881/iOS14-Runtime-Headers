/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:41:25 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/WorkflowEditor.framework/WorkflowEditor
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WorkflowEditor/WorkflowEditor-Structs.h>
#import <UIKitCore/UIView.h>

@class WFAction;

@interface WFModuleHeadingView : UIView {

	WFAction* _accessibilityAnnouncementAction;

}

@property (assign,nonatomic,__weak) WFAction * accessibilityAnnouncementAction;              //@synthesize accessibilityAnnouncementAction=_accessibilityAnnouncementAction - In the implementation block
-(id)accessibilityLabel;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(BOOL)accessibilityActivate;
-(unsigned long long)accessibilityTraits;
-(WFAction *)accessibilityAnnouncementAction;
-(void)setAccessibilityAnnouncementAction:(WFAction *)arg1 ;
@end
