/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:35:35 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationsServer.framework/UserNotificationsServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/LSApplicationWorkspaceObserverProtocol.h>
#import <libobjc.A.dylib/UNSContentProtectionObserver.h>
#import <libobjc.A.dylib/UNSDefaultDataProviderFactoryObserver.h>
#import <libobjc.A.dylib/UNSNotificationRepositoryDelegate.h>
#import <libobjc.A.dylib/UNSRemoteNotificationServerObserver.h>

@protocol OS_dispatch_queue;
@class UNSApplicationLauncher, UNSApplicationService, UNSAttachmentsRepository, UNSBundleLibrarian, UNSContentProtectionManager, UNSDefaultDataProviderFactory, UNSLocalizationService, UNSUserNotificationServerConnectionListener, UNSUserNotificationServerSettingsConnectionListener, UNSUserNotificationServerRemoteNotificationConnectionListener, UNSNotificationCategoryRepository, UNSNotificationSchedulingService, UNSNotificationAuthorizationService, UNSNotificationSettingsService, UNSNotificationRepository, UNSPendingNotificationRepository, UNSPushRegistrationRepository, UNSRemoteNotificationServer, UNSNotificationScheduleRepository, UNSNotificationTopicRepository, UNSAttachmentsService, UNSLocationMonitor, UNSDaemonLauncher, BKSApplicationStateMonitor, NSSet, NSString, UNSSettingsGateway, NSObject;

@interface UNSUserNotificationServer : NSObject <LSApplicationWorkspaceObserverProtocol, UNSContentProtectionObserver, UNSDefaultDataProviderFactoryObserver, UNSNotificationRepositoryDelegate, UNSRemoteNotificationServerObserver> {

	UNSApplicationLauncher* _applicationLauncher;
	UNSApplicationService* _applicationService;
	UNSAttachmentsRepository* _attachmentsRepository;
	UNSBundleLibrarian* _librarian;
	UNSContentProtectionManager* _contentProtectionManager;
	UNSDefaultDataProviderFactory* _dataProviderFactory;
	UNSLocalizationService* _localizationService;
	UNSUserNotificationServerConnectionListener* _userNotificationServerConnectionListener;
	UNSUserNotificationServerSettingsConnectionListener* _userNotificationServerSettingsConnectionListener;
	UNSUserNotificationServerRemoteNotificationConnectionListener* _userNotificationServerRemoteNotificationConnectionListener;
	UNSNotificationCategoryRepository* _categoryRepository;
	UNSNotificationSchedulingService* _notificationSchedulingService;
	UNSNotificationAuthorizationService* _notificationAuthorizationService;
	UNSNotificationSettingsService* _notificationSettingsService;
	UNSNotificationRepository* _notificationRepository;
	UNSPendingNotificationRepository* _pendingNotificationRepository;
	UNSPushRegistrationRepository* _pushRegistrationRepository;
	UNSRemoteNotificationServer* _remoteNotificationService;
	UNSNotificationScheduleRepository* _notificationScheduleRepository;
	UNSNotificationTopicRepository* _topicRepository;
	UNSAttachmentsService* _attachmentsService;
	UNSLocationMonitor* _locationMonitor;
	UNSDaemonLauncher* _daemonLauncher;
	BKSApplicationStateMonitor* _applicationStateMonitor;
	NSSet* _systemSourceBundleIdentifiers;
	NSString* _libraryDirectory;
	NSString* _directory;
	UNSSettingsGateway* _settingsGateway;
	NSObject*<OS_dispatch_queue> _installedSourceQueue;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
+(id)_sharedInstanceCreateIfNecessary:(BOOL)arg1 ;
+(id)sharedInstanceIfExists;
-(void)didChangeNotificationSettings:(id)arg1 forBundleIdentifier:(id)arg2 ;
-(void)_migratePendingNotificationRequests;
-(void)_installedSourceQueue_notificationSourcesDidInstall:(id)arg1 ;
-(void)initialSystemNotificationSourcesDidInstall:(id)arg1 applicationsDidInstall:(id)arg2 ;
-(void)_applicationsDidInstall:(id)arg1 ;
-(void)_triggerLocationArrowForBundleIdentifier:(id)arg1 ;
-(void)_removePushStore;
-(void)applicationsDidInstall:(id)arg1 ;
-(void)_addObserverForApplicationWorkspaceChanges;
-(id)_loadAllSystemNotificationSourceDescriptions;
-(void)_migrateUserNotificationsRepositories;
-(void)didReceiveDeviceToken:(id)arg1 forBundleIdentifier:(id)arg2 ;
-(void)contentProtectionStateChangedForFirstUnlock:(BOOL)arg1 ;
-(void)willPresentNotification:(id)arg1 forBundleIdentifier:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(void)_addObserverForLocaleChanges;
-(void)_installedSourceQueue_notificationSourcesDidUninstall:(id)arg1 ;
-(BOOL)isApplicationForeground:(id)arg1 ;
-(void)_timeDidChangeSignificantly;
-(id)_sourceDescriptionsForApplications:(id)arg1 ;
-(void)_addObserverForRemoteNotificationServiceChanges;
-(void)_migratePushRegistrations;
-(void)applicationsDidUninstall:(id)arg1 ;
-(id)init;
-(void)_addObserverForDataProviderFactoryChanges;
-(void)_removeNotificationSourceDirectories:(id)arg1 ;
-(void)_localeDidChange;
-(void)_backgroundRefreshApplicationsDidChange;
-(void)_migrateNotificationCategories;
-(void)_migrateNotificationSchedule;
-(void)_addObserverForContentProtectionChanges;
-(void)_ensureAttachmentsIntegrity;
-(void)_removeBundleLibrarianMappingsForSourceDescriptions:(id)arg1 ;
-(void)_migrateAttachments;
-(void)_migrateNotificationRepository;
-(void)applicationStateDidChange:(id)arg1 ;
-(void)_addObserverForBackgroundRefreshApplicationChanges;
-(void)_addObserverForApplicationStateRestore;
-(void)_validateNotificationRepository;
-(void)_didChangeApplicationState:(unsigned)arg1 forBundleIdentifier:(id)arg2 ;
-(void)_addObserverForSignificantTimeChanges;
-(void)_registerLoggers;
-(void)_addObserverForApplicationStateMonitor;
-(void)_applicationStateDidRestore;
@end
