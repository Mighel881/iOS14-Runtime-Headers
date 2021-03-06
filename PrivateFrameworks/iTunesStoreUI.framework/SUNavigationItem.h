/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:42:17 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UINavigationItem.h>

@protocol SUNavigationItemDelegate;
@class UIBarButtonItem;

@interface SUNavigationItem : UINavigationItem {

	id<SUNavigationItemDelegate> _delegate;

}

@property (assign,nonatomic) id<SUNavigationItemDelegate> delegate;                     //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * secondaryLeftBarButtonItem; 
-(void)setDelegate:(id<SUNavigationItemDelegate>)arg1 ;
-(void)setLeftBarButtonItems:(id)arg1 animated:(BOOL)arg2 ;
-(void)setLeftBarButtonItem:(id)arg1 ;
-(void)setLeftBarButtonItems:(id)arg1 ;
-(id<SUNavigationItemDelegate>)delegate;
-(void)setLeftBarButtonItem:(id)arg1 animated:(BOOL)arg2 ;
-(void)setSecondaryLeftBarButtonItem:(id)arg1 animated:(BOOL)arg2 ;
-(UIBarButtonItem *)secondaryLeftBarButtonItem;
-(void)setSecondaryLeftBarButtonItem:(UIBarButtonItem *)arg1 ;
@end

