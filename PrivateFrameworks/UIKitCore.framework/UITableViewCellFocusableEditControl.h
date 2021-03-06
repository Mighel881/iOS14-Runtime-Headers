/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:45:40 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UITableViewCellEditControl.h>

@class _UIFloatingContentView;

@interface UITableViewCellFocusableEditControl : UITableViewCellEditControl {

	_UIFloatingContentView* _focusedFloatingContentView;

}
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(void)pressesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)pressesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)setSelected:(BOOL)arg1 ;
-(void)pressesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(BOOL)wantsMaskingWhileAnimatingDisabled;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)layoutSubviews;
-(id)_currentImage;
-(void)_ensureFocusedFloatingContentView;
-(BOOL)wantsImageShadow;
-(void)_updateFloatingViewForCurrentTraits;
-(BOOL)_shouldHandlePressEvent:(id)arg1 ;
-(void)setHighlighted:(BOOL)arg1 ;
@end

