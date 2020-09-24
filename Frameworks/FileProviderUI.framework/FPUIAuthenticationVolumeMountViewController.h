/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:50:44 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/FileProviderUI.framework/FileProviderUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FileProviderUI/FPUIAuthenticationTableViewController.h>

@class NSArray, NSMutableIndexSet;

@interface FPUIAuthenticationVolumeMountViewController : FPUIAuthenticationTableViewController {

	NSArray* _allVolumeRepresentations;
	NSArray* _mountedVolumeIdentifiers;
	NSMutableIndexSet* _selectedVolumesIndexes;

}
-(void)_done:(id)arg1 ;
-(void)viewDidLoad;
-(BOOL)_canMoveToNextStep;
-(id)tableCellCheckmarkImageDisabled;
-(void)selectedVolumesIndexesDidChange;
-(id)initWithVolumes:(id)arg1 mountedVolumeIdentifiers:(id)arg2 ;
-(id)defaultRightBarButtonItem;
-(void)setupTableViewSections;
@end
