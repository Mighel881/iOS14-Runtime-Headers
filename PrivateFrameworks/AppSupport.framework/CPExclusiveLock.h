/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:45:53 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AppSupport.framework/AppSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSLocking.h>

@class NSString;

@interface CPExclusiveLock : NSObject <NSLocking> {

	int _fd;
	NSString* _name;

}
-(BOOL)tryLock;
-(id)initWithName:(id)arg1 ;
-(void)lock;
-(void)unlock;
-(void)dealloc;
-(id)init;
-(void)setName:(id)arg1 ;
-(id)name;
@end

