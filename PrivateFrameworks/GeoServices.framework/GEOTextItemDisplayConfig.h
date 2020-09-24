/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:39:19 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/GEOTextItemDisplayConfig.h>

@protocol GEOTextItemDisplayConfig
@property (nonatomic,readonly) unsigned maxItemsPerRow; 
@property (nonatomic,readonly) unsigned maxRowCount; 
@required
-(unsigned)maxRowCount;
-(unsigned)maxItemsPerRow;

@end


@interface GEOTextItemDisplayConfig : NSObject <GEOTextItemDisplayConfig> {

	unsigned _maxItemsPerRow;
	unsigned _maxRowCount;

}

@property (nonatomic,readonly) unsigned maxItemsPerRow;              //@synthesize maxItemsPerRow=_maxItemsPerRow - In the implementation block
@property (nonatomic,readonly) unsigned maxRowCount;                 //@synthesize maxRowCount=_maxRowCount - In the implementation block
-(unsigned)maxRowCount;
-(unsigned)maxItemsPerRow;
-(id)initWithMaxItemsPerRow:(unsigned)arg1 maxRowCount:(unsigned)arg2 ;
-(id)initWithTextItemDisplayConfig:(id)arg1 ;
-(id)init;
@end
