/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:36:32 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PhotosPlayer.framework/PhotosPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <PhotosPlayer/PhotosPlayer-Structs.h>
@class ISAVPlayer;

@interface ISRateCurveRequest : NSObject {

	double _startTime;
	SCD_Struct_IS1 _startVideoTime;
	BOOL _cancelled;
	id _boundaryObserver;
	double _stepInterval;
	long long _stepIndex;
	float _initialRate;
	double _duration;
	ISAVPlayer* _avPlayer;
	/*^block*/id _progressHandler;
	SCD_Struct_IS1 _targetTime;

}

@property (nonatomic,readonly) SCD_Struct_IS1 targetTime;                 //@synthesize targetTime=_targetTime - In the implementation block
@property (nonatomic,readonly) double duration;                           //@synthesize duration=_duration - In the implementation block
@property (nonatomic,readonly) float initialRate;                         //@synthesize initialRate=_initialRate - In the implementation block
@property (nonatomic,__weak,readonly) ISAVPlayer * avPlayer;              //@synthesize avPlayer=_avPlayer - In the implementation block
@property (nonatomic,copy,readonly) id progressHandler;                   //@synthesize progressHandler=_progressHandler - In the implementation block
-(void)cancel;
-(double)duration;
-(void)dealloc;
-(id)progressHandler;
-(void)start;
-(ISAVPlayer *)avPlayer;
-(SCD_Struct_IS1)targetTime;
-(id)initWithTargetTime:(SCD_Struct_IS1)arg1 duration:(double)arg2 initialRate:(float)arg3 avPlayer:(id)arg4 progressHandler:(/*^block*/id)arg5 ;
-(void)_stepDownRate;
-(void)_didReachTargetTime;
-(void)_stopObservingPlayer;
-(float)initialRate;
@end

