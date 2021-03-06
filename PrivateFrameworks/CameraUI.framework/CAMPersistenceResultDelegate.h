/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:41:30 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CAMPersistenceResultDelegate <NSObject>
@optional
-(void)persistenceController:(id)arg1 didCompleteAllLocalPersistenceForRequest:(id)arg2;
-(void)persistenceController:(id)arg1 didGenerateStillImageLocalPersistenceResult:(id)arg2 forCaptureResult:(id)arg3 fromRequest:(id)arg4;
-(void)persistenceController:(id)arg1 didGenerateVideoLocalPersistenceResult:(id)arg2 forCaptureResult:(id)arg3 fromRequest:(id)arg4;

@end

