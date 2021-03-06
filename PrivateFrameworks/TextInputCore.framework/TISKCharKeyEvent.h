/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:42:06 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TextInputCore/TISKInputEvent.h>

@interface TISKCharKeyEvent : TISKInputEvent {

	BOOL _isShortWord;
	long long _wordPosition;

}

@property (assign,nonatomic) long long wordPosition;              //@synthesize wordPosition=_wordPosition - In the implementation block
@property (assign,nonatomic) BOOL isShortWord;                    //@synthesize isShortWord=_isShortWord - In the implementation block
-(id)description;
-(long long)wordPosition;
-(void)reportToSession:(id)arg1 ;
-(void)reportInterKeyTiming:(id)arg1 previousEvent:(id)arg2 ;
-(id)init:(id)arg1 order:(long long)arg2 ;
-(long long)_metricWordKeyPostion:(long long)arg1 ;
-(void)setWordPosition:(long long)arg1 ;
-(BOOL)isShortWord;
-(void)setIsShortWord:(BOOL)arg1 ;
@end

