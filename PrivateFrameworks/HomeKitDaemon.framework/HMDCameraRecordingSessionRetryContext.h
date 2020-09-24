/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:41:08 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSDictionary, NSObject;

@interface HMDCameraRecordingSessionRetryContext : NSObject {

	double _retryInterval;
	NSDictionary* _homePresenceByPairingIdentity;
	double _maxRetryInterval;
	NSObject*<OS_dispatch_queue> _workQueue;

}

@property (readonly) double maxRetryInterval;                                   //@synthesize maxRetryInterval=_maxRetryInterval - In the implementation block
@property (assign) double retryInterval;                                        //@synthesize retryInterval=_retryInterval - In the implementation block
@property (readonly) NSObject*<OS_dispatch_queue> workQueue;                    //@synthesize workQueue=_workQueue - In the implementation block
@property (readonly) NSDictionary * homePresenceByPairingIdentity;              //@synthesize homePresenceByPairingIdentity=_homePresenceByPairingIdentity - In the implementation block
-(double)retryInterval;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(NSDictionary *)homePresenceByPairingIdentity;
-(void)computeNextRetryInterval;
-(id)initWithWorkQueue:(id)arg1 homePresenceByPairingIdentity:(id)arg2 preferences:(id)arg3 ;
-(double)maxRetryInterval;
-(void)setRetryInterval:(double)arg1 ;
-(id)initWithWorkQueue:(id)arg1 homePresenceByPairingIdentity:(id)arg2 ;
@end
