/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:41:35 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapsSupport/MapsSupport-Structs.h>
#import <libobjc.A.dylib/MSPSharedTripXPCServer.h>
#import <libobjc.A.dylib/MSPSharedTripXPCClient.h>
#import <libobjc.A.dylib/MSPSharedTripContactControllerDelegate.h>

@protocol OS_dispatch_queue, OS_dispatch_group;
@class NSXPCConnection, NSObject, NSDate, GEOObserverHashTable, NSMutableArray, MSPSharedTripContactController, MSPSharedTripSharingIdentity, MSPMapsPaths, NSArray, NSString;

@interface MSPSharedTripService : NSObject <MSPSharedTripXPCServer, MSPSharedTripXPCClient, MSPSharedTripContactControllerDelegate> {

	NSXPCConnection* _connection;
	BOOL _connectionError;
	NSObject*<OS_dispatch_queue> _isolationQueue;
	unsigned long long _connectionRetryCounter;
	NSDate* _reconnectionBackoffUntilDate;
	GEOObserverHashTable* _receivingObservers;
	GEOObserverHashTable* _sendingObservers;
	NSMutableArray* _receivedTrips;
	MSPSharedTripContactController* _sharingContactController;
	os_unfair_lock_s _sharingIdentityLock;
	unsigned long long _permissions;
	MSPSharedTripSharingIdentity* _sharingIdentity;
	NSObject*<OS_dispatch_group> _checkinDispatchGroup;
	id _userDisabledDefaultListener;
	id _serverDisabledDefaultListener;
	MSPMapsPaths* _mapsPaths;
	BOOL _confirmedMapsIsInstalled;

}

@property (nonatomic,readonly) BOOL canShareTrip; 
@property (nonatomic,readonly) BOOL canReceiveTrips; 
@property (nonatomic,readonly) MSPSharedTripSharingIdentity * sharingIdentity; 
@property (nonatomic,readonly) NSArray * receivers; 
@property (nonatomic,readonly) NSArray * receivedTrips; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(void)_checkin;
-(void)checkin;
-(void)addReceivingObserver:(id)arg1 ;
-(void)refreshReceivedTripsWithCompletion:(/*^block*/id)arg1 ;
-(void)sharedTripInvalidatedWithError:(id)arg1 ;
-(void)_fetchSharingIdentityWithCompletion:(/*^block*/id)arg1 ;
-(void)_subscribeToSharedTripUpdatesWithIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(MSPSharedTripSharingIdentity *)sharingIdentity;
-(void)_startSharingTripWithMessagesContacts:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_fetchRequiresUserConfirmationOfSharingIdentityWithCompletion:(/*^block*/id)arg1 ;
-(void)_handleCheckinWithSharingIdentity:(id)arg1 activeRecipients:(id)arg2 receivedTrips:(id)arg3 permissions:(unsigned long long)arg4 ;
-(void)_insertOrUpdateTrip:(id)arg1 ;
-(void)routeDidUpdateForSharedTrip:(id)arg1 ;
-(void)blockSharedTripWithIdentifier:(id)arg1 ;
-(void)addSendingObserver:(id)arg1 ;
-(void)_validateCurrentConfigurationWithCompletion:(/*^block*/id)arg1 ;
-(void)reportUserConfirmationOfSharingIdentity:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)startSharingTripWithMessagesGroup:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)dealloc;
-(void)_startSharingTripWithMessagesGroup:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)canReceiveTrips;
-(void)etaDidUpdateForSharedTrip:(id)arg1 ;
-(BOOL)isSharingWithContact:(id)arg1 ;
-(void)_fetchSharedTripsWithCompletion:(/*^block*/id)arg1 ;
-(void)fetchActiveHandlesWithCompletion:(/*^block*/id)arg1 ;
-(void)fetchRequiresUserConfirmationOfSharingIdentityWithCompletion:(/*^block*/id)arg1 ;
-(void)sharedTripDidClose:(id)arg1 ;
-(id)_remoteObjectProxy;
-(void)refreshSharingIdentityWithCompletion:(/*^block*/id)arg1 ;
-(void)_stopSharingTrip;
-(void)stopSharingWithContact:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)init;
-(BOOL)canShareTrip;
-(void)_checkEnabledState;
-(void)checkinWithCompletion:(/*^block*/id)arg1 ;
-(void)stopAllSharingWithCompletion:(/*^block*/id)arg1 ;
-(void)sharedTripContactController:(id)arg1 didUpdateActiveContactsValues:(id)arg2 ;
-(void)sharedTripDidBecomeAvailable:(id)arg1 ;
-(void)destinationReachedDidUpdateForSharedTrip:(id)arg1 ;
-(void)sharedTripDidUpdateRecipients:(id)arg1 ;
-(void)_resetCheckinIdentityAndPermissions;
-(void)unsubscribeFromSharedTripUpdatesWithIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_stopSharingTripWithMessagesContacts:(id)arg1 ;
-(void)_performBlockAfterInitialSync:(/*^block*/id)arg1 ;
-(void)stopSharingTripWithMessagesContacts:(id)arg1 ;
-(void)stopSharingTrip;
-(void)fetchSharingIdentityWithCompletion:(/*^block*/id)arg1 ;
-(void)_startSharingWithContact:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)_remoteObjectProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(NSArray *)receivedTrips;
-(void)_unsubscribeFromSharedTripUpdatesWithIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_startSharingTripWithContacts:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)startSharingTripWithContacts:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)sharingIdentityDidChange:(id)arg1 ;
-(void)stopSharingTripWithMessagesGroup:(id)arg1 ;
-(void)_reportUserConfirmationOfSharingIdentity:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_stopSharingWithContact:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)stopSharingTripWithContacts:(id)arg1 ;
-(void)startSharingTripWithMessagesContacts:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_blockSharedTrip:(id)arg1 ;
-(void)removeReceivingObserver:(id)arg1 ;
-(void)_openConnectionIfNeeded;
-(BOOL)_isMapsInstalled;
-(void)_stopAllSharingWithCompletion:(/*^block*/id)arg1 ;
-(void)_performBlockWhenCheckinCompleted:(/*^block*/id)arg1 ;
-(NSArray *)receivers;
-(void)removeSendingObserver:(id)arg1 ;
-(void)fetchSharedTripsWithCompletion:(/*^block*/id)arg1 ;
-(void)_stopSharingTripWithMessagesGroup:(id)arg1 ;
-(void)startSharingWithContact:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_checkinWithCompletion:(/*^block*/id)arg1 ;
-(void)_stopSharingTripWithContacts:(id)arg1 ;
-(void)destinationDidUpdateForSharedTrip:(id)arg1 ;
-(void)blockSharedTrip:(id)arg1 ;
-(void)performBlockAfterInitialSync:(/*^block*/id)arg1 ;
-(void)subscribeToSharedTripUpdatesWithIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_fetchActiveHandlesWithCompletion:(/*^block*/id)arg1 ;
-(void)sharedTripDidBecomeUnavailable:(id)arg1 ;
@end

