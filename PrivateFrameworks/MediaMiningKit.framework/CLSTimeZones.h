/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:40:09 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray;

@interface CLSTimeZones : NSObject {

	NSArray* _timeZonesDB;

}

@property (nonatomic,retain) NSArray * timeZonesDB;              //@synthesize timeZonesDB=_timeZonesDB - In the implementation block
+(id)sharedInstance;
-(void)invalidateCaches;
-(id)timeZoneWithLocation:(id)arg1 ;
-(id)timeZoneWithLocation:(id)arg1 countryCode:(id)arg2 ;
-(NSArray *)timeZonesDB;
-(id)_importDataBaseFromFile:(id)arg1 ;
-(id)closestZoneInfoWithLocation:(id)arg1 source:(id)arg2 ;
-(id)filteredTimeZonesWithCountyCode:(id)arg1 ;
-(id)timeZoneWithDictionary:(id)arg1 ;
-(void)setTimeZonesDB:(NSArray *)arg1 ;
@end

