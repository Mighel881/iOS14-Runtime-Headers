/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:45:13 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol _UISearchBarContainerSublayoutDelegate <NSObject>
@property (getter=isProspective,nonatomic,readonly) BOOL prospective; 
@property (assign,getter=isHostingNavBarTransitionActive,nonatomic) BOOL hostingNavBarTransitionActive; 
@required
-(BOOL)isHostingNavBarTransitionActive;
-(void)containerLayoutWillUpdateLayout:(id)arg1;
-(void)setHostingNavBarTransitionActive:(BOOL)arg1;
-(double)layout:(id)arg1 fontScaledValueForValue:(double)arg2;
-(BOOL)isProspective;

@end

