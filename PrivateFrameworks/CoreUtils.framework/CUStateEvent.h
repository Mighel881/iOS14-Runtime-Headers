/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:38:04 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSDictionary;

@interface CUStateEvent : NSObject {

	NSString* _name;
	NSDictionary* _userInfo;

}

@property (nonatomic,copy,readonly) NSString * name;                      //@synthesize name=_name - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * userInfo;              //@synthesize userInfo=_userInfo - In the implementation block
+(id)enterState;
+(id)exitState;
+(id)initialTransition;
-(id)initWithName:(id)arg1 userInfo:(id)arg2 ;
-(void)dealloc;
-(NSDictionary *)userInfo;
-(NSString *)name;
-(id)description;
@end
