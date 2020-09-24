/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:35:57 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/Sleep.framework/Sleep
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Sleep/Sleep-Structs.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>
#import <libobjc.A.dylib/HKSPObject.h>
#import <libobjc.A.dylib/HKSPDictionarySerializable.h>
#import <libobjc.A.dylib/NAEquatable.h>
#import <libobjc.A.dylib/NAHashable.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class NSDate, NSString, NSSet;

@interface HKSPSleepEventRecord : NSObject <BSDescriptionProviding, HKSPObject, HKSPDictionarySerializable, NAEquatable, NAHashable, NSMutableCopying> {

	unsigned long long _version;
	NSDate* _lastModifiedDate;
	NSDate* _bedtimeDelayedUntilDate;
	NSDate* _bedtimeSkippedDate;
	NSDate* _wakeUpEarlyNotificationConfirmedDate;
	NSDate* _wakeUpConfirmedUntilDate;
	NSDate* _wakeUpAlarmDismissedDate;
	NSDate* _wakeUpAlarmSnoozedUntilDate;
	NSDate* _windDownSkippedDate;
	NSDate* _goodMorningDismissedDate;
	long long _sleepCoachingOnboardingCompletedVersion;
	NSDate* _sleepCoachingOnboardingFirstCompletedDate;
	long long _sleepTrackingOnboardingCompletedVersion;
	NSDate* _sleepTrackingOnboardingFirstCompletedDate;
	long long _sleepWindDownShortcutsOnboardingCompletedVersion;
	NSDate* _sleepWindDownShortcutsOnboardingFirstCompletedDate;

}

@property (nonatomic,readonly) long long sleepCoachingOnboardingCompletedVersion;                                                                            //@synthesize sleepCoachingOnboardingCompletedVersion=_sleepCoachingOnboardingCompletedVersion - In the implementation block
@property (nonatomic,copy,readonly) NSDate * sleepCoachingOnboardingFirstCompletedDate;                                                                      //@synthesize sleepCoachingOnboardingFirstCompletedDate=_sleepCoachingOnboardingFirstCompletedDate - In the implementation block
@property (nonatomic,readonly) long long sleepTrackingOnboardingCompletedVersion;                                                                            //@synthesize sleepTrackingOnboardingCompletedVersion=_sleepTrackingOnboardingCompletedVersion - In the implementation block
@property (nonatomic,copy,readonly) NSDate * sleepTrackingOnboardingFirstCompletedDate;                                                                      //@synthesize sleepTrackingOnboardingFirstCompletedDate=_sleepTrackingOnboardingFirstCompletedDate - In the implementation block
@property (nonatomic,readonly) long long sleepWindDownShortcutsOnboardingCompletedVersion;                                                                   //@synthesize sleepWindDownShortcutsOnboardingCompletedVersion=_sleepWindDownShortcutsOnboardingCompletedVersion - In the implementation block
@property (nonatomic,copy,readonly) NSDate * sleepWindDownShortcutsOnboardingFirstCompletedDate;                                                             //@synthesize sleepWindDownShortcutsOnboardingFirstCompletedDate=_sleepWindDownShortcutsOnboardingFirstCompletedDate - In the implementation block
@property (getter=isCurrentSleepCoachingOnboardingCompleted,nonatomic,readonly) BOOL currentSleepCoachingOnboardingCompleted; 
@property (getter=isCurrentSleepTrackingOnboardingCompleted,nonatomic,readonly) BOOL currentSleepTrackingOnboardingCompleted; 
@property (getter=isCurrentSleepWindDownShortcutsOnboardingCompleted,nonatomic,readonly) BOOL currentSleepWindDownShortcutsOnboardingCompleted; 
@property (getter=isAnySleepTrackingOnboardingCompleted,nonatomic,readonly) BOOL anySleepTrackingOnboardingCompleted; 
@property (getter=isAnySleepCoachingOnboardingCompleted,nonatomic,readonly) BOOL anySleepCoachingOnboardingCompleted; 
@property (getter=isAnySleepWindDownShortcutsOnboardingCompleted,nonatomic,readonly) BOOL anySleepWindDownShortcutsOnboardingCompleted; 
@property (nonatomic,copy,readonly) NSDate * bedtimeDelayedUntilDate;                                                                                        //@synthesize bedtimeDelayedUntilDate=_bedtimeDelayedUntilDate - In the implementation block
@property (nonatomic,copy,readonly) NSDate * bedtimeSkippedDate;                                                                                             //@synthesize bedtimeSkippedDate=_bedtimeSkippedDate - In the implementation block
@property (nonatomic,copy,readonly) NSDate * wakeUpEarlyNotificationConfirmedDate;                                                                           //@synthesize wakeUpEarlyNotificationConfirmedDate=_wakeUpEarlyNotificationConfirmedDate - In the implementation block
@property (nonatomic,copy,readonly) NSDate * wakeUpConfirmedUntilDate;                                                                                       //@synthesize wakeUpConfirmedUntilDate=_wakeUpConfirmedUntilDate - In the implementation block
@property (nonatomic,copy,readonly) NSDate * wakeUpAlarmDismissedDate;                                                                                       //@synthesize wakeUpAlarmDismissedDate=_wakeUpAlarmDismissedDate - In the implementation block
@property (nonatomic,copy,readonly) NSDate * wakeUpAlarmSnoozedUntilDate;                                                                                    //@synthesize wakeUpAlarmSnoozedUntilDate=_wakeUpAlarmSnoozedUntilDate - In the implementation block
@property (nonatomic,copy,readonly) NSDate * windDownSkippedDate;                                                                                            //@synthesize windDownSkippedDate=_windDownSkippedDate - In the implementation block
@property (nonatomic,copy,readonly) NSDate * goodMorningDismissedDate;                                                                                       //@synthesize goodMorningDismissedDate=_goodMorningDismissedDate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned long long version;                                                                                                   //@synthesize version=_version - In the implementation block
@property (nonatomic,copy,readonly) NSDate * lastModifiedDate;                                                                                               //@synthesize lastModifiedDate=_lastModifiedDate - In the implementation block
@property (nonatomic,readonly) NSSet * significantChanges; 
+(id)testSleepEventRecordWithAllPropertiesSet;
+(BOOL)supportsSecureCoding;
+(id)testSleepEventRecord;
-(BOOL)_equateTo:(id)arg1 builderBuilderBlock:(/*^block*/id)arg2 ;
-(NSDate *)bedtimeSkippedDate;
-(long long)sleepTrackingOnboardingCompletedVersion;
-(NSDate *)sleepWindDownShortcutsOnboardingFirstCompletedDate;
-(NSDate *)wakeUpAlarmSnoozedUntilDate;
-(NSDate *)wakeUpEarlyNotificationConfirmedDate;
-(BOOL)isCurrentSleepTrackingOnboardingCompleted;
-(BOOL)isAnySleepCoachingOnboardingCompleted;
-(BOOL)_needsMigrationForCoder:(id)arg1 ;
-(NSDate *)sleepCoachingOnboardingFirstCompletedDate;
-(long long)sleepWindDownShortcutsOnboardingCompletedVersion;
-(BOOL)isCurrentSleepCoachingOnboardingCompleted;
-(void)_migrateForCoder:(id)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(NSDate *)windDownSkippedDate;
-(unsigned long long)version;
-(void)copyFromObject:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSDate *)bedtimeDelayedUntilDate;
-(NSDate *)wakeUpAlarmDismissedDate;
-(NSDate *)goodMorningDismissedDate;
-(long long)sleepCoachingOnboardingCompletedVersion;
-(BOOL)isAnySleepWindDownShortcutsOnboardingCompleted;
-(BOOL)isEquivalentTo:(id)arg1 ;
-(void)_buildForEquivalenceTo:(id)arg1 builder:(id)arg2 ;
-(BOOL)isCurrentSleepWindDownShortcutsOnboardingCompleted;
-(id)initFromObject:(id)arg1 ;
-(BOOL)isAnySleepTrackingOnboardingCompleted;
-(NSDate *)wakeUpConfirmedUntilDate;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(id)init;
-(NSDate *)sleepTrackingOnboardingFirstCompletedDate;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)mutableCopy;
-(id)succinctDescriptionBuilder;
-(unsigned long long)hash;
-(id)succinctDescription;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(NSDate *)lastModifiedDate;
-(NSString *)description;
@end
