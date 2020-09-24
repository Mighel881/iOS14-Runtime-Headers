/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:44:08 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBTransitionSwitcherModifier.h>

@class SBHomeScreenSwitcherModifier, SBAppLayout;

@interface SBCrossfadeDosidoSwitcherModifier : SBTransitionSwitcherModifier {

	SBHomeScreenSwitcherModifier* _homeScreenModifier;
	SBAppLayout* _fromAppLayout;
	SBAppLayout* _toAppLayout;

}
-(long long)homeScreenBackdropBlurType;
-(id)transitionWillBegin;
-(double)opacityForIndex:(unsigned long long)arg1 ;
-(BOOL)isWallpaperRequiredForSwitcher;
-(BOOL)isHomeScreenContentRequired;
-(BOOL)isSwitcherWindowVisible;
-(BOOL)isSwitcherWindowUserInteractionEnabled;
-(id)topMostLayoutElements;
-(CGRect)frameForIndex:(unsigned long long)arg1 ;
-(double)homeScreenScale;
-(long long)wallpaperStyle;
-(id)appLayoutsToCacheSnapshots;
-(id)animationAttributesForLayoutElement:(id)arg1 ;
-(double)homeScreenDimmingAlpha;
-(double)homeScreenBackdropBlurProgress;
-(unsigned long long)transactionCompletionOptions;
-(double)wallpaperScale;
-(double)homeScreenAlpha;
-(double)scaleForIndex:(unsigned long long)arg1 ;
-(id)visibleAppLayouts;
-(BOOL)_isToAppLayoutAtIndex:(unsigned long long)arg1 ;
-(id)_opacitySettings;
-(id)initWithTransitionID:(id)arg1 fromAppLayout:(id)arg2 toAppLayout:(id)arg3 ;
-(BOOL)_isFromAppLayoutAtIndex:(unsigned long long)arg1 ;
-(BOOL)_shouldEnsureHomeScreenVisible;
@end
