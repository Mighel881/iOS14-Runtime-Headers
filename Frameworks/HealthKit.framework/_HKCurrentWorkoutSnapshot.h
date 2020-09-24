/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:50:11 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSUUID, HKWorkoutConfiguration, NSString, NSDate;

@interface _HKCurrentWorkoutSnapshot : NSObject <NSSecureCoding> {

	NSUUID* _sessionIdentifier;
	HKWorkoutConfiguration* _configuration;
	NSString* _applicationIdentifier;
	long long _sessionState;
	long long _internalState;
	NSDate* _snapshotDate;
	double _elapsedTime;

}

@property (nonatomic,readonly) NSUUID * sessionIdentifier;                          //@synthesize sessionIdentifier=_sessionIdentifier - In the implementation block
@property (nonatomic,readonly) HKWorkoutConfiguration * configuration;              //@synthesize configuration=_configuration - In the implementation block
@property (nonatomic,copy,readonly) NSString * applicationIdentifier;               //@synthesize applicationIdentifier=_applicationIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL isFirstPartyWorkout; 
@property (nonatomic,readonly) long long sessionState;                              //@synthesize sessionState=_sessionState - In the implementation block
@property (nonatomic,readonly) long long internalState;                             //@synthesize internalState=_internalState - In the implementation block
@property (nonatomic,readonly) NSDate * snapshotDate;                               //@synthesize snapshotDate=_snapshotDate - In the implementation block
@property (nonatomic,readonly) double elapsedTime;                                  //@synthesize elapsedTime=_elapsedTime - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSUUID *)sessionIdentifier;
-(id)_initWithSessionIdentifier:(id)arg1 workoutConfiguration:(id)arg2 sessionServerState:(long long)arg3 applicationIdentifier:(id)arg4 elapsedTime:(double)arg5 snapshotDate:(id)arg6 ;
-(NSString *)applicationIdentifier;
-(long long)sessionState;
-(double)elapsedTime;
-(BOOL)isFirstPartyWorkout;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(long long)internalState;
-(double)elapsedTimeAtDate:(id)arg1 ;
-(HKWorkoutConfiguration *)configuration;
-(long long)state;
-(NSDate *)snapshotDate;
-(id)description;
@end
