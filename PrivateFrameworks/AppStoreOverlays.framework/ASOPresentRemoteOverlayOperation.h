/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:43:51 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AppStoreOverlays.framework/AppStoreOverlays
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>

@class ASORemoteOverlay;

@interface ASOPresentRemoteOverlayOperation : NSOperation {

	BOOL _isExecuting;
	BOOL _isFinished;
	ASORemoteOverlay* _remoteOverlay;

}

@property (assign) BOOL isExecuting;                                        //@synthesize isExecuting=_isExecuting - In the implementation block
@property (assign) BOOL isFinished;                                         //@synthesize isFinished=_isFinished - In the implementation block
@property (nonatomic,retain) ASORemoteOverlay * remoteOverlay;              //@synthesize remoteOverlay=_remoteOverlay - In the implementation block
-(void)cancel;
-(void)setIsExecuting:(BOOL)arg1 ;
-(BOOL)isFinished;
-(BOOL)isExecuting;
-(void)start;
-(void)setIsFinished:(BOOL)arg1 ;
-(void)finishExecuting;
-(ASORemoteOverlay *)remoteOverlay;
-(id)initWithRemoteOverlay:(id)arg1 ;
-(void)setRemoteOverlay:(ASORemoteOverlay *)arg1 ;
@end

