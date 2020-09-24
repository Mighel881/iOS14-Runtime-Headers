/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:41:43 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol GQHContext;
#import <iWorkImport/iWorkImport-Structs.h>
@class GQHXML, GQHTableState, GQSDocument;

@interface GQHState : NSObject {

	GQHXML* mHtmlDoc;
	CGSize mScale;
	CFStringRef mStyleData;
	GQHTableState* mTableState;
	GQSDocument* mProcessorState;
	CFDictionaryRef mStyleIndexes;
	CFDictionaryRef mStyleNameMap;
	CFArrayRef mImplicitStyles;
	int mColoredBackgroundLayerCount;
	int mMultiColumnedDepth;
	CFArrayRef mGraphicPropertiesStack;
	int mParagraphCount;
	int mParagraphIndex;
	int mCachedCellStyleIndex;
	CFDictionaryRef mCachedTableStyles;
	int mCachedTextStyleIndex;
	CFDictionaryRef mCachedTextStyles;
	int mInlineStyleIndex;
	CFDictionaryRef mInlineStyles;
	CFDictionaryRef mColorStrings;
	id<GQHContext> mShapeContext;
	int mOutlineLevel;
	int mOutlineStyleType;
	int mShapeIDCounter;
	unsigned mTextScale;

}
-(int)indexForStyle:(const char*)arg1 ;
-(id)initWithState:(id)arg1 needIndexFile:(BOOL)arg2 documentSize:(CGSize)arg3 ;
-(id)initWithState:(id)arg1 ;
-(id)initWithState:(id)arg1 documentSize:(CGSize)arg2 ;
-(void)dealloc;
-(id)htmlDoc;
-(void)setScale:(CGSize)arg1 ;
-(CGSize)scale;
-(void)addStyle:(CFStringRef)arg1 className:(CFStringRef)arg2 srcStyle:(id)arg3 ;
-(CFStringRef)makeInlineStyle:(CFStringRef)arg1 ;
-(CFStringRef)makeInlineStyle:(CFStringRef)arg1 inDocument:(id)arg2 ;
-(void)addCachedStyle:(CFStringRef)arg1 ;
-(CFStringRef)className:(id)arg1 ;
-(id)tableState;
-(id)processorState;
-(BOOL)finishMainHtml;
-(void)addedDrawableWithBounds:(CGRect)arg1 ;
-(CFStringRef)createStyleName:(id)arg1 type:(const char*)arg2 ;
-(BOOL)drawablesNeedCssZOrdering;
-(CFStringRef)cssZOrderClassForDrawable:(id)arg1 ;
-(CFStringRef)cssZOrderClassForDrawableUid:(const char*)arg1 ;
-(void)pushImplicitStyle:(id)arg1 ;
-(id)implicitStyle;
-(void)popImplicitStyle;
-(void)setColoredBackground:(BOOL)arg1 ;
-(BOOL)coloredBackground;
-(void)setMultiColumned:(BOOL)arg1 ;
-(BOOL)multiColumned;
-(void)enterGraphicObject;
-(void)leaveGraphicObject;
-(void)setParagraphCount:(int)arg1 ;
-(int)paragraphCount;
-(void)setParagraphIndex:(int)arg1 ;
-(int)paragraphIndex;
-(CFStringRef)cachedClassStringForCellStyle:(id)arg1 fillStyle:(id)arg2 cellClass:(Class)arg3 vectorStyles:(id*)arg4 groupLevel:(unsigned short)arg5 hasFormula:(BOOL)arg6 ;
-(CFStringRef)addCacheForCellStyle:(id)arg1 fillStyle:(id)arg2 cellClass:(Class)arg3 vectorStyles:(id*)arg4 groupLevel:(unsigned short)arg5 hasFormula:(BOOL)arg6 baseClassString:(CFStringRef)arg7 cssCachedStyle:(id)arg8 ;
-(CFStringRef)cachedClassStringForTextStyle:(id)arg1 implicitStyle:(id)arg2 isColoredBackground:(BOOL)arg3 outlineLevel:(int)arg4 outlineType:(int)arg5 isSpan:(BOOL)arg6 ;
-(CFStringRef)addCachedClassStringForTextStyle:(id)arg1 implicitStyle:(id)arg2 isColoredBackground:(BOOL)arg3 outlineLevel:(int)arg4 outlineType:(int)arg5 isSpan:(BOOL)arg6 baseClassString:(CFStringRef)arg7 cssCachedStyle:(id)arg8 ;
-(CFStringRef)getColorString:(id)arg1 ;
-(BOOL)shouldMapLinkWithUrl:(CFStringRef)arg1 ;
-(id)shapeContext;
-(BOOL)useOutline;
-(int)outlineLevel;
-(void)setOutlineLevel:(int)arg1 ;
-(int)outlineStyleType;
-(void)setOutlineStyleType:(int)arg1 ;
-(CFStringRef)createUniqueShapeId:(const char*)arg1 ;
-(unsigned)textScale;
-(void)setTextScale:(unsigned)arg1 ;
-(void)invalidateTextScale;
-(BOOL)needAbsolutelyPositionedTables;
-(BOOL)allowInlineWrap;
@end
