/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:36:15 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/FCAssetHandleDelegate.h>
#import <libobjc.A.dylib/FCCacheCoordinatorDelegate.h>
#import <libobjc.A.dylib/FCCacheFlushing.h>

@protocol FCAssetKeyManagerType, FCAVAssetFactoryType, OS_dispatch_queue;
@class NSURL, NSString, FCKeyValueStore, FCAssetStore, FCCacheCoordinator, NSMapTable, NFUnfairLock, FCNetworkBehaviorMonitor, NSObject;

@interface FCAssetManager : NSObject <FCAssetHandleDelegate, FCCacheCoordinatorDelegate, FCCacheFlushing> {

	BOOL _shouldUseSecureConnectionForCKAssetDownloads;
	NSURL* _directoryURLForCachedAssets;
	NSString* _name;
	NSString* _parentDirectory;
	FCKeyValueStore* _keyValueStore;
	FCAssetStore* _assetStore;
	FCCacheCoordinator* _cacheCoordinator;
	NSMapTable* _assetHandles;
	NFUnfairLock* _assetHandlesLock;
	FCNetworkBehaviorMonitor* _networkBehaviorMonitor;
	id<FCAssetKeyManagerType> _keyManager;
	id<FCAVAssetFactoryType> _avAssetFactory;
	NSObject*<OS_dispatch_queue> _initQueue;

}

@property (nonatomic,copy) NSString * name;                                                  //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSString * parentDirectory;                                       //@synthesize parentDirectory=_parentDirectory - In the implementation block
@property (nonatomic,retain) FCKeyValueStore * keyValueStore;                                //@synthesize keyValueStore=_keyValueStore - In the implementation block
@property (nonatomic,retain) FCAssetStore * assetStore;                                      //@synthesize assetStore=_assetStore - In the implementation block
@property (nonatomic,retain) FCCacheCoordinator * cacheCoordinator;                          //@synthesize cacheCoordinator=_cacheCoordinator - In the implementation block
@property (nonatomic,retain) NSMapTable * assetHandles;                                      //@synthesize assetHandles=_assetHandles - In the implementation block
@property (nonatomic,retain) NFUnfairLock * assetHandlesLock;                                //@synthesize assetHandlesLock=_assetHandlesLock - In the implementation block
@property (nonatomic,retain) FCNetworkBehaviorMonitor * networkBehaviorMonitor;              //@synthesize networkBehaviorMonitor=_networkBehaviorMonitor - In the implementation block
@property (nonatomic,retain) id<FCAssetKeyManagerType> keyManager;                           //@synthesize keyManager=_keyManager - In the implementation block
@property (nonatomic,retain) id<FCAVAssetFactoryType> avAssetFactory;                        //@synthesize avAssetFactory=_avAssetFactory - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> initQueue;                         //@synthesize initQueue=_initQueue - In the implementation block
@property (assign,nonatomic) BOOL shouldUseSecureConnectionForCKAssetDownloads;              //@synthesize shouldUseSecureConnectionForCKAssetDownloads=_shouldUseSecureConnectionForCKAssetDownloads - In the implementation block
@property (nonatomic,readonly) NSURL * directoryURLForCachedAssets;                          //@synthesize directoryURLForCachedAssets=_directoryURLForCachedAssets - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)saveWithCompletionHandler:(/*^block*/id)arg1 ;
-(FCCacheCoordinator *)cacheCoordinator;
-(FCAssetStore *)assetStore;
-(void)setCacheCoordinator:(FCCacheCoordinator *)arg1 ;
-(void)setAssetStore:(FCAssetStore *)arg1 ;
-(void)setAvAssetFactory:(id<FCAVAssetFactoryType>)arg1 ;
-(FCNetworkBehaviorMonitor *)networkBehaviorMonitor;
-(id)assetHandleForCKAssetURLString:(id)arg1 lifetimeHint:(long long)arg2 ;
-(BOOL)shouldUseSecureConnectionForCKAssetDownloads;
-(void)_fetchDataProviderForAssetHandle:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)assetHandleForURL:(id)arg1 lifetimeHint:(long long)arg2 ;
-(void)setNetworkBehaviorMonitor:(FCNetworkBehaviorMonitor *)arg1 ;
-(id<FCAVAssetFactoryType>)avAssetFactory;
-(void)setAssetHandlesLock:(NFUnfairLock *)arg1 ;
-(NSString *)parentDirectory;
-(unsigned long long)cacheCoordinatorCurrentSizeWithReadLock:(id)arg1 ;
-(void)_prepareForUseIfNeeded;
-(BOOL)_dataIsGzipped:(id)arg1 ;
-(void)enableFlushingWithFlushingThreshold:(unsigned long long)arg1 ;
-(void)cacheCoordinator:(id)arg1 flushKeysWithWriteLock:(id)arg2 ;
-(void)setInitQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setKeyValueStore:(FCKeyValueStore *)arg1 ;
-(NFUnfairLock *)assetHandlesLock;
-(id)_transformerForAssetAtPath:(id)arg1 mimeType:(id)arg2 URL:(id)arg3 ;
-(id)init;
-(void)setShouldUseSecureConnectionForCKAssetDownloads:(BOOL)arg1 ;
-(void)setKeyManager:(id<FCAssetKeyManagerType>)arg1 ;
-(id)assetHandleForRecordID:(id)arg1 field:(long long)arg2 lifetimeHint:(long long)arg3 contentDatabase:(id)arg4 ;
-(id)_assetHandleForCKAssetURLComponents:(id)arg1 lifetimeHint:(long long)arg2 ;
-(id)_populateRawFilePathForAssetHandle:(id)arg1 completion:(/*^block*/id)arg2 ;
-(NSURL *)directoryURLForCachedAssets;
-(id)assetHandleForResourceID:(id)arg1 contentContext:(id)arg2 ;
-(id)assetHandleForResourceID:(id)arg1 lifetimeHint:(long long)arg2 contentContext:(id)arg3 ;
-(void)setName:(NSString *)arg1 ;
-(void)setAssetHandles:(NSMapTable *)arg1 ;
-(void)setParentDirectory:(NSString *)arg1 ;
-(void)d_resetAssetHandle:(id)arg1 ;
-(id)assetHandleForCKAssetURL:(id)arg1 lifetimeHint:(long long)arg2 ;
-(void)_initStores;
-(FCKeyValueStore *)keyValueStore;
-(id)operationToFetchDataProviderForAssetHandle:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)t_save;
-(id)assetHandleForURL:(id)arg1 prefetchedFileURL:(id)arg2 importMethod:(long long)arg3 lifetimeHint:(long long)arg4 ;
-(id<FCAssetKeyManagerType>)keyManager;
-(NSObject*<OS_dispatch_queue>)initQueue;
-(NSMapTable *)assetHandles;
-(void)_importFileAtPath:(id)arg1 method:(long long)arg2 key:(id)arg3 mimeType:(id)arg4 lifetimeHint:(long long)arg5 ;
-(NSString *)name;
-(id)initWithName:(id)arg1 directory:(id)arg2 keyManager:(id)arg3 avAssetFactory:(id)arg4 networkBehaviorMonitor:(id)arg5 ;
-(long long)_anefFileDataProviderOptions;
-(id)_assetKeyForRemoteURL:(id)arg1 ;
-(id)assetHandleForCKAssetURLString:(id)arg1 prefetchedData:(id)arg2 unzipIfNeeded:(BOOL)arg3 lifetimeHint:(long long)arg4 ;
@end

