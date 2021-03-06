/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:37:35 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoardHome/SpringBoardHome-Structs.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>

@class NSMutableDictionary, CPMemoryPool, NSString;

@interface SBIconLabelImageCache : NSObject <BSDescriptionProviding> {

	NSMutableDictionary* _labelImages;
	double _scale;
	CPMemoryPool* _grayPool;
	CPMemoryPool* _colorPool;
	CPMemoryPool* _legibilityPool;
	CGSize _maxLabelSize;

}

@property (nonatomic,readonly) CPMemoryPool * grayPool;                              //@synthesize grayPool=_grayPool - In the implementation block
@property (nonatomic,readonly) CPMemoryPool * colorPool;                             //@synthesize colorPool=_colorPool - In the implementation block
@property (nonatomic,readonly) CPMemoryPool * legibilityPool;                        //@synthesize legibilityPool=_legibilityPool - In the implementation block
@property (nonatomic,readonly) CGSize maxLabelSize;                                  //@synthesize maxLabelSize=_maxLabelSize - In the implementation block
@property (nonatomic,readonly) double scale;                                         //@synthesize scale=_scale - In the implementation block
@property (nonatomic,readonly) unsigned long long numberOfCachedImages; 
@property (nonatomic,readonly) unsigned long long numberOfCacheHits; 
@property (nonatomic,readonly) unsigned long long numberOfCacheMisses; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(unsigned long long)numberOfCacheHits;
-(unsigned long long)numberOfCachedImages;
-(unsigned long long)numberOfCacheMisses;
-(double)scale;
-(id)initWithMaxLabelSize:(CGSize)arg1 scale:(double)arg2 ;
-(id)labelImageForParameters:(id)arg1 ;
-(CGSize)maxLabelSize;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(void)removeLabelImagesWithParametersPassingTest:(/*^block*/id)arg1 ;
-(void)removeLabelImageForParameters:(id)arg1 ;
-(id)cachedLabelImagesWithParametersPassingTest:(/*^block*/id)arg1 ;
-(CPMemoryPool *)grayPool;
-(CPMemoryPool *)legibilityPool;
-(void)cacheLabelImageForParameters:(id)arg1 ;
-(id)cachedLabelImageForParameters:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(CPMemoryPool *)colorPool;
-(id)succinctDescription;
-(id)generateAndStoreLabelImageForParameters:(id)arg1 ;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(NSString *)description;
@end

