/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:46:21 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CarKit.framework/CarKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSXPCConnection;

@interface CRCarKitServiceClient : NSObject {

	NSXPCConnection* _connection;

}

@property (nonatomic,retain) NSXPCConnection * connection;              //@synthesize connection=_connection - In the implementation block
+(id)serviceQueue;
-(NSXPCConnection *)connection;
-(void)_setupConnection;
-(void)dealloc;
-(id)init;
-(void)_serviceQueuePerformBlock:(/*^block*/id)arg1 errorHandler:(/*^block*/id)arg2 ;
-(void)performSynchronousServiceBlock:(/*^block*/id)arg1 errorHandler:(/*^block*/id)arg2 ;
-(void)performServiceBlock:(/*^block*/id)arg1 errorHandler:(/*^block*/id)arg2 ;
-(void)setConnection:(NSXPCConnection *)arg1 ;
@end

