/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:45:33 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UICellAccessory.h>

@class NSString, UIFont;

@interface UICellAccessoryLabel : UICellAccessory {

	BOOL _adjustsFontForContentSizeCategory;
	NSString* _text;
	UIFont* _font;

}

@property (nonatomic,copy,readonly) NSString * text;                              //@synthesize text=_text - In the implementation block
@property (nonatomic,retain) UIFont * font;                                       //@synthesize font=_font - In the implementation block
@property (assign,nonatomic) BOOL adjustsFontForContentSizeCategory;              //@synthesize adjustsFontForContentSizeCategory=_adjustsFontForContentSizeCategory - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)text;
-(BOOL)adjustsFontForContentSizeCategory;
-(long long)_systemType;
-(void)setAdjustsFontForContentSizeCategory:(BOOL)arg1 ;
-(UIFont *)font;
-(id)_identifier;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(long long)_systemTypePlacementForHeader:(BOOL)arg1 ;
-(void)setFont:(UIFont *)arg1 ;
-(id)initWithText:(id)arg1 ;
@end

