/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:41:30 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CameraUI/CameraUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UIColor, UILabel, NSString;

@interface CAMModeSelectTitleView : UIView {

	UIColor* _textColor;
	UILabel* __titleLabel;

}

@property (nonatomic,readonly) UILabel * _titleLabel;              //@synthesize _titleLabel=__titleLabel - In the implementation block
@property (nonatomic,retain) UIColor * textColor;                  //@synthesize textColor=_textColor - In the implementation block
@property (nonatomic,retain) NSString * text; 
-(UILabel *)_titleLabel;
-(void)setTextColor:(UIColor *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(void)layoutSubviews;
-(UIColor *)textColor;
@end
