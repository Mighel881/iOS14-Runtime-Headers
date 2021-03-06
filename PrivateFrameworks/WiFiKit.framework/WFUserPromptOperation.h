/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:37:16 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/WiFiKit.framework/WiFiKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WiFiKit/WiFiKit-Structs.h>
#import <WiFiKit/WFOperation.h>

@class NSDictionary;

@interface WFUserPromptOperation : WFOperation {

	long long _result;
	NSDictionary* _userResponse;
	NSDictionary* _options;
	double _timeout;
	unsigned long long _flags;

}

@property (assign,nonatomic) long long result;                           //@synthesize result=_result - In the implementation block
@property (nonatomic,retain) NSDictionary * options;                     //@synthesize options=_options - In the implementation block
@property (assign,nonatomic) double timeout;                             //@synthesize timeout=_timeout - In the implementation block
@property (assign,nonatomic) unsigned long long flags;                   //@synthesize flags=_flags - In the implementation block
@property (nonatomic,readonly) NSDictionary * userResponse;              //@synthesize userResponse=_userResponse - In the implementation block
+(id)sharedMapTable;
-(double)timeout;
-(unsigned long long)flags;
-(void)setOptions:(NSDictionary *)arg1 ;
-(void)setFlags:(unsigned long long)arg1 ;
-(long long)result;
-(NSDictionary *)options;
-(void)setTimeout:(double)arg1 ;
-(void)start;
-(void)setResult:(long long)arg1 ;
-(NSDictionary *)userResponse;
-(id)initWithOptions:(id)arg1 timeout:(double)arg2 flags:(unsigned long long)arg3 ;
-(id)initWithOptions:(id)arg1 timeout:(double)arg2 ;
-(void)_showPrompt;
-(void)_notification:(CFUserNotificationRef)arg1 didFinishWithResponse:(unsigned long long)arg2 ;
@end

