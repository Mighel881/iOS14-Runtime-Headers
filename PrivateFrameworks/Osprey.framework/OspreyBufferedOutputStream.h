/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:36:53 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/Osprey.framework/Osprey
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreFoundation/NSOutputStream.h>
#import <libobjc.A.dylib/NSStreamDelegate.h>

@protocol OS_dispatch_queue;
@class NSMutableData, NSOutputStream, NSObject, NSString;

@interface OspreyBufferedOutputStream : NSOutputStream <NSStreamDelegate> {

	NSMutableData* _outputBuffer;
	NSOutputStream* _outputStream;
	BOOL _closed;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)stream:(id)arg1 handleEvent:(unsigned long long)arg2 ;
-(long long)write:(const char*)arg1 maxLength:(unsigned long long)arg2 ;
-(void)close;
-(void)dealloc;
-(BOOL)hasSpaceAvailable;
-(id)streamError;
-(id)initWithBufferSize:(unsigned long long)arg1 underlyingOutputStream:(id)arg2 queue:(id)arg3 ;
-(void)_closeUnderlying;
-(BOOL)_flushBuffer;
@end
