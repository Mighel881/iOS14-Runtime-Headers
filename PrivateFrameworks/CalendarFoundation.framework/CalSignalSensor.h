/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:39:54 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_source;
@class NSObject;

@interface CalSignalSensor : NSObject {

	NSObject*<OS_dispatch_source> _signalSource;
	int _signal;
	/*^block*/id _fireBlock;

}

@property (assign,nonatomic) int signal;              //@synthesize signal=_signal - In the implementation block
@property (nonatomic,copy) id fireBlock;              //@synthesize fireBlock=_fireBlock - In the implementation block
-(void)stopSensor;
-(void)startSensor;
-(id)initWithSignal:(int)arg1 ;
-(void)_shutDownSource;
-(int)signal;
-(void)dealloc;
-(void)setSignal:(int)arg1 ;
-(id)fireBlock;
-(void)setFireBlock:(id)arg1 ;
-(id)description;
@end

