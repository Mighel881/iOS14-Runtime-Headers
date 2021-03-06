/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:46:32 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol AVTResourceCache <NSObject>
@optional
-(void)clearCache;
-(void)evictResourceFromCache:(id)arg1 scope:(id)arg2;

@required
-(id)resourceForItem:(id)arg1 scope:(id)arg2;
-(id)resourceForItem:(id)arg1 scope:(id)arg2 cacheMissHandler:(/*^block*/id)arg3;
-(BOOL)resourceExistsInCacheForItem:(id)arg1 scope:(id)arg2;

@end

