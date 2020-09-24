/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:40:40 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol TSDMTLDataBuffer;
#import <TSReading/TSReading-Structs.h>
@class TSDMetalContext, NSMutableArray, TSDMetalShader, TSDMetalRenderTarget, NSArray;

@interface TSDMetalTextureRenderer : NSObject {

	TSDMetalContext* _metalContext;
	CGSize _size;
	NSMutableArray* _drawValues;
	TSDMetalShader* _shader;
	TSDMetalShader* _blendingShader;
	id<TSDMTLDataBuffer> _encodingDataBuffer;
	TSDMetalRenderTarget* _renderTarget;
	BOOL _shouldDrawOffscreenPass;
	NSArray* _textures;
	NSArray* _dataBuffers;
	double _opacity;

}

@property (nonatomic,retain) NSArray * textures;                        //@synthesize textures=_textures - In the implementation block
@property (nonatomic,readonly) NSArray * dataBuffers;                   //@synthesize dataBuffers=_dataBuffers - In the implementation block
@property (assign,nonatomic) double opacity;                            //@synthesize opacity=_opacity - In the implementation block
@property (assign,nonatomic) BOOL shouldDrawOffscreenPass;              //@synthesize shouldDrawOffscreenPass=_shouldDrawOffscreenPass - In the implementation block
-(void)setTextures:(NSArray *)arg1 ;
-(NSArray *)textures;
-(double)opacity;
-(void)setOpacity:(double)arg1 ;
-(NSArray *)dataBuffers;
-(void)p_setupShader;
-(void)p_generateValuesAndBuffers;
-(void)p_setupOffscreenPass;
-(void)p_setupBlendingShader;
-(id)initWithTextures:(id)arg1 size:(CGSize)arg2 context:(id)arg3 ;
-(void)setShouldDrawOffscreenPass:(BOOL)arg1 ;
-(void)drawWithEncoder:(id)arg1 andContext:(id)arg2 atPercent:(double)arg3 ;
-(void)updateWithTexture:(id)arg1 opacity:(double)arg2 ;
-(void)updateWithTexture:(id)arg1 transform:(CATransform3D)arg2 opacity:(double)arg3 cullBackFace:(BOOL)arg4 ;
-(void)updateWithTexture:(id)arg1 blendPercent:(double)arg2 outgoingTexture:(id)arg3 incomingTexture:(id)arg4 ;
-(BOOL)shouldDrawOffscreenPass;
@end
