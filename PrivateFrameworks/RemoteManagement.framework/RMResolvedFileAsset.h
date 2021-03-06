/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:35:40 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/RemoteManagement.framework/RemoteManagement
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RemoteManagement/RMResolvedAsset.h>

@class NSURL;

@interface RMResolvedFileAsset : RMResolvedAsset {

	NSURL* _downloadedURL;

}

@property (nonatomic,readonly) NSURL * downloadedURL;              //@synthesize downloadedURL=_downloadedURL - In the implementation block
-(id)initWithAsset:(id)arg1 downloadedURL:(id)arg2 error:(id)arg3 ;
-(NSURL *)downloadedURL;
@end

