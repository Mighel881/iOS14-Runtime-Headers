/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:47:26 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <UIKitCore/UIButton.h>
#import <libobjc.A.dylib/_MKPlaceActionControlledButton.h>

@class NSLayoutConstraint, MKVibrantView, _MKPlaceActionButtonController, NSString;

@interface MKPlaceHeaderButton : UIButton <_MKPlaceActionControlledButton> {

	unsigned long long _buttonType;
	BOOL _primary;
	NSLayoutConstraint* _heightConstraint;
	MKVibrantView* _vibrantView;
	BOOL _buttonHighlighted;
	_MKPlaceActionButtonController* _buttonController;

}

@property (assign,nonatomic,__weak) _MKPlaceActionButtonController * buttonController;              //@synthesize buttonController=_buttonController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(CGRect)titleRectForContentRect:(CGRect)arg1 ;
-(id)initWithPrimaryType:(unsigned long long)arg1 ;
-(void)_setVibrantView;
-(void)applyButtonDefaultConfiguration;
-(void)_updateStylePrimaryButton;
-(void)_updateStyleNonPrimaryButton;
-(BOOL)_isTintColorWhite;
-(id)_primaryButtonTextColor;
-(void)updateButtonWithHighlighted:(BOOL)arg1 ;
-(id)_primaryButtonColor;
-(void)infoCardThemeChanged;
-(id)init;
-(void)setHighlighted:(BOOL)arg1 ;
-(_MKPlaceActionButtonController *)buttonController;
-(void)setPrimaryTitle:(id)arg1 subtitle:(id)arg2 ;
-(void)buttonSelected:(id)arg1 ;
-(void)setPrimaryTitle:(id)arg1 ;
-(void)setButtonController:(_MKPlaceActionButtonController *)arg1 ;
-(void)_contentSizeDidChange;
-(void)placeActionButtonControllerTextDidChange:(id)arg1 ;
@end
