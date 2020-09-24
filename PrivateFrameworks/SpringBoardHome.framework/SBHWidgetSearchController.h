/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:37:32 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UISearchController.h>

@protocol SBIconListLayoutProvider;
@class UIView;

@interface SBHWidgetSearchController : UISearchController {

	id<SBIconListLayoutProvider> _listLayoutProvider;
	UIView* _searchBarTextFieldBackgroundView;
	UIView* _searchBarBackgroundView;

}

@property (nonatomic,retain) UIView * searchBarBackgroundView;                               //@synthesize searchBarBackgroundView=_searchBarBackgroundView - In the implementation block
@property (nonatomic,readonly) id<SBIconListLayoutProvider> listLayoutProvider;              //@synthesize listLayoutProvider=_listLayoutProvider - In the implementation block
@property (nonatomic,readonly) UIView * searchBarTextFieldBackgroundView;                    //@synthesize searchBarTextFieldBackgroundView=_searchBarTextFieldBackgroundView - In the implementation block
-(unsigned long long)supportedInterfaceOrientations;
-(void)_setupSearchBar;
-(void)_setupTextField;
-(void)_setupTextFieldBackground;
-(void)_setupBarBackground;
-(id)initWithListLayoutProvider:(id)arg1 ;
-(void)updateSearchBarBackgroundForScrollDistance:(double)arg1 ;
-(UIView *)searchBarTextFieldBackgroundView;
-(UIView *)searchBarBackgroundView;
-(void)setSearchBarBackgroundView:(UIView *)arg1 ;
-(id<SBIconListLayoutProvider>)listLayoutProvider;
@end
