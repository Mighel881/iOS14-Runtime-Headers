/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:38:38 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class _PASLock;

@interface ATXLockscreenBlacklist : NSObject {

	_PASLock* _lock;
	id _notificationCenterToken;
	int _libnotifyToken;

}
+(id)sharedInstance;
-(void)dealloc;
-(BOOL)isPredictionGloballyDisabled;
-(id)init;
-(id)blacklist;
@end

