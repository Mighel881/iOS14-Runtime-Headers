/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:40:35 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NeutrinoCore/NeutrinoCore-Structs.h>
#import <NeutrinoCore/NUGeometryTransform.h>

@interface NUImageTransform : NUGeometryTransform
-(CGPoint)transformPoint:(CGPoint)arg1 ;
-(id)inverseTransform;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)transformByScaleX:(double)arg1 scaleY:(double)arg2 ;
-(id)transformByTranslateX:(double)arg1 translateY:(double)arg2 ;
-(id)transformByRotateZ:(double)arg1 ;
-(id)transformByRotateX:(double)arg1 y:(double)arg2 z:(double)arg3 ;
-(BOOL)isIdentityImageTransform;
-(CGRect)transformRect:(CGRect)arg1 ;
@end

