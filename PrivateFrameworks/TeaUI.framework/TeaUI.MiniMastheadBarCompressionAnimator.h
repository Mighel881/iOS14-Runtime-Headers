/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:36:44 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/TeaUI.framework/TeaUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/TUBarCompressionAnimating.h>

@interface TeaUI.MiniMastheadBarCompressionAnimator : NSObject <TUBarCompressionAnimating> {

	 topOffset;
	 navigationBar;
	 maskView;

}

@property (assign,nonatomic) double topOffset; 
@property (readonly,nonatomic) BOOL shouldCompressAtTop; 
@property (readonly,nonatomic) BOOL shouldCloseGapOnScroll; 
-(void)updateWithPercentage:(double)arg1 ;
-(void)scrollViewIsAtTop:(BOOL)arg1 ;
-(double)maximumBarHeightForTraitCollection:(id)arg1 ;
-(BOOL)animationShouldBeginForScrollView:(id)arg1 currentlyFullyCompressed:(BOOL)arg2 ;
-(double)minimumBarHeightForTraitCollection:(id)arg1 ;
-(void)reloadWithTraitCollection:(id)arg1 ;
-(BOOL)shouldCompressAtTop;
-(double)topOffset;
-(void)setTopOffset:(double)arg1 ;
-(BOOL)shouldCloseGapOnScroll;
-(id)init;
@end

