/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:36:21 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AXMediaUtilities/AXMDataRegressionModel.h>

@interface AXMDataRegressionModelLogarithmic : AXMDataRegressionModel
-(/*^block*/id)modelFunction;
-(int)modelParameterCount;
-(void)getInitialParams:(double*)arg1 ;
-(id)partialDerivatives;
-(id)modelFunctionStringForParameters:(double*)arg1 significantFigures:(int)arg2 ;
-(id)modelDescription;
@end
