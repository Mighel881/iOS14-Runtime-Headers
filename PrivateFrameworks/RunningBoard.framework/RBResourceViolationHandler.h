/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:46:45 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/RunningBoard.framework/RunningBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol RBAssertionManaging, OS_dispatch_queue, OS_xpc_object;
@class NSObject;

@interface RBResourceViolationHandler : NSObject {

	id<RBAssertionManaging> _assertionManager;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_xpc_object> _listener;

}
@end
