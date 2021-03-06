/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:46:59 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AVConference/AVConference-Structs.h>
@class NSDictionary;

@interface VCEmulatedNetworkElement : NSObject {

	NSDictionary* _policies;
	opaqueCMSimpleQueueRef _networkElementQueue;
	/*^block*/id _processCompleteHandler;

}

@property (nonatomic,copy) id processCompleteHandler;              //@synthesize processCompleteHandler=_processCompleteHandler - In the implementation block
-(void)dealloc;
-(int)write:(id)arg1 ;
-(id)initWithPolicies:(id)arg1 ;
-(void)runUntilTime:(double)arg1 ;
-(void)connectTo:(id)arg1 ;
-(void)setProcessCompleteHandler:(id)arg1 ;
-(void)drainAndReleasePackets;
-(void)connectFrom:(id)arg1 ;
-(id)processCompleteHandler;
@end

