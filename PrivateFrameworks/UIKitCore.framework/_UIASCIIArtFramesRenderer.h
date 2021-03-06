/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:45:15 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <UIKitCore/UIKitCore-Structs.h>
@class NSArray;

@interface _UIASCIIArtFramesRenderer : NSObject {

	NSArray* _frames;
	double _outputLineWidth;

}

@property (nonatomic,readonly) NSArray * frames; 
@property (nonatomic,readonly) double outputLineWidth; 
-(id)visualDescription;
-(id)initWithFrames:(id)arg1 ;
-(NSArray *)frames;
-(id)renderedLines;
-(id)_normalizeFrames:(id)arg1 ;
-(double)outputLineWidth;
-(id)initWithFrames:(id)arg1 outputLineWidth:(double)arg2 ;
-(CGRect)scaledRectForRect:(CGRect)arg1 scaleSize:(CGSize)arg2 ;
-(id)description;
@end

