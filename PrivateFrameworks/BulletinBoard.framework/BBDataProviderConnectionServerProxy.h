/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:38:06 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol BBDataProviderConnectionServerProxy <NSObject>
@required
-(void)addParentSectionFactory:(id)arg1;
-(void)addDataProviderWithSectionID:(id)arg1 clientProxy:(id)arg2 identity:(id)arg3 completion:(/*^block*/id)arg4;
-(void)removeDataProviderWithSectionID:(id)arg1;
-(void)clientIsReady:(/*^block*/id)arg1;

@end

