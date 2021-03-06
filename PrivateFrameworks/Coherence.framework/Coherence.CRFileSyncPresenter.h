/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:39:24 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/Coherence.framework/Coherence
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSFilePresenter.h>

@class NSURL, NSOperationQueue, NSSet;

@interface Coherence.CRFileSyncPresenter : NSObject <NSFilePresenter> {

	??? fileURL;
	 queue;
	 manager;

}

@property (readonly,nonatomic) NSURL * presentedItemURL; 
@property (readonly,nonatomic) NSOperationQueue * presentedItemOperationQueue; 
-(id)init;
-(NSOperationQueue *)presentedItemOperationQueue;
-(void)presentedItemDidGainVersion:(id)arg1 ;
-(void)presentedItemDidChange;
-(NSURL *)presentedItemURL;
@end

