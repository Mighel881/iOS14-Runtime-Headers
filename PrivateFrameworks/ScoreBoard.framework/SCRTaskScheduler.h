/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:37:53 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ScoreBoard.framework/ScoreBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SCRTaskSchedulerDelegate;
#import <ScoreBoard/ScoreBoard-Structs.h>
@class SCRActivityScheduler, NSMutableDictionary;

@interface SCRTaskScheduler : NSObject {

	os_unfair_lock_s _lock;
	SCRActivityScheduler* _activityScheduler;
	NSMutableDictionary* _activityForTask;
	id<SCRTaskSchedulerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<SCRTaskSchedulerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)cancelTaskWithIdentifier:(id)arg1 ;
-(id)initWithTargetQueue:(id)arg1 ;
-(void)setDelegate:(id<SCRTaskSchedulerDelegate>)arg1 ;
-(id<SCRTaskSchedulerDelegate>)delegate;
-(void)_performTaskWithIdentifier:(id)arg1 ;
-(void)completeTaskWithIdentifier:(id)arg1 ;
-(void)scheduleTaskWithIdentifier:(id)arg1 withConfiguration:(id)arg2 ;
@end
