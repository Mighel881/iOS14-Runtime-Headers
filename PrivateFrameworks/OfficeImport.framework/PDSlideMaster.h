/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:46:13 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/PDSlideBase.h>

@class NSMutableArray, OADTheme, OADColorMap, OADTextListStyle, PDPresentation;

@interface PDSlideMaster : PDSlideBase {

	NSMutableArray* mSlideLayouts;
	OADTheme* mTheme;
	OADColorMap* mColorMap;
	OADTextListStyle* mTitleTextStyle;
	OADTextListStyle* mBodyTextStyle;
	OADTextListStyle* mOtherTextStyle;
	BOOL mHeaderPlaceholderIsVisible;
	BOOL mFooterPlaceholderIsVisible;
	BOOL mSlideNumberPlaceholderIsVisible;
	BOOL mDateTimePlaceholderIsVisible;
	PDPresentation* mPresentation;

}

@property (nonatomic,__weak,readonly) PDPresentation * presentation; 
@property (nonatomic,retain) NSMutableArray * slideLayouts; 
@property (assign,nonatomic) BOOL headerPlaceholderIsVisible; 
@property (assign,nonatomic) BOOL footerPlaceholderIsVisible; 
@property (assign,nonatomic) BOOL slideNumberPlaceholderIsVisible; 
@property (assign,nonatomic) BOOL dateTimePlaceholderIsVisible; 
-(id)colorMap;
-(PDPresentation *)presentation;
-(id)theme;
-(id)titleTextStyle;
-(id)description;
-(id)colorScheme;
-(void)setTitleTextStyle:(id)arg1 ;
-(id)styleMatrix;
-(id)defaultTheme;
-(id)fontScheme;
-(id)parentSlideBase;
-(void)removeUnnecessaryOverrides;
-(id)drawingTheme;
-(void)setUpPropertyHierarchyPreservingEffectiveValues;
-(void)doneWithContent;
-(id)placeholderWithType:(int)arg1 placeholderTypeIndex:(int)arg2 overrideIndex:(BOOL)arg3 ;
-(void)setHeaderPlaceholderIsVisible:(BOOL)arg1 ;
-(void)setFooterPlaceholderIsVisible:(BOOL)arg1 ;
-(void)setDateTimePlaceholderIsVisible:(BOOL)arg1 ;
-(void)setSlideNumberPlaceholderIsVisible:(BOOL)arg1 ;
-(unsigned long long)slideLayoutCount;
-(id)slideLayoutAtIndex:(unsigned long long)arg1 ;
-(id)addSlideLayout;
-(id)initWithPresentation:(id)arg1 ;
-(id)slideLayoutOfType:(int)arg1 ;
-(id)parentTextBodyPropertiesForPlaceholderType:(int)arg1 placeholderTypeIndex:(int)arg2 overrideIndex:(BOOL)arg3 ;
-(id)parentTextStyleForPlaceholderType:(int)arg1 placeholderTypeIndex:(int)arg2 defaultTextListStyle:(id)arg3 overrideIndex:(BOOL)arg4 ;
-(id)parentTextStyleForTables;
-(id)parentShapePropertiesForPlaceholderType:(int)arg1 placeholderTypeIndex:(int)arg2 overrideIndex:(BOOL)arg3 ;
-(id)masterGraphicForPlaceholderType:(int)arg1 placeholderTypeIndex:(int)arg2 overrideIndex:(BOOL)arg3 ;
-(id)defaultTextListStyle;
-(void)addSlideLayout:(id)arg1 ;
-(id)bodyTextStyle;
-(id)otherTextStyle;
-(void)setBodyTextStyle:(id)arg1 ;
-(void)setOtherTextStyle:(id)arg1 ;
-(NSMutableArray *)slideLayouts;
-(void)setSlideLayouts:(NSMutableArray *)arg1 ;
-(BOOL)headerPlaceholderIsVisible;
-(BOOL)footerPlaceholderIsVisible;
-(BOOL)slideNumberPlaceholderIsVisible;
-(BOOL)dateTimePlaceholderIsVisible;
@end

