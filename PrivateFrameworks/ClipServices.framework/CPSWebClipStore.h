/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:36:21 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ClipServices.framework/ClipServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface CPSWebClipStore : NSObject {

	NSObject*<OS_dispatch_queue> _queue;

}
+(id)_urlForWebClipWithIdentifier:(id)arg1 ;
+(id)sharedStore;
+(id)_readWebClipDictionaryRepresentationFromDiskWithWebClipIdentifier:(id)arg1 ;
-(void)removeAppClipIconForWebClipWithIdentifier:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)_removeWebClipWithIdentifier:(id)arg1 error:(id*)arg2 ;
-(void)removeWebClipsWithApplicationBundleIdentifiers:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)_saveWebClip:(id)arg1 error:(id*)arg2 ;
-(void)removeWebClipsWithApplicationBundleIdentifier:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)redirectPoweredByWebClipsWithApplicationBundleIdentifier:(id)arg1 toParentApplicationBundleIdentifier:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)removeWebClipWithIdentifier:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)getAppClipWithURLHash:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)getAppClipWithIdentifier:(id)arg1 receiveOnQueue:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)_copyOrReplaceExistingFileAtPath:(id)arg1 withNewFileAtPath:(id)arg2 ;
-(void)getWebClipWithURL:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)_enumerateAndFilterClipsWithBlock:(/*^block*/id)arg1 ;
-(id)synchronouslyGetAppClipWithIdentifier:(id)arg1 ;
-(id)_removeFileFromPath:(id)arg1 ;
-(void)updateAppClipIcon:(id)arg1 forWebClipWithIdentifier:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)_init;
-(void)saveWebClip:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)fetchAppClipsWithCompletionHandler:(/*^block*/id)arg1 ;
-(BOOL)_redirectPoweredByWebClipsWithApplicationBundleIdentifier:(id)arg1 toParentApplicationBundleIdentifier:(id)arg2 errors:(id*)arg3 ;
-(void)getWebClipsBackedbyAppClipIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)reloadSpringBoardIconForWebClipWithIdentifier:(id)arg1 ;
-(id)_fetchInstalledAppClips;
-(void)_reloadSpringBoardIconForWebClipWithIdentifier:(id)arg1 ;
-(void)fetchBookmarkWebClipsWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)_bookmarkWebClips;
-(BOOL)_removeWebClipsWithApplicationBundleIdentifier:(id)arg1 errors:(id*)arg2 ;
-(void)createOrUpdateExistingWebClipWithMetadata:(id)arg1 comletionHandler:(/*^block*/id)arg2 ;
-(id)_createOrUpdateExistingWebClipWithClipMetadata:(id)arg1 createdNewWebClip:(BOOL*)arg2 error:(id*)arg3 ;
-(id)_appClips;
@end
