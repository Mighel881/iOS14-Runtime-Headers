/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:46:40 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSXPCListenerDelegate.h>
#import <libobjc.A.dylib/PDAssertionCoordinatorDelegate.h>

@protocol OS_dispatch_queue;
@class NSHashTable, NSXPCListener, NSMutableDictionary, NSObject, BKSApplicationStateMonitor, NSString;

@interface PDAssertionManager : NSObject <NSXPCListenerDelegate, PDAssertionCoordinatorDelegate> {

	NSHashTable* _observers;
	NSXPCListener* _coordinatorListener;
	NSMutableDictionary* _coordinators;
	NSObject*<OS_dispatch_queue> _managerSerialQueue;
	BKSApplicationStateMonitor* _applicationStateMonitor;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)unregisterObserver:(id)arg1 ;
-(void)_removeAllAssertionCoordinators;
-(void)registerObserver:(id)arg1 ;
-(id)_coordinatorsBundleIdentifier;
-(void)_addAssertionCoordinator:(id)arg1 forProcessIdentifier:(id)arg2 ;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(void)dealloc;
-(void)assertionCoordinator:(id)arg1 didInvalidateAssertion:(id)arg2 ;
-(void)_removeAssertionCoordinator:(id)arg1 ;
-(id)_processNameWithPID:(int)arg1 ;
-(void)_applicationStateChanged:(id)arg1 ;
-(id)init;
-(id)assertionsOfType:(unsigned long long)arg1 ;
-(BOOL)assertionCoordinator:(id)arg1 canAcquireAssertion:(id)arg2 ;
-(void)acquireAssertionOfType:(unsigned long long)arg1 withIdentifier:(id)arg2 reason:(id)arg3 handler:(/*^block*/id)arg4 ;
-(void)invalidateAssertionOfType:(unsigned long long)arg1 withIdentifier:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)assertionCoordinator:(id)arg1 didAcquireAssertion:(id)arg2 ;
@end
