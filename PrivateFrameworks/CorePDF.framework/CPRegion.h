/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:38:02 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CorePDF/CorePDF-Structs.h>
#import <CorePDF/CPChunk.h>

@interface CPRegion : CPChunk {

	BOOL isTextRegion;
	BOOL isImageRegion;
	BOOL isCompoundShape;
	CPRegion* nextRegion;
	int order;
	id link;

}
-(id)link;
-(void)setOrder:(int)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)order;
-(BOOL)isRotated;
-(BOOL)isTextRegion;
-(void)dealloc;
-(BOOL)isZone;
-(void)setLink:(id)arg1 ;
-(void)accept:(id)arg1 ;
-(BOOL)isIndivisible;
-(BOOL)isBoxRegion;
-(BOOL)isGraphicalRegion;
-(BOOL)isRowRegion;
-(void)setIsImageRegion:(BOOL)arg1 ;
-(BOOL)isImageRegion;
-(BOOL)isShapeRegion;
-(BOOL)isParagraphRegion;
-(BOOL)isListItemRegion;
-(void)setIsTextRegion:(BOOL)arg1 ;
-(BOOL)isTableCellRegion;
-(BOOL)isBodyZone;
-(BOOL)isCompoundShape;
-(void)setIsCompoundShape:(BOOL)arg1 ;
-(id)nextRegion;
-(void)setNextRegion:(id)arg1 ;
@end
