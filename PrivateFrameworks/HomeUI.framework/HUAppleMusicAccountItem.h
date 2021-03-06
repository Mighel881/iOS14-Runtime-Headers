/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:42:29 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeUI/HomeUI-Structs.h>
#import <HomeUI/HUAppleMusicItem.h>

@class ACAccount;

@interface HUAppleMusicAccountItem : HUAppleMusicItem {

	ACAccount* _account;

}

@property (nonatomic,readonly) ACAccount * account;              //@synthesize account=_account - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(ACAccount *)account;
-(id)init;
-(id)_subclass_updateWithOptions:(id)arg1 ;
-(id)initWithMediaProfileContainer:(id)arg1 account:(id)arg2 ;
@end

