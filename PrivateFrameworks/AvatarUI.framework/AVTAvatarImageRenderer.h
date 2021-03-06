/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:46:33 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol AVTUILogger, OS_dispatch_queue;
@class AVTSnapshotBuilder, NSObject;

@interface AVTAvatarImageRenderer : NSObject {

	AVTSnapshotBuilder* _snapshotBuilder;
	id<AVTUILogger> _logger;
	NSObject*<OS_dispatch_queue> _snapshotBuilderQueue;

}

@property (nonatomic,retain) AVTSnapshotBuilder * snapshotBuilder;                             //@synthesize snapshotBuilder=_snapshotBuilder - In the implementation block
@property (nonatomic,readonly) id<AVTUILogger> logger;                                         //@synthesize logger=_logger - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> snapshotBuilderQueue;              //@synthesize snapshotBuilderQueue=_snapshotBuilderQueue - In the implementation block
-(id<AVTUILogger>)logger;
-(id)initWithEnvironment:(id)arg1 ;
-(id)imageForAvatar:(id)arg1 scope:(id)arg2 ;
-(id)initWithSnapshotBuilder:(id)arg1 lockProvider:(/*^block*/id)arg2 logger:(id)arg3 ;
-(NSObject*<OS_dispatch_queue>)snapshotBuilderQueue;
-(AVTSnapshotBuilder *)snapshotBuilder;
-(id)nts_imageForAvatar:(id)arg1 scope:(id)arg2 ;
-(void)setSnapshotBuilder:(AVTSnapshotBuilder *)arg1 ;
-(id)init;
@end

