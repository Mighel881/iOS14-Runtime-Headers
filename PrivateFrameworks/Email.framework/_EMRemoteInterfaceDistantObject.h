/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:41:36 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/Email.framework/Email
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/EMXPCProxyCreating.h>

@class EMRemoteConnection;

@interface _EMRemoteInterfaceDistantObject : NSObject <EMXPCProxyCreating> {

	BOOL _synchronous;
	EMRemoteConnection* _remoteInterface;
	/*^block*/id _reattemptHandler;

}

@property (nonatomic,readonly) EMRemoteConnection * remoteInterface;               //@synthesize remoteInterface=_remoteInterface - In the implementation block
@property (nonatomic,copy,readonly) id reattemptHandler;                           //@synthesize reattemptHandler=_reattemptHandler - In the implementation block
@property (getter=isSynchronous,nonatomic,readonly) BOOL synchronous;              //@synthesize synchronous=_synchronous - In the implementation block
-(id)synchronousRemoteObjectProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(id)remoteObjectProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(BOOL)conformsToProtocol:(id)arg1 ;
-(id)remoteObjectProxy;
-(void)forwardInvocation:(id)arg1 ;
-(id)reattemptHandler;
-(BOOL)respondsToSelector:(SEL)arg1 ;
-(void)_forwardStackInvocation:(id)arg1 ;
-(BOOL)isSynchronous;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(id)initWithRemoteInterface:(id)arg1 synchronous:(BOOL)arg2 reattemptHandler:(/*^block*/id)arg3 ;
-(EMRemoteConnection *)remoteInterface;
-(id)reattemptingRemoteObjectProxyWithReattemptHandler:(/*^block*/id)arg1 ;
-(id)reattemptingRemoteObjectProxy;
@end
