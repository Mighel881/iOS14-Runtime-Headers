/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:38:38 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/ATXUpdatePredictionsSource.h>

@protocol ATXUpdatePredictionsDelegate, ATXLocationManagerProtocol;
@class NSUserDefaults, NSDate;

@interface ATXEnterLOIUpdateSource : NSObject <ATXUpdatePredictionsSource> {

	id<ATXUpdatePredictionsDelegate> _delegate;
	id<ATXLocationManagerProtocol> _locationManager;
	NSUserDefaults* _userDefaults;
	NSDate* _now;

}

@property (nonatomic,retain) NSDate * now;                                                  //@synthesize now=_now - In the implementation block
@property (assign,nonatomic,__weak) id<ATXUpdatePredictionsDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) id<ATXLocationManagerProtocol> locationManager;              //@synthesize locationManager=_locationManager - In the implementation block
@property (nonatomic,readonly) NSUserDefaults * userDefaults;                               //@synthesize userDefaults=_userDefaults - In the implementation block
-(void)setNow:(NSDate *)arg1 ;
-(void)_start;
-(NSUserDefaults *)userDefaults;
-(id)init;
-(NSDate *)now;
-(void)setDelegate:(id<ATXUpdatePredictionsDelegate>)arg1 ;
-(id<ATXUpdatePredictionsDelegate>)delegate;
-(id<ATXLocationManagerProtocol>)locationManager;
-(id)initWithLocationManager:(id)arg1 userDefaults:(id)arg2 ;
-(void)updateMonitoredRegionsIfNecessaryWithReply:(/*^block*/id)arg1 ;
-(void)_registerNotificationListeners;
-(void)locationManagerDidEnterRegion:(id)arg1 ;
-(void)locationManagerDidExitRegion:(id)arg1 ;
-(id)_regionIdentifierForLocationOfInterestType:(long long)arg1 ;
@end
