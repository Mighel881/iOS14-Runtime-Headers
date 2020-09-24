/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:44:00 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKitCore/UIView.h>

@class NSArray;

@interface SBGradientView : UIView {

	NSArray* _colors;

}

@property (nonatomic,copy) NSArray * colors;                 //@synthesize colors=_colors - In the implementation block
@property (nonatomic,copy) NSArray * locations; 
@property (assign) CGPoint startPoint; 
@property (assign) CGPoint endPoint; 
+(Class)layerClass;
-(NSArray *)colors;
-(CGPoint)startPoint;
-(void)setStartPoint:(CGPoint)arg1 ;
-(CGPoint)endPoint;
-(void)setEndPoint:(CGPoint)arg1 ;
-(void)setLocations:(NSArray *)arg1 ;
-(NSArray *)locations;
-(void)setColors:(NSArray *)arg1 ;
-(id)color;
@end
