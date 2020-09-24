/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:40:32 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CoverSheet.framework/CoverSheet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/DNDStateUpdateListener.h>
#import <libobjc.A.dylib/HKSPSleepStoreObserver.h>

@class DNDStateService, NSHashTable, BSTimer, HKSPSleepStore, HKSPSleepSettings, NSString;

@interface CSDNDBedtimeController : NSObject <DNDStateUpdateListener, HKSPSleepStoreObserver> {

	DNDStateService* _stateService;
	NSHashTable* _observers;
	BSTimer* _greetingGracePeriodTimer;
	BOOL _deactivated;
	HKSPSleepStore* _sleepStore;
	HKSPSleepSettings* _sleepSettings;
	BOOL _active;
	BOOL _shouldShowGreeting;

}

@property (assign,getter=isActive,nonatomic) BOOL active;                                    //@synthesize active=_active - In the implementation block
@property (assign,nonatomic) BOOL shouldShowGreeting;                                        //@synthesize shouldShowGreeting=_shouldShowGreeting - In the implementation block
@property (getter=isGreetingDisabled,nonatomic,readonly) BOOL greetingDisabled; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setActive:(BOOL)arg1 ;
-(void)_cleanUpGreetingGracePeriodTimer;
-(BOOL)isGreetingDisabled;
-(id)initWithStateService:(id)arg1 ;
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(void)dealloc;
-(void)_setShouldShowGreeting:(BOOL)arg1 ;
-(BOOL)isActive;
-(void)sleepStore:(id)arg1 sleepSettingsDidChange:(id)arg2 ;
-(id)init;
-(void)stateService:(id)arg1 didReceiveDoNotDisturbStateUpdate:(id)arg2 ;
-(void)_setShouldShowGreeting:(BOOL)arg1 forceUpdateObservers:(BOOL)arg2 ;
-(void)setShouldShowGreeting:(BOOL)arg1 ;
-(BOOL)shouldShowGreeting;
@end
