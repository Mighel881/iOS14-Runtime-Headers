/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:40:51 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/PGMeaningCriteria.h>

@class NSArray, NSString;

@interface PGMeaningPOICriteria : NSObject <PGMeaningCriteria> {

	BOOL _mustBeSpecial;
	NSArray* _positivePOIs;
	NSArray* _negativePOIs;
	unsigned long long _minimumNumberOfPOIs;
	double _maximumParkDiameter;

}

@property (nonatomic,retain) NSArray * positivePOIs;                              //@synthesize positivePOIs=_positivePOIs - In the implementation block
@property (nonatomic,retain) NSArray * negativePOIs;                              //@synthesize negativePOIs=_negativePOIs - In the implementation block
@property (assign,nonatomic) unsigned long long minimumNumberOfPOIs;              //@synthesize minimumNumberOfPOIs=_minimumNumberOfPOIs - In the implementation block
@property (assign,nonatomic) BOOL mustBeSpecial;                                  //@synthesize mustBeSpecial=_mustBeSpecial - In the implementation block
@property (assign,nonatomic) double maximumParkDiameter;                          //@synthesize maximumParkDiameter=_maximumParkDiameter - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)criteriaKey;
+(id)criteriaWithDictionary:(id)arg1 ;
-(BOOL)isValid;
-(NSString *)description;
-(BOOL)passesForMomentNode:(id)arg1 ;
-(void)setMaximumParkDiameter:(double)arg1 ;
-(void)setNegativePOIs:(NSArray *)arg1 ;
-(void)setMustBeSpecial:(BOOL)arg1 ;
-(void)setMinimumNumberOfPOIs:(unsigned long long)arg1 ;
-(void)setPositivePOIs:(NSArray *)arg1 ;
-(BOOL)_parkIsLargerThanMaximumDiameterForMomentNode:(id)arg1 ;
-(NSArray *)positivePOIs;
-(NSArray *)negativePOIs;
-(unsigned long long)minimumNumberOfPOIs;
-(BOOL)mustBeSpecial;
-(double)maximumParkDiameter;
@end
