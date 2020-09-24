/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:47:29 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <QuartzCore/QuartzCore-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class TSDBezierPath;

@interface CAMediaTimingFunction : NSObject <NSSecureCoding> {

	CAMediaTimingFunctionPrivate* _priv;

}

@property (nonatomic,readonly) TSDBezierPath * bezierPath; 
+(id)hu_functionWithAnimationCurve:(long long)arg1 ;
+(id)sigmoidFunction;
+(id)uiFunctionWithControlPoints:(const CGPoint*)arg1 ;
+(id)_kbTimingFunction;
+(BOOL)supportsSecureCoding;
+(void)CAMLParserEndElement:(id)arg1 content:(id)arg2 ;
+(id)functionWithControlPoints:(float)arg1 :(float)arg2 :(float)arg3 :(float)arg4 ;
+(id)functionWithName:(id)arg1 ;
-(double)TSD_valueAtPercent:(double)arg1 ;
-(double)solveForTime:(double)arg1 ;
-(TSDBezierPath *)bezierPath;
-(double)TSD_valueAtPercent:(double)arg1 ;
-(float)_solveForInput:(float)arg1 ;
-(Object*)CA_copyRenderValue;
-(void)dealloc;
-(id)initWithControlPoints:(float)arg1 :(float)arg2 :(float)arg3 :(float)arg4 ;
-(id)CAMLType;
-(id)initWithCoder:(id)arg1 ;
-(void)getControlPointAtIndex:(unsigned long long)arg1 values:(float)arg2 ;
-(unsigned long long)CA_copyNumericValue:(double)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)_getPoints:(double*)arg1 ;
-(id)description;
-(void)encodeWithCAMLWriter:(id)arg1 ;
@end
