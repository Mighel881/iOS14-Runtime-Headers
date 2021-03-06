/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:41:09 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>

@class NSMutableDictionary, HMFUnfairLock, HMDHTTPDevice, HMFHTTPClientConnection, NSOperationQueue, NSMutableArray, HMFTimer;

@interface _HMDHTTPServerClientConnection : HMFObject {

	NSMutableDictionary* _pendingTransactionCompletionHandlers;
	HMFUnfairLock* _lock;
	HMDHTTPDevice* _device;
	HMFHTTPClientConnection* _connection;
	NSOperationQueue* _requestOperationQueue;
	NSMutableArray* _receiveMessageRequests;
	NSOperationQueue* _transactionOperationQueue;
	HMFTimer* _lostConnectionTimer;

}

@property (nonatomic,readonly) HMDHTTPDevice * device;                                    //@synthesize device=_device - In the implementation block
@property (nonatomic,retain) HMFHTTPClientConnection * connection;                        //@synthesize connection=_connection - In the implementation block
@property (nonatomic,readonly) NSOperationQueue * requestOperationQueue;                  //@synthesize requestOperationQueue=_requestOperationQueue - In the implementation block
@property (nonatomic,readonly) NSMutableArray * receiveMessageRequests;                   //@synthesize receiveMessageRequests=_receiveMessageRequests - In the implementation block
@property (nonatomic,readonly) NSOperationQueue * transactionOperationQueue;              //@synthesize transactionOperationQueue=_transactionOperationQueue - In the implementation block
@property (getter=isConnected,nonatomic,readonly) BOOL connected; 
@property (nonatomic,readonly) HMFTimer * lostConnectionTimer;                            //@synthesize lostConnectionTimer=_lostConnectionTimer - In the implementation block
+(id)shortDescription;
-(HMDHTTPDevice *)device;
-(id)descriptionWithPointer:(BOOL)arg1 ;
-(BOOL)isConnected;
-(void)invalidate;
-(HMFHTTPClientConnection *)connection;
-(NSOperationQueue *)requestOperationQueue;
-(id)debugDescription;
-(id)shortDescription;
-(id)init;
-(id)initWithDevice:(id)arg1 ;
-(id)description;
-(void)setConnection:(HMFHTTPClientConnection *)arg1 ;
-(void)sendMessage:(id)arg1 timeout:(double)arg2 completionHandler:(/*^block*/id)arg3 ;
-(NSMutableArray *)receiveMessageRequests;
-(HMFTimer *)lostConnectionTimer;
-(void)_reallySendMessage:(id)arg1 timeout:(double)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)dequeueRequest;
-(void)addCompletionHandler:(/*^block*/id)arg1 forTransactionIdentifier:(id)arg2 ;
-(NSOperationQueue *)transactionOperationQueue;
-(/*^block*/id)removeCompletionHandlerForTransactionIdentifier:(id)arg1 ;
-(void)queueRequest:(id)arg1 ;
@end

