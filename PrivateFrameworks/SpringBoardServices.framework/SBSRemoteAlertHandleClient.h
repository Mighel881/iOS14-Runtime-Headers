/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:39:54 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SBSRemoteAlertHandleClient <NSObject>
@required
-(id)remoteAlertHandlesForDefinition:(id)arg1 allowsCreation:(BOOL)arg2 configurationContext:(id)arg3;
-(void)activateRemoteAlertHandle:(id)arg1 withContext:(id)arg2;
-(id)createRemoteAlertHandleWithDefinition:(id)arg1 configurationContext:(id)arg2;
-(void)invalidateRemoteAlertHandle:(id)arg1;

@end
