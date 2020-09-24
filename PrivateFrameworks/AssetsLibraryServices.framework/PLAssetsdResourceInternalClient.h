/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:44:40 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AssetsLibraryServices.framework/AssetsLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AssetsLibraryServices/PLAssetsdBaseClient.h>

@interface PLAssetsdResourceInternalClient : PLAssetsdBaseClient
-(void)purgeExpiredOutboundSharingAssetsWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)batchSaveAssetsWithJobDictionaries:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)prepareRevertToOriginalForAsset:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)requestMasterThumbnailForAssetUUID:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
@end
