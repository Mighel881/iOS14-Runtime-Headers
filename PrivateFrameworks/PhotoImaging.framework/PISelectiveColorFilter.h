/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:37:14 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreImage/CIFilter.h>

@class CIImage, NSArray;

@interface PISelectiveColorFilter : CIFilter {

	CIImage* _inputImage;
	NSArray* _inputCorrections;

}

@property (nonatomic,retain) CIImage * inputImage;                    //@synthesize inputImage=_inputImage - In the implementation block
@property (nonatomic,retain) NSArray * inputCorrections;              //@synthesize inputCorrections=_inputCorrections - In the implementation block
+(id)convertFromIPT:(id)arg1 ;
+(id)selectiveColorKernels;
+(id)convertToIPT:(id)arg1 ;
+(double)iptHueAngleFromRed:(double)arg1 green:(double)arg2 blue:(double)arg3 ;
+(void)iptFromLinearInto:(float*)arg1 fromRed:(float)arg2 green:(float)arg3 blue:(float)arg4 ;
+(float)hueAngleFrom:(const float*)arg1 ;
-(void)setInputImage:(CIImage *)arg1 ;
-(CIImage *)inputImage;
-(id)outputImage;
-(id)hueSatLumTable;
-(NSArray *)inputCorrections;
-(void)setInputCorrections:(NSArray *)arg1 ;
@end
