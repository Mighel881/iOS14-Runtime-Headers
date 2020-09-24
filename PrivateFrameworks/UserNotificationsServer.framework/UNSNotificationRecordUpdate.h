/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:35:36 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationsServer.framework/UserNotificationsServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class UNSNotificationRecord;

@interface UNSNotificationRecordUpdate : NSObject {

	UNSNotificationRecord* _notificationRecord;

}

@property (nonatomic,readonly) UNSNotificationRecord * notificationRecord;              //@synthesize notificationRecord=_notificationRecord - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(UNSNotificationRecord *)notificationRecord;
-(id)_initWithNotificationRecord:(id)arg1 ;
@end
