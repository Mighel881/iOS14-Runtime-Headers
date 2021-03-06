/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:44:26 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/BusinessChatService.framework/BusinessChatService
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSCache;

@interface NBRegularExpressionCache : NSObject {

	NSCache* _cache;

}

@property (nonatomic,retain) NSCache * cache;              //@synthesize cache=_cache - In the implementation block
+(id)sharedInstance;
-(void)setCache:(NSCache *)arg1 ;
-(NSCache *)cache;
-(id)init;
-(id)regularExpressionForPattern:(id)arg1 error:(id*)arg2 ;
@end

