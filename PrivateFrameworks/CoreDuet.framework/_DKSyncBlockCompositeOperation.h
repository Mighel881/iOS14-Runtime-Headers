/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:36:18 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreDuet/CoreDuet-Structs.h>
#import <CoreDuet/_DKSyncCompositeOperation.h>

@class NSMutableArray;

@interface _DKSyncBlockCompositeOperation : _DKSyncCompositeOperation {

	os_unfair_lock_s _lock;
	NSMutableArray* _blocks;

}

@property (readonly) NSMutableArray * blocks;              //@synthesize blocks=_blocks - In the implementation block
-(BOOL)isAsynchronous;
-(NSMutableArray *)blocks;
-(id)executionBlocks;
-(void)main;
@end

