/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:42:24 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class UIViewController;


@protocol HUCameraSettingsModule <NSObject>
@property (nonatomic,readonly) unsigned long long displayStyle; 
@property (nonatomic,retain) UIViewController * presentingViewController; 
@optional
-(void)setPresentingViewController:(id)arg1;
-(UIViewController *)presentingViewController;
-(id)didSelectItem:(id)arg1;
-(unsigned long long)displayStyle;

@required
-(BOOL)isItemHeader:(id)arg1;

@end
