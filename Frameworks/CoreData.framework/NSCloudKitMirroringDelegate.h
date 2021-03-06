/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:50:43 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/PFCloudKitExporterDelegate.h>
#import <libobjc.A.dylib/NSCloudKitMirroringDelegateProgressProvider.h>
#import <libobjc.A.dylib/NSPersistentStoreMirroringDelegate.h>

@protocol OS_dispatch_semaphore, OS_dispatch_queue;
@class NSCloudKitMirroringDelegateOptions, NSString, NSObject, CKRecordZone, CKDatabaseSubscription, CKContainer, CKDatabase, CKScheduler, CKNotificationListener, NSError, PFCloudKitExporterOptions, CDDCloudKitClient, NSSQLCore, NSPersistentStoreCoordinator, PFCloudKitThrottledNotificationObserver, CKRecordID, NSCloudKitMirroringRequestManager, NSPersistentStore;

@interface NSCloudKitMirroringDelegate : NSObject <PFCloudKitExporterDelegate, NSCloudKitMirroringDelegateProgressProvider, NSPersistentStoreMirroringDelegate> {

	NSCloudKitMirroringDelegateOptions* _options;
	NSString* _ckDatabaseName;
	NSObject*<OS_dispatch_semaphore> _cloudKitQueueSemaphore;
	NSObject*<OS_dispatch_queue> _cloudKitQueue;
	CKRecordZone* _recordZone;
	CKDatabaseSubscription* _databaseSubscription;
	CKContainer* _container;
	CKDatabase* _database;
	CKScheduler* _scheduler;
	CKNotificationListener* _notificationListener;
	NSError* _lastInitializationError;
	BOOL _hadObservedStore;
	BOOL _successfullyInitialized;
	PFCloudKitExporterOptions* _exporterOptions;
	CDDCloudKitClient* _coredatadClient;
	NSSQLCore* _observedStore;
	NSPersistentStoreCoordinator* _observedCoordinator;
	PFCloudKitThrottledNotificationObserver* _accountChangeObserver;
	PFCloudKitThrottledNotificationObserver* _appActivateLifecycleObserver;
	PFCloudKitThrottledNotificationObserver* _appDeactivateLifecycleObserver;
	CKRecordID* _currentUserRecordID;
	NSCloudKitMirroringRequestManager* _requestManager;
	NSString* _observedStoreIdentifier;
	NSString* _importActivityIdentifier;
	NSString* _exportActivityIdentifier;

}

@property (nonatomic,readonly) NSString * ckDatabaseName;                                              //@synthesize ckDatabaseName=_ckDatabaseName - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_semaphore> cloudKitQueueSemaphore;                //@synthesize cloudKitQueueSemaphore=_cloudKitQueueSemaphore - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> cloudKitQueue;                             //@synthesize cloudKitQueue=_cloudKitQueue - In the implementation block
@property (nonatomic,readonly) CKRecordZone * recordZone;                                              //@synthesize recordZone=_recordZone - In the implementation block
@property (nonatomic,readonly) CKDatabaseSubscription * databaseSubscription;                          //@synthesize databaseSubscription=_databaseSubscription - In the implementation block
@property (nonatomic,readonly) CKContainer * container;                                                //@synthesize container=_container - In the implementation block
@property (nonatomic,readonly) CKDatabase * database;                                                  //@synthesize database=_database - In the implementation block
@property (nonatomic,readonly) CKRecordID * currentUserRecordID;                                       //@synthesize currentUserRecordID=_currentUserRecordID - In the implementation block
@property (nonatomic,readonly) CKScheduler * scheduler;                                                //@synthesize scheduler=_scheduler - In the implementation block
@property (nonatomic,readonly) CKNotificationListener * notificationListener;                          //@synthesize notificationListener=_notificationListener - In the implementation block
@property (nonatomic,readonly) NSError * lastInitializationError;                                      //@synthesize lastInitializationError=_lastInitializationError - In the implementation block
@property (nonatomic,__weak,readonly) NSPersistentStore * observedStore;                               //@synthesize observedStore=_observedStore - In the implementation block
@property (nonatomic,readonly) NSString * observedStoreIdentifier;                                     //@synthesize observedStoreIdentifier=_observedStoreIdentifier - In the implementation block
@property (nonatomic,__weak,readonly) NSPersistentStoreCoordinator * observedCoordinator;              //@synthesize observedCoordinator=_observedCoordinator - In the implementation block
@property (nonatomic,readonly) BOOL hadObservedStore;                                                  //@synthesize hadObservedStore=_hadObservedStore - In the implementation block
@property (nonatomic,readonly) BOOL successfullyInitialized;                                           //@synthesize successfullyInitialized=_successfullyInitialized - In the implementation block
@property (nonatomic,readonly) PFCloudKitExporterOptions * exporterOptions;                            //@synthesize exporterOptions=_exporterOptions - In the implementation block
@property (nonatomic,copy,readonly) NSCloudKitMirroringDelegateOptions * options;                      //@synthesize options=_options - In the implementation block
@property (nonatomic,retain,readonly) NSCloudKitMirroringRequestManager * requestManager;              //@synthesize requestManager=_requestManager - In the implementation block
@property (nonatomic,readonly) NSString * importActivityIdentifier;                                    //@synthesize importActivityIdentifier=_importActivityIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * exportActivityIdentifier;                                    //@synthesize exportActivityIdentifier=_exportActivityIdentifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
+(id)makeACopyOfTheStoreAtURL:(id)arg1 withCoordinator:(id)arg2 error:(id*)arg3 ;
+(id)stringForResetReason:(unsigned long long)arg1 ;
+(void)printRepresentativeSchemaForModelAtURL:(id)arg1 orStoreAtURL:(id)arg2 withConfiguration:(id)arg3 ;
+(BOOL)checkForCloudKitTablesInStoreAtURL:(id)arg1 withPersistentStoreCoordinator:(id)arg2 withConfiguration:(id)arg3 ;
+(BOOL)checkIfContentsOfStore:(id)arg1 matchContentsOfStore:(id)arg2 error:(id*)arg3 ;
+(void)printMetadataForStoreAtURL:(id)arg1 withConfiguration:(id)arg2 operateOnACopy:(BOOL)arg3 ;
+(id)createCloudKitServerWithMachServiceName:(id)arg1 andStorageDirectoryPath:(id)arg2 ;
+(id)cloudKitMachServiceName;
+(BOOL)isFirstPartyContainerIdentifier:(id)arg1 ;
+(BOOL)checkAndCreateDirectoryAtURL:(id)arg1 wipeIfExists:(BOOL)arg2 error:(id*)arg3 ;
+(id)cloudKitMetadataTransformerName;
-(CKNotificationListener *)notificationListener;
-(CKScheduler *)scheduler;
-(CKDatabase *)database;
-(NSObject*<OS_dispatch_queue>)cloudKitQueue;
-(id)initWithCloudKitContainerOptions:(id)arg1 ;
-(CKDatabaseSubscription *)databaseSubscription;
-(BOOL)validateManagedObjectModel:(id)arg1 forUseWithStoreWithDescription:(id)arg2 error:(id*)arg3 ;
-(NSError *)lastInitializationError;
-(NSObject*<OS_dispatch_semaphore>)cloudKitQueueSemaphore;
-(PFCloudKitExporterOptions *)exporterOptions;
-(NSString *)ckDatabaseName;
-(void)managedObjectContextSaved:(id)arg1 ;
-(NSCloudKitMirroringDelegateOptions *)options;
-(NSCloudKitMirroringRequestManager *)requestManager;
-(void)dealloc;
-(void)exporter:(id)arg1 willScheduleOperations:(id)arg2 ;
-(void)ckAccountOrIdentityChangedHandler:(id)arg1 ;
-(void)storesDidChange:(id)arg1 ;
-(void)remoteStoreDidChange:(id)arg1 ;
-(void)applicationDidActivate:(id)arg1 ;
-(void)eventUpdated:(id)arg1 ;
-(void)coordinatorWillRemoveStore:(id)arg1 ;
-(NSString *)exportActivityIdentifier;
-(id)initWithOptions:(id)arg1 ;
-(CKRecordID *)currentUserRecordID;
-(void)logResetSyncNotification:(id)arg1 ;
-(BOOL)successfullyInitialized;
-(NSPersistentStoreCoordinator *)observedCoordinator;
-(void)persistentStoreCoordinator:(id)arg1 didSuccessfullyAddPersistentStore:(id)arg2 withDescription:(id)arg3 ;
-(void)applicationWillDeactivate:(id)arg1 ;
-(NSString *)importActivityIdentifier;
-(BOOL)hadObservedStore;
-(NSString *)observedStoreIdentifier;
-(NSPersistentStore *)observedStore;
-(CKContainer *)container;
-(CKRecordZone *)recordZone;
@end

