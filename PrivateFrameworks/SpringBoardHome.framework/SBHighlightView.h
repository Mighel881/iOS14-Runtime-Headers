/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:37:35 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoardHome/SpringBoardHome-Structs.h>
#import <UIKitCore/UIView.h>

@class UIImageView;

@interface SBHighlightView : UIView {

	UIImageView* _highlight;
	double _highlightAlpha;
	double _highlightHeight;

}

@property (nonatomic,readonly) double highlightAlpha;               //@synthesize highlightAlpha=_highlightAlpha - In the implementation block
@property (nonatomic,readonly) double highlightHeight;              //@synthesize highlightHeight=_highlightHeight - In the implementation block
+(id)_highlightImageWithHeight:(double)arg1 alpha:(double)arg2 ;
+(id)imageCache;
-(double)highlightAlpha;
-(void)layoutSubviews;
-(double)highlightHeight;
-(id)initWithFrame:(CGRect)arg1 highlightAlpha:(double)arg2 highlightHeight:(double)arg3 ;
@end

