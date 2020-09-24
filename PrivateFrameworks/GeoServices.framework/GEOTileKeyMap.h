/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:39:10 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface GEOTileKeyMap : NSObject <NSCopying> {

	long long _type;
	void* _map;

}
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(void)setObject:(id)arg1 forKey:(const GEOTileKey*)arg2 ;
-(id)contentsDescription;
-(id)init;
-(unsigned long long)count;
-(void)removeObjectForKey:(const GEOTileKey*)arg1 ;
-(id)objectForKey:(const GEOTileKey*)arg1 ;
-(void)reserveCapacity:(unsigned long long)arg1 ;
-(id)initWithMapType:(long long)arg1 ;
@end
