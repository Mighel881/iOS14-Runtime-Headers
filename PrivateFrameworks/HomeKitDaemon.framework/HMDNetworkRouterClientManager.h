/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:41:11 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/HMFLogging.h>
#import <libobjc.A.dylib/HMDDevicePreferenceDataSource.h>
#import <libobjc.A.dylib/HMDNetworkRouterFirewallRuleManagerClient.h>

@protocol OS_dispatch_queue, HMDNetworkRouterFirewallRuleManager;
@class HMDHAPAccessory, HMFUnfairLock, NSObject, NSNotificationCenter, NSMutableSet, HMDHome, HMDNetworkRouterController, NSString;

@interface HMDNetworkRouterClientManager : NSObject <HMFLogging, HMDDevicePreferenceDataSource, HMDNetworkRouterFirewallRuleManagerClient> {

	BOOL _started;
	BOOL _managedNetworkEnabled;
	BOOL _staleClientIdentifiersResetNeeded;
	BOOL _staleClientIdentifiersResetInProgress;
	BOOL _startPending;
	HMDHAPAccessory* _networkRouterAccessory;
	HMFUnfairLock* _lock;
	NSObject*<OS_dispatch_queue> _workQueue;
	NSNotificationCenter* _notificationCenter;
	id<HMDNetworkRouterFirewallRuleManager> _firewallRuleManager;
	NSMutableSet* _accessoriesInReconfiguration;

}

@property (readonly) HMFUnfairLock * lock;                                                     //@synthesize lock=_lock - In the implementation block
@property (readonly) NSObject*<OS_dispatch_queue> workQueue;                                   //@synthesize workQueue=_workQueue - In the implementation block
@property (readonly) NSNotificationCenter * notificationCenter;                                //@synthesize notificationCenter=_notificationCenter - In the implementation block
@property (readonly) id<HMDNetworkRouterFirewallRuleManager> firewallRuleManager;              //@synthesize firewallRuleManager=_firewallRuleManager - In the implementation block
@property (__weak) HMDHAPAccessory * networkRouterAccessory;                                   //@synthesize networkRouterAccessory=_networkRouterAccessory - In the implementation block
@property (__weak,readonly) HMDHome * home; 
@property (readonly) HMDNetworkRouterController * routerController; 
@property (assign,nonatomic) BOOL started;                                                     //@synthesize started=_started - In the implementation block
@property (assign,nonatomic) BOOL managedNetworkEnabled;                                       //@synthesize managedNetworkEnabled=_managedNetworkEnabled - In the implementation block
@property (assign,nonatomic) BOOL staleClientIdentifiersResetNeeded;                           //@synthesize staleClientIdentifiersResetNeeded=_staleClientIdentifiersResetNeeded - In the implementation block
@property (assign,nonatomic) BOOL staleClientIdentifiersResetInProgress;                       //@synthesize staleClientIdentifiersResetInProgress=_staleClientIdentifiersResetInProgress - In the implementation block
@property (assign,nonatomic) BOOL startPending;                                                //@synthesize startPending=_startPending - In the implementation block
@property (readonly) NSMutableSet * accessoriesInReconfiguration;                              //@synthesize accessoriesInReconfiguration=_accessoriesInReconfiguration - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(NSNotificationCenter *)notificationCenter;
-(HMFUnfairLock *)lock;
-(void)setStarted:(BOOL)arg1 ;
-(void)_start;
-(BOOL)started;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(void)_stop;
-(void)stop;
-(NSString *)description;
-(HMDHome *)home;
-(id<HMDNetworkRouterFirewallRuleManager>)firewallRuleManager;
-(BOOL)supportsDeviceWithCapabilities:(id)arg1 ;
-(id)watchedAccessoryIdentifiersForFirewallRuleManager:(id)arg1 ;
-(void)migrateAccessory:(id)arg1 toCredentialType:(long long)arg2 rotate:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(void)handleAccessoryConnected:(id)arg1 ;
-(void)handleAccessoryRemoved:(id)arg1 ;
-(id)initWithNetworkRouterAccessory:(id)arg1 workQueue:(id)arg2 firewallRuleManager:(id)arg3 notificationCenter:(id)arg4 ;
-(void)evaluateManagement;
-(void)replaceActiveNetworkRouterAccessory:(id)arg1 ;
-(void)_evaluateManagement;
-(HMDHAPAccessory *)networkRouterAccessory;
-(void)setNetworkRouterAccessory:(HMDHAPAccessory *)arg1 ;
-(void)setManagedNetworkEnabled:(BOOL)arg1 ;
-(BOOL)staleClientIdentifiersResetInProgress;
-(void)setStaleClientIdentifiersResetNeeded:(BOOL)arg1 ;
-(void)_migrateAccessory:(id)arg1 withConfiguration:(id)arg2 clientStatus:(id)arg3 fromCredentialType:(long long)arg4 toCredentialType:(long long)arg5 rotate:(BOOL)arg6 completion:(/*^block*/id)arg7 ;
-(void)_getNetworkConfigurationForAccessory:(id)arg1 targetProtectionMode:(long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)handleRouterAccessoryReachable:(id)arg1 ;
-(void)_resetStaleClientIdentifiersBeforeStart;
-(void)setStartPending:(BOOL)arg1 ;
-(void)setStaleClientIdentifiersResetInProgress:(BOOL)arg1 ;
-(id)_transactionBlockForAccessoriesWithStaleClientIdentifier;
-(BOOL)staleClientIdentifiersResetNeeded;
-(BOOL)startPending;
-(void)__registerForNetworkRouterAccessoryReachable:(id)arg1 ;
-(void)handleAccessoryAdded:(id)arg1 ;
-(void)handleHomeNetworkProtectionChanged:(id)arg1 ;
-(void)handleFirewallRulesUpdated:(id)arg1 ;
-(void)handleNetworkProtectionGroupActivated:(id)arg1 ;
-(void)handleNetworkProtectionGroupDeactivated:(id)arg1 ;
-(void)_registerForNetworkProtectionChangesToGroup:(id)arg1 ;
-(void)_handleRouterAccessoryReachable:(id)arg1 ;
-(BOOL)managedNetworkEnabled;
-(void)_updateClientConfigurationForAllAccessoriesWithClientReconfigurationAllowed:(BOOL)arg1 ;
-(HMDNetworkRouterController *)routerController;
-(void)_startManagingAccessory:(id)arg1 initialHomeSetup:(BOOL)arg2 ;
-(void)_deregisterForChangesToManagedAccessory:(id)arg1 ;
-(void)_updateClientConfigurationForAccessory:(id)arg1 clientReconfigurationAllowed:(BOOL)arg2 ;
-(NSMutableSet *)accessoriesInReconfiguration;
-(void)_reconcileClientConfigurationForReachableAccessory:(id)arg1 clientReconfigurationAllowed:(BOOL)arg2 ;
-(void)_unregisterForNetworkProtectionChangesToGroup:(id)arg1 ;
-(void)_registerForChangesToManagedAccessory:(id)arg1 ;
-(void)_updateExistingClientConfiguration:(id)arg1 forAccessory:(id)arg2 clientStatus:(id)arg3 clientReconfigurationAllowed:(BOOL)arg4 ;
-(void)_createClientConfigurationForAccessory:(id)arg1 credential:(id)arg2 clientStatus:(id)arg3 clientReconfigurationAllowed:(BOOL)arg4 ;
-(void)_reconcileClientConfigurationForAccessory:(id)arg1 clientStatus:(id)arg2 networkRouterUUID:(id)arg3 clientReconfigurationAllowed:(BOOL)arg4 ;
-(void)_replaceNetworkClientIdentifierForAccessory:(id)arg1 networkClientIdentifier:(id)arg2 networkRouterUUID:(id)arg3 clientStatus:(id)arg4 clientReconfigurationAllowed:(BOOL)arg5 ;
-(void)_updateClientConfiguration:(id)arg1 forAccessory:(id)arg2 protectionMode:(long long)arg3 clientStatus:(id)arg4 skipIfFingerprintMatches:(BOOL)arg5 clientReconfigurationAllowed:(BOOL)arg6 ;
-(void)_replaceClientConfigurationForAccessory:(id)arg1 credential:(id)arg2 clientStatus:(id)arg3 clientReconfigurationAllowed:(BOOL)arg4 ;
-(void)_fetchFirewallRulesForAccessory:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)handleAccessoryFirmwareVersionUpdated:(id)arg1 ;
-(void)handleNetworkProtectionGroupProtectionChanged:(id)arg1 ;
-(void)__deregisterForNetworkRouterAccessoryReachable:(id)arg1 ;
@end
