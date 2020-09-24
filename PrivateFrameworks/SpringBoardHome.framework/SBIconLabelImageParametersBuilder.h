/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:37:36 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SBIconListLayoutProvider;
#import <SpringBoardHome/SpringBoardHome-Structs.h>
@class UIFont, SBIcon, SBIconView, NSString, _UILegibilitySettings, UIColor;

@interface SBIconLabelImageParametersBuilder : NSObject {

	UIFont* _font;
	BOOL _hasSetTextInsets;
	BOOL _accessibilityReduceTransparencyEnabled;
	SBIcon* _icon;
	SBIconView* _iconView;
	Class _iconViewClass;
	NSString* _iconLocation;
	id<SBIconListLayoutProvider> _listLayoutProvider;
	_UILegibilitySettings* _legibilitySettings;
	NSString* _contentSizeCategory;
	UIColor* _focusHighlightColor;
	double _scale;
	long long _labelAccessoryType;
	UIColor* _textColor;
	NSString* _overrideText;
	NSString* _text;
	UIEdgeInsets _textInsets;

}

@property (nonatomic,copy) NSString * text;                                                                                            //@synthesize text=_text - In the implementation block
@property (nonatomic,readonly) SBIcon * icon;                                                                                          //@synthesize icon=_icon - In the implementation block
@property (nonatomic,retain) SBIconView * iconView;                                                                                    //@synthesize iconView=_iconView - In the implementation block
@property (nonatomic,retain) Class iconViewClass;                                                                                      //@synthesize iconViewClass=_iconViewClass - In the implementation block
@property (nonatomic,readonly) NSString * iconLocation;                                                                                //@synthesize iconLocation=_iconLocation - In the implementation block
@property (nonatomic,retain) id<SBIconListLayoutProvider> listLayoutProvider;                                                          //@synthesize listLayoutProvider=_listLayoutProvider - In the implementation block
@property (nonatomic,readonly) CGSize iconImageSize; 
@property (nonatomic,retain) _UILegibilitySettings * legibilitySettings;                                                               //@synthesize legibilitySettings=_legibilitySettings - In the implementation block
@property (assign,getter=isAccessibilityReduceTransparencyEnabled,nonatomic) BOOL accessibilityReduceTransparencyEnabled;              //@synthesize accessibilityReduceTransparencyEnabled=_accessibilityReduceTransparencyEnabled - In the implementation block
@property (nonatomic,copy) NSString * contentSizeCategory;                                                                             //@synthesize contentSizeCategory=_contentSizeCategory - In the implementation block
@property (nonatomic,retain) UIColor * focusHighlightColor;                                                                            //@synthesize focusHighlightColor=_focusHighlightColor - In the implementation block
@property (assign,nonatomic) double scale;                                                                                             //@synthesize scale=_scale - In the implementation block
@property (assign,nonatomic) long long labelAccessoryType;                                                                             //@synthesize labelAccessoryType=_labelAccessoryType - In the implementation block
@property (nonatomic,retain) UIFont * font;                                                                                            //@synthesize font=_font - In the implementation block
@property (nonatomic,retain) UIColor * textColor;                                                                                      //@synthesize textColor=_textColor - In the implementation block
@property (assign,nonatomic) UIEdgeInsets textInsets;                                                                                  //@synthesize textInsets=_textInsets - In the implementation block
@property (nonatomic,retain) NSString * overrideText;                                                                                  //@synthesize overrideText=_overrideText - In the implementation block
+(long long)_fontSizeParameterForContentSizeCategory:(id)arg1 ;
+(double)_normalFontSizeForSizeParameter:(long long)arg1 ;
+(UIEdgeInsets)insetsForFont:(id)arg1 ;
+(id)defaultFontForContentSizeCategory:(id)arg1 languageInsets:(UIEdgeInsets*)arg2 ;
-(Class)iconViewClass;
-(CGSize)iconImageSize;
-(void)setLegibilitySettings:(_UILegibilitySettings *)arg1 ;
-(void)setListLayoutProvider:(id<SBIconListLayoutProvider>)arg1 ;
-(void)setTextColor:(UIColor *)arg1 ;
-(double)scale;
-(void)setIconView:(SBIconView *)arg1 ;
-(id)listLayout;
-(BOOL)_canTightenLabel;
-(SBIconView *)iconView;
-(void)setScale:(double)arg1 ;
-(BOOL)_hasValidInputs;
-(void)setOverrideText:(NSString *)arg1 ;
-(NSString *)text;
-(NSString *)overrideText;
-(BOOL)isAccessibilityReduceTransparencyEnabled;
-(void)setContentSizeCategory:(NSString *)arg1 ;
-(NSString *)iconLocation;
-(UIColor *)focusHighlightColor;
-(void)setTextInsets:(UIEdgeInsets)arg1 ;
-(SBIcon *)icon;
-(void)setText:(NSString *)arg1 ;
-(NSString *)contentSizeCategory;
-(UIFont *)font;
-(void)setIconViewClass:(Class)arg1 ;
-(long long)labelAccessoryType;
-(UIEdgeInsets)textInsets;
-(id)init;
-(BOOL)_canTruncateLabel;
-(UIColor *)textColor;
-(_UILegibilitySettings *)legibilitySettings;
-(void)setAccessibilityReduceTransparencyEnabled:(BOOL)arg1 ;
-(void)setFocusHighlightColor:(UIColor *)arg1 ;
-(void)setFont:(id)arg1 insets:(UIEdgeInsets)arg2 ;
-(void)setIcon:(id)arg1 forLocation:(id)arg2 ;
-(id)buildParameters;
-(id)_fontWithLanguageInsets:(UIEdgeInsets*)arg1 ;
-(id<SBIconListLayoutProvider>)listLayoutProvider;
-(CGSize)_maxSize;
-(void)setIcon:(SBIcon *)arg1 ;
-(void)setFont:(UIFont *)arg1 ;
-(void)setLabelAccessoryType:(long long)arg1 ;
@end
