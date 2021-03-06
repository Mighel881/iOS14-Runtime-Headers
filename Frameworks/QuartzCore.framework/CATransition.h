/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:47:29 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <QuartzCore/QuartzCore-Structs.h>
#import <QuartzCore/CAAnimation.h>

@class NSDictionary, NSString;

@interface CATransition : CAAnimation

@property (copy) NSDictionary * options; 
@property (assign) unsigned transitionFlags; 
@property (copy) NSString * type; 
@property (copy) NSString * subtype; 
@property (assign) float startProgress; 
@property (assign) float endProgress; 
-(void)setSubtype:(NSString *)arg1 ;
-(void)setEndProgress:(float)arg1 ;
-(void)setStartProgress:(float)arg1 ;
-(float)endProgress;
-(unsigned)transitionFlags;
-(float)startProgress;
-(id)filter;
-(Animation*)_copyRenderAnimationForLayer:(id)arg1 ;
-(BOOL)_setCARenderAnimation:(Animation*)arg1 layer:(id)arg2 ;
-(unsigned)_propertyFlagsForLayer:(id)arg1 ;
-(void)setOptions:(NSDictionary *)arg1 ;
-(NSString *)subtype;
-(NSDictionary *)options;
-(void)setTransitionFlags:(unsigned)arg1 ;
-(NSString *)type;
-(void)setType:(NSString *)arg1 ;
-(void)setFilter:(id)arg1 ;
@end

