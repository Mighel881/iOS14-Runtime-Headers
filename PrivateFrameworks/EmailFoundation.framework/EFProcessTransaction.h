/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:44:30 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/EmailFoundation.framework/EmailFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_os_transaction;
@class NSObject;

@interface EFProcessTransaction : NSObject {

	NSObject*<OS_os_transaction> _transaction;

}
+(id)log;
+(id)transactionWithDescription:(id)arg1 ;
-(void)invalidate;
-(BOOL)extend;
-(id)initWithDescription:(id)arg1 ;
-(id)description;
@end

