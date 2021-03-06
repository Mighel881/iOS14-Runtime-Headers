/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:36:44 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSError;


@protocol SVVideoLoadingStateObserving <NSObject>
@property (nonatomic,readonly) unsigned long long state; 
@property (setter=onStart:,nonatomic,copy) id startBlock; 
@property (setter=onFinished:,nonatomic,copy) id finishedBlock; 
@property (setter=onFailed:,nonatomic,copy) id failedBlock; 
@property (nonatomic,copy,readonly) NSError * error; 
@required
-(id)failedBlock;
-(NSError *)error;
-(id)finishedBlock;
-(unsigned long long)state;
-(id)startBlock;
-(void)onStart:(/*^block*/id)arg1;
-(void)onFinished:(/*^block*/id)arg1;
-(void)onFailed:(/*^block*/id)arg1;

@end

