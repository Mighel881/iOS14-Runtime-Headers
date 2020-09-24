/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:47:02 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVConference/AVConferenceXPCClient.h>

@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSObject;

@interface VCXPCClientShared : AVConferenceXPCClient {

	NSMutableDictionary* _registeredUUIDServiceBlocks;
	NSObject*<OS_dispatch_queue> _registeredBlocksQueue;

}

@property (nonatomic,readonly) NSMutableDictionary * registeredUUIDServiceBlocks;              //@synthesize registeredUUIDServiceBlocks=_registeredUUIDServiceBlocks - In the implementation block
-(void)dealloc;
-(id)init;
-(void)deregisterFromNotifications;
-(void)registerBlockWithUUID:(id)arg1 service:(char*)arg2 block:(/*^block*/id)arg3 ;
-(void)deregisterWithUUID:(id)arg1 service:(char*)arg2 ;
-(NSMutableDictionary *)registeredUUIDServiceBlocks;
@end
