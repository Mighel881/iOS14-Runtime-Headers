/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:40:27 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ClockKitUI.framework/ClockKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, NSMutableArray;

@interface CLKUIResourceManager : NSObject {

	NSMutableDictionary* _recentProvidersForUuid;
	NSMutableDictionary* _atlasesByUuid;
	NSMutableDictionary* _providersByKey;
	unsigned long long _memoryUsed;
	NSMutableArray* _textureLoaderQueues;

}
+(id)sharedInstance;
-(void)purge:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)purgeAllUnused;
-(void)_purgeAllUnconditionally;
-(id)_newAtlasForUuid:(id)arg1 ;
-(void)_purgeAtlases:(id)arg1 ;
-(id)_fetchOldestAtlas;
-(id)textureForUuid:(id)arg1 delegate:(id)arg2 ;
-(id)borrowTextureLoadingQueue;
-(void)returnTextureLoadingQueue:(id)arg1 ;
-(BOOL)memoryIsAvailable:(unsigned long long)arg1 ;
-(BOOL)ensureMemoryAvailable:(unsigned long long)arg1 ;
-(void)notifyAtlas:(id)arg1 willChangeToMemoryCost:(unsigned long long)arg2 ;
-(id)delegateForUuid:(id)arg1 ;
@end

