/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:40:19 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServicesUI.framework/AppleMediaServicesUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSLock, NSObject, NSDate;

@interface AMSUIWebFlowTimeout : NSObject {

	/*^block*/id _enqueuedBlock;
	/*^block*/id _block;
	NSLock* _lock;
	NSObject*<OS_dispatch_queue> _queue;
	NSDate* _startTime;
	double _timeout;
	double _timeRemaining;

}

@property (nonatomic,copy) id enqueuedBlock;                                  //@synthesize enqueuedBlock=_enqueuedBlock - In the implementation block
@property (nonatomic,copy) id block;                                          //@synthesize block=_block - In the implementation block
@property (nonatomic,retain) NSLock * lock;                                   //@synthesize lock=_lock - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) NSDate * startTime;                              //@synthesize startTime=_startTime - In the implementation block
@property (assign,nonatomic) double timeout;                                  //@synthesize timeout=_timeout - In the implementation block
@property (assign,nonatomic) double timeRemaining;                            //@synthesize timeRemaining=_timeRemaining - In the implementation block
+(id)timeoutWithTimeout:(double)arg1 queue:(id)arg2 block:(/*^block*/id)arg3 ;
-(void)_lock:(/*^block*/id)arg1 ;
-(void)setLock:(NSLock *)arg1 ;
-(double)pause;
-(NSLock *)lock;
-(double)timeout;
-(void)reset;
-(NSDate *)startTime;
-(void)setStartTime:(NSDate *)arg1 ;
-(void)setTimeout:(double)arg1 ;
-(id)block;
-(void)start;
-(void)setBlock:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setTimeRemaining:(double)arg1 ;
-(double)timeRemaining;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)initWithTimeout:(double)arg1 queue:(id)arg2 block:(/*^block*/id)arg3 ;
-(id)enqueuedBlock;
-(void)setEnqueuedBlock:(id)arg1 ;
@end
