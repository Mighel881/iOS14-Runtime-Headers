/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:41:33 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PairedUnlock.framework/PairedUnlock
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PUUnlockClient <NSObject>
@required
-(void)didPairForUnlock:(BOOL)arg1 error:(id)arg2;
-(void)didUnpairForUnlock:(BOOL)arg1 error:(id)arg2;
-(void)didEnableOnlyRemoteUnlock:(BOOL)arg1 error:(id)arg2;
-(void)didDisableOnlyRemoteUnlock:(BOOL)arg1 error:(id)arg2;
-(void)remoteDeviceDidCompleteRemoteAction:(BOOL)arg1 remoteDeviceState:(id)arg2 error:(id)arg3;
-(void)remoteDeviceDidUnlock;
-(void)remoteDeviceDidRemoveLockout:(BOOL)arg1 error:(id)arg2;
-(void)didGetRemoteDeviceState:(id)arg1 error:(id)arg2;

@end

