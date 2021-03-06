/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:43:56 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSData, NSDictionary;

@interface PHAPrivateFederatedLearningRunnerResponse : NSObject {

	NSData* _dataPackage;
	NSDictionary* _trainingMetrics;

}

@property (nonatomic,retain) NSData * dataPackage;                        //@synthesize dataPackage=_dataPackage - In the implementation block
@property (nonatomic,retain) NSDictionary * trainingMetrics;              //@synthesize trainingMetrics=_trainingMetrics - In the implementation block
-(NSDictionary *)trainingMetrics;
-(void)setTrainingMetrics:(NSDictionary *)arg1 ;
-(id)initWithDataPackage:(id)arg1 layersToTrain:(id)arg2 trainingLossesPerEpoch:(id)arg3 trainingAccuraciesPerEpoch:(id)arg4 ;
-(NSData *)dataPackage;
-(void)setDataPackage:(NSData *)arg1 ;
@end

