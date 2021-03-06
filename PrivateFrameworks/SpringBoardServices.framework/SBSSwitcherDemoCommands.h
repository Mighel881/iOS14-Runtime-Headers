/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:39:54 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SBSSwitcherDemoCommandsServerToClientInterface.h>

@protocol OS_dispatch_queue;
@class NSObject, BSServiceConnection, NSString;

@interface SBSSwitcherDemoCommands : NSObject <SBSSwitcherDemoCommandsServerToClientInterface> {

	NSObject*<OS_dispatch_queue> _connectionQueue;
	BSServiceConnection* _connection;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_connectionQueue_setupAndActivate;
-(void)invalidate;
-(id)init;
-(BOOL)stashSwitcherModelToPath:(id)arg1 ;
-(BOOL)updateHiddenApplicationBundleIDs:(id)arg1 ;
-(BOOL)setShouldDisableSwitcherModelUpdates:(BOOL)arg1 ;
-(BOOL)loadStashedSwitcherModelFromPath:(id)arg1 ;
-(void)_connectionQueue_invalidate;
-(id)_standardizedAbsolutePathForPath:(id)arg1 ;
@end

