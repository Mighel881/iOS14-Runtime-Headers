/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:36:22 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSXPCListenerDelegate.h>

@protocol OS_dispatch_queue, RERemoteTrainingClientListenerDelegate;
@class NSMutableSet, NSXPCListener, NSObject, NSString;

@interface RERemoteTrainingClientListener : NSObject <NSXPCListenerDelegate> {

	NSMutableSet* _clients;
	NSXPCListener* _listener;
	NSObject*<OS_dispatch_queue> _queue;
	id<RERemoteTrainingClientListenerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<RERemoteTrainingClientListenerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedTrainingClientListener;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(void)dealloc;
-(id)init;
-(void)setDelegate:(id<RERemoteTrainingClientListenerDelegate>)arg1 ;
-(id<RERemoteTrainingClientListenerDelegate>)delegate;
@end
