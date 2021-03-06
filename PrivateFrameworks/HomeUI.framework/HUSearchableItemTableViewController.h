/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:42:31 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeUI/HUItemTableViewController.h>
#import <libobjc.A.dylib/HUSearchableViewController.h>

@protocol HUSearchBar;
@class UIView, UIScrollView, NSString;

@interface HUSearchableItemTableViewController : HUItemTableViewController <HUSearchableViewController> {

	UIView*<HUSearchBar> _searchBar;
	unsigned long long _searchBarPosition;
	UIScrollView* _searchBarWrapper;

}

@property (nonatomic,readonly) UIScrollView * searchBarWrapper;                   //@synthesize searchBarWrapper=_searchBarWrapper - In the implementation block
@property (nonatomic,readonly) UIView*<HUSearchBar> searchBar;                    //@synthesize searchBar=_searchBar - In the implementation block
@property (nonatomic,readonly) unsigned long long searchBarPosition;              //@synthesize searchBarPosition=_searchBarPosition - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)viewDidLayoutSubviews;
-(UIView*<HUSearchBar>)searchBar;
-(id)initWithItemManager:(id)arg1 tableViewStyle:(long long)arg2 ;
-(void)setupSearchBar;
-(void)updateForSearch;
-(void)viewDidLoad;
-(id)initWithItemManager:(id)arg1 tableViewStyle:(long long)arg2 searchBar:(id)arg3 searchBarPosition:(unsigned long long)arg4 ;
-(void)textFieldDidEndEditing:(id)arg1 ;
-(void)textFieldDidChange:(id)arg1 ;
-(unsigned long long)searchBarPosition;
-(UIScrollView *)searchBarWrapper;
@end

