/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:41:17 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CameraEffectsKit/CameraEffectsKit-Structs.h>
#import <CameraEffectsKit/JFXEffect.h>

@class UIColor;

@interface JFXTextEffect : JFXEffect

@property (nonatomic,readonly) UIColor * customTextEditTintColor; 
@property (nonatomic,readonly) BOOL textBakedIn; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)strings;
-(unsigned long long)maxCharacters;
-(void)enableDynamicLineSpacingForDiacritics:(BOOL)arg1 ;
-(void)setupLocalizedText;
-(BOOL)isAppearanceEqual:(id)arg1 forPurpose:(unsigned long long)arg2 ;
-(id)localizedDefaultText;
-(id)localizedDefaultFontName;
-(id)editUIProperties;
-(id)defaultAttributedString:(unsigned long long)arg1 ;
-(void)setString:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(id)textEffectContentDataSource;
-(void)setFont:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)setFontSize:(float)arg1 atIndex:(unsigned long long)arg2 ;
-(id)textFramesAtTime:(SCD_Struct_JF3)arg1 forcePosterFrame:(BOOL)arg2 includeDropShadow:(BOOL)arg3 relativeTo:(CGRect)arg4 basisOrigin:(int)arg5 ;
-(id)textBoundsAtTime:(SCD_Struct_JF3)arg1 forcePosterFrame:(BOOL)arg2 includeDropShadow:(BOOL)arg3 includeMasks:(BOOL)arg4 ;
-(PVCGPointQuad)textCornersAtIndex:(unsigned long long)arg1 time:(SCD_Struct_JF3)arg2 forcePosterFrame:(BOOL)arg3 includeDropShadow:(BOOL)arg4 scale:(CGPoint)arg5 relativeTo:(CGRect)arg6 basisOrigin:(int)arg7 ;
-(void)beginTextEditing;
-(void)endTextEditing;
-(void)setFontScale:(float)arg1 atIndex:(unsigned long long)arg2 ;
-(id)defaultTypingAttributes:(unsigned long long)arg1 ;
-(id)textFrameAtIndex:(unsigned long long)arg1 time:(SCD_Struct_JF3)arg2 forcePosterFrame:(BOOL)arg3 includeDropShadow:(BOOL)arg4 relativeTo:(CGRect)arg5 basisOrigin:(int)arg6 ;
-(BOOL)textBounds:(CGRect*)arg1 atIndex:(unsigned long long)arg2 time:(SCD_Struct_JF3)arg3 forcePosterFrame:(BOOL)arg4 includeDropShadow:(BOOL)arg5 includeMasks:(BOOL)arg6 ;
-(long long)textHitTest:(CGPoint)arg1 time:(SCD_Struct_JF3)arg2 relativeTo:(CGRect)arg3 basisOrigin:(int)arg4 ;
-(BOOL)textBakedIn;
-(id)customTextEditColor;
-(UIColor *)customTextEditTintColor;
-(unsigned long long)indexOfTextObjectUsedForEditViewTransform;
@end

