/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:44:49 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SettingsCellularUI.framework/SettingsCellularUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSListController.h>

@class PSUIPlanPendingTransferMenusGroup;

@interface PSUIPlanPendingTransferDetailController : PSListController {

	PSUIPlanPendingTransferMenusGroup* _planPendingTransferMenus;

}

@property (nonatomic,retain) PSUIPlanPendingTransferMenusGroup * planPendingTransferMenus;              //@synthesize planPendingTransferMenus=_planPendingTransferMenus - In the implementation block
-(id)init;
-(id)specifiers;
-(void)cellularPlanChanged;
-(PSUIPlanPendingTransferMenusGroup *)planPendingTransferMenus;
-(void)setPlanPendingTransferMenus:(PSUIPlanPendingTransferMenusGroup *)arg1 ;
@end

