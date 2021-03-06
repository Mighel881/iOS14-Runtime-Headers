/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:46:38 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PassKitCore-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PKDynamicLayerEmitterConfiguration, PKDynamicLayerTransactionEffectConfiguration;

@interface PKDynamicLayerConfiguration : NSObject <NSSecureCoding, NSCopying> {

	BOOL _supported;
	BOOL _parallaxEnabled;
	unsigned long long _version;
	PKDynamicLayerEmitterConfiguration* _backgroundParallaxEmitter;
	PKDynamicLayerEmitterConfiguration* _neutralEmitter;
	PKDynamicLayerEmitterConfiguration* _foregroundParallaxEmitter;
	PKDynamicLayerEmitterConfiguration* _staticOverlayEmitter;
	PKDynamicLayerTransactionEffectConfiguration* _transactionEffect;

}

@property (assign,getter=isSupported,nonatomic) BOOL supported;                                             //@synthesize supported=_supported - In the implementation block
@property (assign,nonatomic) unsigned long long version;                                                    //@synthesize version=_version - In the implementation block
@property (assign,nonatomic) BOOL parallaxEnabled;                                                          //@synthesize parallaxEnabled=_parallaxEnabled - In the implementation block
@property (nonatomic,retain) PKDynamicLayerEmitterConfiguration * backgroundParallaxEmitter;                //@synthesize backgroundParallaxEmitter=_backgroundParallaxEmitter - In the implementation block
@property (nonatomic,retain) PKDynamicLayerEmitterConfiguration * neutralEmitter;                           //@synthesize neutralEmitter=_neutralEmitter - In the implementation block
@property (nonatomic,retain) PKDynamicLayerEmitterConfiguration * foregroundParallaxEmitter;                //@synthesize foregroundParallaxEmitter=_foregroundParallaxEmitter - In the implementation block
@property (nonatomic,retain) PKDynamicLayerEmitterConfiguration * staticOverlayEmitter;                     //@synthesize staticOverlayEmitter=_staticOverlayEmitter - In the implementation block
@property (nonatomic,retain) PKDynamicLayerTransactionEffectConfiguration * transactionEffect;              //@synthesize transactionEffect=_transactionEffect - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setParallaxEnabled:(BOOL)arg1 ;
-(void)setSupported:(BOOL)arg1 ;
-(BOOL)parallaxEnabled;
-(BOOL)isSupported;
-(unsigned long long)version;
-(id)copyWithZone:(NSZone*)arg1 ;
-(PKDynamicLayerEmitterConfiguration *)neutralEmitter;
-(void)setNeutralEmitter:(PKDynamicLayerEmitterConfiguration *)arg1 ;
-(void)setTransactionEffect:(PKDynamicLayerTransactionEffectConfiguration *)arg1 ;
-(void)setBackgroundParallaxEmitter:(PKDynamicLayerEmitterConfiguration *)arg1 ;
-(void)setForegroundParallaxEmitter:(PKDynamicLayerEmitterConfiguration *)arg1 ;
-(void)setStaticOverlayEmitter:(PKDynamicLayerEmitterConfiguration *)arg1 ;
-(PKDynamicLayerEmitterConfiguration *)backgroundParallaxEmitter;
-(PKDynamicLayerEmitterConfiguration *)foregroundParallaxEmitter;
-(PKDynamicLayerEmitterConfiguration *)staticOverlayEmitter;
-(PKDynamicLayerTransactionEffectConfiguration *)transactionEffect;
-(void)setVersion:(unsigned long long)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
@end

