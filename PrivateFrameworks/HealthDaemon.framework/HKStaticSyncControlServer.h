/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:43:43 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol HKStaticSyncControlServer <NSObject>
@required
-(id)remote_runStaticSyncExportWithOptions:(unsigned long long)arg1 storeIdentifier:(id)arg2 URL:(id)arg3 batchSize:(unsigned long long)arg4 completion:(/*^block*/id)arg5;
-(id)remote_runStaticSyncImportWithOptions:(unsigned long long)arg1 storeIdentifier:(id)arg2 URL:(id)arg3 completion:(/*^block*/id)arg4;

@end

