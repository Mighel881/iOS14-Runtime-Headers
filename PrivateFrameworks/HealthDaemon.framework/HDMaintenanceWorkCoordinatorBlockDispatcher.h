/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:43:46 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/HDBlockDispatcher.h>

@class HDMaintenanceWorkCoordinator, NSString;

@interface HDMaintenanceWorkCoordinatorBlockDispatcher : NSObject <HDBlockDispatcher> {

	HDMaintenanceWorkCoordinator* _maintenanceWorkCoordinator;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithMaintenanceWorkCoordinator:(id)arg1 ;
-(id)init;
-(void)dispatchBlock:(/*^block*/id)arg1 name:(id)arg2 ;
@end

