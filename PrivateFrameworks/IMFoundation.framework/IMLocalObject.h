/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:40:05 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSProtocolChecker, NSString, NSArray;

@interface IMLocalObject : NSObject {

	id _internal;

}

@property (assign,nonatomic) id target; 
@property (nonatomic,readonly) NSProtocolChecker * protocolChecker; 
@property (nonatomic,readonly) NSString * portName; 
@property (nonatomic,retain) NSString * processName; 
@property (nonatomic,readonly) NSObject*<OS_xpc_object> connection; 
@property (nonatomic,readonly) BOOL isValid; 
@property (nonatomic,readonly) BOOL wasInterrupted; 
@property (nonatomic,retain) NSArray * whitelistedClasses; 
+(void)initialize;
+(void)_setExceptionHandlingDisabled:(BOOL)arg1 ;
+(id)_imLocalObjectQueue;
+(void)_unregisterIMLocalObject:(id)arg1 ;
+(void)_registerIMLocalObject:(id)arg1 ;
+(id)_registeredIMLocalObjectForPort:(unsigned)arg1 ;
-(void)_systemShutdown:(id)arg1 ;
-(void)setPortName:(NSString *)arg1 ;
-(NSString *)portName;
-(void)_portDidBecomeInvalid;
-(void)setProcessName:(NSString *)arg1 ;
-(void)terminated;
-(void)invalidate;
-(void)_noteNewInvocation:(BOOL)arg1 ;
-(BOOL)handleInvocation:(id)arg1 ;
-(void)_enqueueInvocationWithSync:(id)arg1 xpcMessage:(id)arg2 submitToComponentQueue:(BOOL)arg3 ;
-(id)initWithTarget:(id)arg1 connection:(id)arg2 protocol:(id)arg3 forceSecureCoding:(BOOL)arg4 offMainThread:(BOOL)arg5 ;
-(void)_clearPort:(BOOL)arg1 signalRunLoopIfNeeded:(BOOL)arg2 ;
-(NSObject*<OS_xpc_object>)connection;
-(id)initWithTarget:(id)arg1 connection:(id)arg2 protocol:(id)arg3 ;
-(NSString *)processName;
-(void)dealloc;
-(NSArray *)whitelistedClasses;
-(void)_popInvocation;
-(void)_enqueueInvocation:(id)arg1 xpcMessage:(id)arg2 submitToComponentQueue:(BOOL)arg3 isSync:(BOOL)arg4 ;
-(void)_enqueueInvocationWithSync:(id)arg1 xpcMessage:(id)arg2 ;
-(id)_currentMessageContext;
-(id)initWithTarget:(id)arg1 portName:(id)arg2 protocol:(id)arg3 ;
-(void)_enqueueInvocationWithPriority:(id)arg1 xpcMessage:(id)arg2 priority:(int)arg3 ;
-(BOOL)_handleInvocation:(id)arg1 processingComponentQueue:(BOOL)arg2 ;
-(void)_enqueueInvocationWithPriority:(id)arg1 priority:(int)arg2 ;
-(id)initWithTarget:(id)arg1 connection:(id)arg2 protocol:(id)arg3 forceSecureCoding:(BOOL)arg4 ;
-(void)setWhitelistedClasses:(NSArray *)arg1 ;
-(id)_peekInvocation;
-(void)_enqueueInvocation:(id)arg1 ;
-(BOOL)_handleInvocation:(id)arg1 ;
-(id)target;
-(void)_portInterrupted;
-(id)initWithTarget:(id)arg1 protocol:(id)arg2 ;
-(BOOL)isValid;
-(void)_enqueueInvocation:(id)arg1 xpcMessage:(id)arg2 ;
-(void)_enqueueInvocationWithSync:(id)arg1 ;
-(BOOL)isValidSelector:(SEL)arg1 ;
-(void)_clearPort:(BOOL)arg1 ;
-(void)setTarget:(id)arg1 ;
-(NSProtocolChecker *)protocolChecker;
-(id)description;
-(void)_handleNewInvocations;
-(BOOL)wasInterrupted;
-(BOOL)isSameConnection:(id)arg1 ;
@end
