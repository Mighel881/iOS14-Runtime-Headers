/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:41:06 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol HMXPCMessageTransport <NSObject>
@optional
-(void)updateUserInfo:(id)arg1;
-(void)fetchUserInfo:(/*^block*/id)arg1;

@required
-(void)handleMessage:(id)arg1;
-(void)handleMessage:(id)arg1 responseHandler:(/*^block*/id)arg2;

@end
