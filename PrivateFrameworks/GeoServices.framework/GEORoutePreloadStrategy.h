/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:39:06 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class GEORoutePreloader, GEOComposedRoute;


@protocol GEORoutePreloadStrategy <NSObject>
@property (assign,nonatomic,__weak) GEORoutePreloader * preloader; 
@property (nonatomic,retain) GEOComposedRoute * route; 
@required
-(void)setPreloader:(id)arg1;
-(void)updateWithRoute:(id)arg1 routeMatch:(id)arg2;
-(void)performTearDown;
-(void)updateWithRouteMatch:(id)arg1;
-(void)observedNetworkQualityDidChangeFrom:(unsigned long long)arg1 to:(unsigned long long)arg2;
-(void)start;
-(GEORoutePreloader *)preloader;
-(void)setRoute:(id)arg1;
-(GEOComposedRoute *)route;
-(void)stop;

@end

