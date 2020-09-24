/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:40:18 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/iCloudQuota.framework/iCloudQuota
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class ICQRemoteContext;

@interface ICQRemotePresentationManager : NSObject {

	ICQRemoteContext* _remoteContext;

}

@property (nonatomic,readonly) ICQRemoteContext * remoteContext;              //@synthesize remoteContext=_remoteContext - In the implementation block
-(ICQRemoteContext *)remoteContext;
-(id)initWithRemoteContext:(id)arg1 ;
-(void)presentHiddenFreshmintFlowWithEndpoint:(id)arg1 ;
@end
