/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:42:28 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeUI/HomeUI-Structs.h>
#import <HomeUI/HUGridActionSetListViewController.h>

@protocol HUSelectableGridActionSetListViewControllerDelegate;
@class HFMutableSetDiff;

@interface HUSelectableGridActionSetListViewController : HUGridActionSetListViewController {

	id<HUSelectableGridActionSetListViewControllerDelegate> _delegate;
	HFMutableSetDiff* _mutableSelectedActionSets;

}

@property (nonatomic,retain) HFMutableSetDiff * mutableSelectedActionSets;                                         //@synthesize mutableSelectedActionSets=_mutableSelectedActionSets - In the implementation block
@property (assign,nonatomic,__weak) id<HUSelectableGridActionSetListViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(BOOL)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2 ;
-(id)init;
-(void)setDelegate:(id<HUSelectableGridActionSetListViewControllerDelegate>)arg1 ;
-(id<HUSelectableGridActionSetListViewControllerDelegate>)delegate;
-(BOOL)presentationCoordinator:(id)arg1 shouldBeginInteractivePresentationWithTouchLocation:(CGPoint)arg2 ;
-(void)configureCell:(id)arg1 forItem:(id)arg2 ;
-(id)initWithRoom:(id)arg1 selectedActionSets:(id)arg2 ;
-(void)setMutableSelectedActionSets:(HFMutableSetDiff *)arg1 ;
-(void)_selectedItemStateChanged:(id)arg1 isSelected:(BOOL)arg2 accessoryViewCell:(id)arg3 ;
-(HFMutableSetDiff *)mutableSelectedActionSets;
-(void)_updateSelectionState:(BOOL)arg1 forCell:(id)arg2 ;
-(void)selectedActionSetStateChanged:(id)arg1 isSelected:(BOOL)arg2 ;
@end

