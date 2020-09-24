/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:41:11 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFLogging.h>
#import <libobjc.A.dylib/HMDHomePresenceCheck.h>

@class HMDHome, NSDictionary, HMDDevice, NSArray, NSString;

@interface HMDHomePresence : HMFObject <HMFLogging, HMDHomePresenceCheck> {

	HMDHome* _home;
	NSDictionary* _userPresenceMap;
	HMDDevice* _lastUpdateByDevice;

}

@property (nonatomic,__weak,readonly) HMDHome * home;                          //@synthesize home=_home - In the implementation block
@property (nonatomic,readonly) NSDictionary * userPresenceMap;                 //@synthesize userPresenceMap=_userPresenceMap - In the implementation block
@property (nonatomic,readonly) NSArray * authorizedUsers; 
@property (nonatomic,readonly) HMDDevice * lastUpdateByDevice;                 //@synthesize lastUpdateByDevice=_lastUpdateByDevice - In the implementation block
@property (nonatomic,readonly) BOOL hasPresenceRegionForAllUsers; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(id)attributeDescriptions;
-(BOOL)isEqual:(id)arg1 ;
-(id)logIdentifier;
-(unsigned long long)hash;
-(HMDHome *)home;
-(id)serializedIdentifierDictionary;
-(id)initWithHome:(id)arg1 userPresenceMap:(id)arg2 lastUpdateByDevice:(id)arg3 ;
-(id)serializedUUIDDictionary;
-(BOOL)isUserAtHome:(id)arg1 ;
-(BOOL)isUserNotAtHome:(id)arg1 ;
-(BOOL)isAnyUserAtHome;
-(BOOL)isNoUserAtHome;
-(BOOL)areUsersAtHome:(id)arg1 ;
-(BOOL)areUsersNotAtHome:(id)arg1 ;
-(BOOL)hasPresenceRegionForAllUsers;
-(NSDictionary *)userPresenceMap;
-(NSArray *)authorizedUsers;
-(BOOL)isPresenceRegionKnownForUser:(id)arg1 ;
-(HMDDevice *)lastUpdateByDevice;
@end
