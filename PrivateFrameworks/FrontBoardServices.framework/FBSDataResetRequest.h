/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:37:27 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface FBSDataResetRequest : NSObject {

	long long _mode;
	long long _options;
	NSString* _reason;

}

@property (assign,nonatomic) long long mode;                 //@synthesize mode=_mode - In the implementation block
@property (assign,nonatomic) long long options;              //@synthesize options=_options - In the implementation block
@property (nonatomic,copy) NSString * reason;                //@synthesize reason=_reason - In the implementation block
-(long long)mode;
-(void)setMode:(long long)arg1 ;
-(void)setOptions:(long long)arg1 ;
-(long long)options;
-(void)setReason:(NSString *)arg1 ;
-(NSString *)reason;
-(id)initWithMode:(long long)arg1 options:(long long)arg2 reason:(id)arg3 ;
@end

