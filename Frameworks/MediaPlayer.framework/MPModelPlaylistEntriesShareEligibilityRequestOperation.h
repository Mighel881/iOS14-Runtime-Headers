/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:50:58 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MPAsyncOperation.h>

@class MPModelPlaylistEntriesShareEligibilityRequest;

@interface MPModelPlaylistEntriesShareEligibilityRequestOperation : MPAsyncOperation {

	MPModelPlaylistEntriesShareEligibilityRequest* _request;
	/*^block*/id _responseHandler;

}

@property (nonatomic,copy) MPModelPlaylistEntriesShareEligibilityRequest * request;              //@synthesize request=_request - In the implementation block
@property (nonatomic,copy) id responseHandler;                                                   //@synthesize responseHandler=_responseHandler - In the implementation block
-(id)responseHandler;
-(void)setResponseHandler:(id)arg1 ;
-(MPModelPlaylistEntriesShareEligibilityRequest *)request;
-(void)setRequest:(MPModelPlaylistEntriesShareEligibilityRequest *)arg1 ;
-(void)execute;
@end
