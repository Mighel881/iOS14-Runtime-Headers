/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:40:44 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AVFCapture.framework/AVFCapture
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AVFCapture/AVFCapture-Structs.h>
@class NSData, NSIndexSet;

@interface AVApplePortraitMetadataInternal : NSObject {

	int version;
	float apertureFocalRatio;
	float minimumApertureFocalRatio;
	float maximumApertureFocalRatio;
	float portraitLightingEffectStrength;
	float luminanceNoiseAmplitude;
	int faceOrientation;
	NSData* faceObservationsData;
	NSIndexSet* indexesOfShallowDepthOfFieldObservations;
	CGRect focusRectangle;

}

@property (assign,nonatomic) int version; 
@property (assign,nonatomic) float apertureFocalRatio; 
@property (assign,nonatomic) float minimumApertureFocalRatio; 
@property (assign,nonatomic) float maximumApertureFocalRatio; 
@property (assign,nonatomic) float portraitLightingEffectStrength; 
@property (assign,nonatomic) float luminanceNoiseAmplitude; 
@property (assign,nonatomic) int faceOrientation; 
@property (nonatomic,retain) NSData * faceObservationsData; 
@property (nonatomic,retain) NSIndexSet * indexesOfShallowDepthOfFieldObservations; 
@property (assign,nonatomic) CGRect focusRectangle; 
-(int)version;
-(void)setPortraitLightingEffectStrength:(float)arg1 ;
-(void)setVersion:(int)arg1 ;
-(void)dealloc;
-(id)init;
-(float)portraitLightingEffectStrength;
-(int)faceOrientation;
-(void)setFaceOrientation:(int)arg1 ;
-(CGRect)focusRectangle;
-(float)apertureFocalRatio;
-(void)setApertureFocalRatio:(float)arg1 ;
-(float)minimumApertureFocalRatio;
-(void)setMinimumApertureFocalRatio:(float)arg1 ;
-(float)maximumApertureFocalRatio;
-(void)setMaximumApertureFocalRatio:(float)arg1 ;
-(float)luminanceNoiseAmplitude;
-(void)setLuminanceNoiseAmplitude:(float)arg1 ;
-(NSData *)faceObservationsData;
-(void)setFaceObservationsData:(NSData *)arg1 ;
-(NSIndexSet *)indexesOfShallowDepthOfFieldObservations;
-(void)setIndexesOfShallowDepthOfFieldObservations:(NSIndexSet *)arg1 ;
-(void)setFocusRectangle:(CGRect)arg1 ;
@end

