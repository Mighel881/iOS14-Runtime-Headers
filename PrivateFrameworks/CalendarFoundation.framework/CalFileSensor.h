/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:39:54 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, OS_dispatch_source;
@class NSObject, NSString;

@interface CalFileSensor : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_source> _source;
	/*^block*/id _eventBlock;
	BOOL _started;
	NSString* _path;

}

@property (nonatomic,retain,readonly) NSString * path;              //@synthesize path=_path - In the implementation block
@property (nonatomic,readonly) BOOL started;                        //@synthesize started=_started - In the implementation block
@property (nonatomic,copy,readonly) id eventBlock;                  //@synthesize eventBlock=_eventBlock - In the implementation block
-(NSString *)path;
-(BOOL)started;
-(void)dealloc;
-(id)initWithPath:(id)arg1 eventBlock:(/*^block*/id)arg2 ;
-(void)start;
-(id)init;
-(id)eventBlock;
-(void)stop;
-(id)description;
@end
