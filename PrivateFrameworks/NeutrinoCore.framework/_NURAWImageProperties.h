/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:40:33 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NURAWImageProperties.h>

@protocol NURAWNoiseReductionProperties;
@class NSString, NSArray, CIFilter, _NURAWCameraSpaceProperties;

@interface _NURAWImageProperties : NSObject <NURAWImageProperties> {

	NSString* _decoderVersion;
	NSArray* _availableDecoderVersions;
	double _temperature;
	double _tint;
	CIFilter* _rawConvert;
	id<NURAWNoiseReductionProperties> _noiseReductionProperties;
	_NURAWCameraSpaceProperties* _rawCameraSpaceProperties;

}

@property (retain) NSString * decoderVersion;                                               //@synthesize decoderVersion=_decoderVersion - In the implementation block
@property (retain) NSArray * availableDecoderVersions;                                      //@synthesize availableDecoderVersions=_availableDecoderVersions - In the implementation block
@property (assign) double temperature;                                                      //@synthesize temperature=_temperature - In the implementation block
@property (assign) double tint;                                                             //@synthesize tint=_tint - In the implementation block
@property (retain) CIFilter * rawConvert;                                                   //@synthesize rawConvert=_rawConvert - In the implementation block
@property (retain) id<NURAWNoiseReductionProperties> noiseReductionProperties;              //@synthesize noiseReductionProperties=_noiseReductionProperties - In the implementation block
@property (retain) _NURAWCameraSpaceProperties * rawCameraSpaceProperties;                  //@synthesize rawCameraSpaceProperties=_rawCameraSpaceProperties - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSArray *)availableDecoderVersions;
-(void)setTemperature:(double)arg1 ;
-(double)temperature;
-(NSString *)description;
-(void)setTint:(double)arg1 ;
-(double)tint;
-(void)setRawCameraSpaceProperties:(_NURAWCameraSpaceProperties *)arg1 ;
-(void)setNoiseReductionProperties:(id<NURAWNoiseReductionProperties>)arg1 ;
-(void)setAvailableDecoderVersions:(NSArray *)arg1 ;
-(void)setDecoderVersion:(NSString *)arg1 ;
-(id)inputNeutralXYFromRGB:(const double*)arg1 ;
-(NSString *)decoderVersion;
-(id<NURAWNoiseReductionProperties>)noiseReductionProperties;
-(CIFilter *)rawConvert;
-(void)setRawConvert:(CIFilter *)arg1 ;
-(_NURAWCameraSpaceProperties *)rawCameraSpaceProperties;
@end

