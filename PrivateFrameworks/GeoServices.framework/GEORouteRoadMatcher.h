/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:39:07 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <GeoServices/GeoServices-Structs.h>
@class GEOMapFeatureAccess;

@interface GEORouteRoadMatcher : NSObject {

	GEOMapFeatureAccess* _mapFeatureAccess;

}
-(SCD_Struct_GE77*)findRoadOnCoordinate:(GEOCoarseLocationLatLng)arg1 withCourse:(double)arg2 ;
-(BOOL)allowsNetworkTileLoad;
-(id)init;
@end
