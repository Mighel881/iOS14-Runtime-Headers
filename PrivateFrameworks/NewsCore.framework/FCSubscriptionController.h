/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:36:11 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/FCSubscriptionListObserving.h>
#import <libobjc.A.dylib/FCAppActivityObserving.h>

@protocol FCPurchaseProviderType, FCCoreConfigurationManager;
@class FCSubscriptionList, FCTagController, FCThreadSafeMutableDictionary, FCThreadSafeMutableSet, NSHashTable, FCNotificationController, NSString;

@interface FCSubscriptionController : NSObject <FCSubscriptionListObserving, FCAppActivityObserving> {

	FCSubscriptionList* _subscriptionList;
	FCTagController* _tagController;
	FCThreadSafeMutableDictionary* _subscribedTagsByTagID;
	FCThreadSafeMutableSet* _newlyAddedSubscriptions;
	NSHashTable* _observers;
	FCNotificationController* _notificationController;
	id<FCPurchaseProviderType> _purchaseProvider;
	id<FCCoreConfigurationManager> _configurationManager;

}

@property (nonatomic,retain) FCSubscriptionList * subscriptionList;                              //@synthesize subscriptionList=_subscriptionList - In the implementation block
@property (nonatomic,retain) FCTagController * tagController;                                    //@synthesize tagController=_tagController - In the implementation block
@property (nonatomic,retain) FCThreadSafeMutableDictionary * subscribedTagsByTagID;              //@synthesize subscribedTagsByTagID=_subscribedTagsByTagID - In the implementation block
@property (nonatomic,retain) FCThreadSafeMutableSet * newlyAddedSubscriptions;                   //@synthesize newlyAddedSubscriptions=_newlyAddedSubscriptions - In the implementation block
@property (nonatomic,copy) NSHashTable * observers;                                              //@synthesize observers=_observers - In the implementation block
@property (nonatomic,retain) FCNotificationController * notificationController;                  //@synthesize notificationController=_notificationController - In the implementation block
@property (nonatomic,retain) id<FCPurchaseProviderType> purchaseProvider;                        //@synthesize purchaseProvider=_purchaseProvider - In the implementation block
@property (nonatomic,retain) id<FCCoreConfigurationManager> configurationManager;                //@synthesize configurationManager=_configurationManager - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)activityObservingApplicationDidEnterBackground;
-(id)subscriptions;
-(void)fetchSubscribedTagsWithCallbackQueue:(id)arg1 preferCache:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(id)tagIDsWithType:(unsigned long long)arg1 ;
-(BOOL)addMutedSubscriptionForTagID:(id)arg1 eventInitiationLevel:(long long)arg2 ;
-(void)setTagController:(FCTagController *)arg1 ;
-(void)_updateNotificationsForPurchaseTagIDs:(id)arg1 isPaid:(BOOL)arg2 ;
-(void)removeSubscriptionForTagID:(id)arg1 type:(unsigned long long)arg2 eventInitiationLevel:(long long)arg3 ;
-(void)subscriptionList:(id)arg1 didAddSubscriptions:(id)arg2 changeSubscriptions:(id)arg3 moveSubscriptions:(id)arg4 removeSubscriptions:(id)arg5 eventInitiationLevel:(long long)arg6 ;
-(BOOL)addIgnoredSubscriptionForTagID:(id)arg1 groupID:(id)arg2 eventInitiationLevel:(long long)arg3 ;
-(void)addAutoFavoriteSubscriptionForTagIDs:(id)arg1 groupableSubscriptionForTagIDs:(id)arg2 originProvider:(/*^block*/id)arg3 eventInitiationLevelProvider:(/*^block*/id)arg4 completion:(/*^block*/id)arg5 ;
-(BOOL)moveSubscriptionForTagID:(id)arg1 toIndex:(unsigned long long)arg2 ;
-(BOOL)hasIgnoredSubscriptionForTagID:(id)arg1 ;
-(NSHashTable *)observers;
-(BOOL)addMutedSubscriptionForTagID:(id)arg1 groupID:(id)arg2 eventInitiationLevel:(long long)arg3 ;
-(void)_purchaseListDidRemoveTagIDs:(id)arg1 ;
-(void)removeSubscriptionToTag:(id)arg1 eventInitiationLevel:(long long)arg2 ;
-(FCTagController *)tagController;
-(BOOL)setNotificationsEnabled:(BOOL)arg1 forTagID:(id)arg2 error:(id*)arg3 ;
-(id<FCPurchaseProviderType>)purchaseProvider;
-(void)_handleTagSubscriptionsAdded:(id)arg1 tagSubscriptionsChanged:(id)arg2 tagSubscriptionsMoved:(id)arg3 tagSubscriptionsRemoved:(id)arg4 eventInitiationLevel:(long long)arg5 ;
-(void)addObserver:(id)arg1 ;
-(void)setPurchaseProvider:(id<FCPurchaseProviderType>)arg1 ;
-(void)removeAutoFavoriteSubscriptionToTag:(id)arg1 eventInitiationLevel:(long long)arg2 ;
-(id)subscriptionForTag:(id)arg1 type:(unsigned long long)arg2 ;
-(void)removeObserver:(id)arg1 ;
-(id)subscriptionSurfacingHeadline:(id)arg1 ;
-(BOOL)hasSubscriptionToTagID:(id)arg1 ;
-(id)subscriptionForTagID:(id)arg1 ;
-(void)setObservers:(NSHashTable *)arg1 ;
-(FCSubscriptionList *)subscriptionList;
-(id)subscribedTagForTagID:(id)arg1 ;
-(void)setSubscribedTagsByTagID:(FCThreadSafeMutableDictionary *)arg1 ;
-(void)_fetchMissingTagsWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)addIgnoredSubscriptionForTagID:(id)arg1 eventInitiationLevel:(long long)arg2 ;
-(void)_prewarmFeedNavAssetsInOrderedSubscribedTags:(id)arg1 limit:(unsigned long long)arg2 ;
-(BOOL)addSubscriptionToTag:(id)arg1 notificationsEnabled:(BOOL)arg2 error:(id*)arg3 eventInitiationLevel:(long long)arg4 ;
-(id)externalSignalDrivenAutoFavorites;
-(BOOL)hasNotificationsEnabledForTag:(id)arg1 ;
-(void)_notifyOfTagsWithNotificationSupport:(id)arg1 ;
-(id)cachedSubscribedTags;
-(void)setNotificationController:(FCNotificationController *)arg1 ;
-(BOOL)addSubscriptionToTag:(id)arg1 eventInitiationLevel:(long long)arg2 options:(long long)arg3 error:(id*)arg4 ;
-(id)init;
-(BOOL)hasAutoFavoriteSubscriptionForTagID:(id)arg1 ;
-(BOOL)addSubscriptionToTag:(id)arg1 error:(id*)arg2 eventInitiationLevel:(long long)arg3 ;
-(id)initWithSubscriptionList:(id)arg1 tagController:(id)arg2 notificationController:(id)arg3 purchaseProvider:(id)arg4 configurationManager:(id)arg5 appActivityMonitor:(id)arg6 ;
-(void)_fetchTagsForIDs:(id)arg1 maxCachedAge:(double)arg2 qualityOfService:(long long)arg3 completion:(/*^block*/id)arg4 ;
-(void)_notifyOfTagsAdded:(id)arg1 tagsChanged:(id)arg2 tagsMoved:(id)arg3 tagsRemoved:(id)arg4 subscriptionType:(unsigned long long)arg5 eventInitiationLevel:(long long)arg6 ;
-(FCNotificationController *)notificationController;
-(FCThreadSafeMutableSet *)newlyAddedSubscriptions;
-(BOOL)hasSubscriptionToTag:(id)arg1 ;
-(id<FCCoreConfigurationManager>)configurationManager;
-(void)setNewlyAddedSubscriptions:(FCThreadSafeMutableSet *)arg1 ;
-(BOOL)setNotificationsEnabled:(BOOL)arg1 forTag:(id)arg2 error:(id*)arg3 ;
-(FCThreadSafeMutableDictionary *)subscribedTagsByTagID;
-(void)setConfigurationManager:(id<FCCoreConfigurationManager>)arg1 ;
-(id)ignoredTagIDs;
-(id)subscriptionForTag:(id)arg1 ;
-(id)subscribedTagIDsWithNotificationsEnabled;
-(id)mutedTagIDs;
-(void)_refreshNotificationRegistrations;
-(id)groupableTagIDs;
-(void)refreshSubscriptionTags;
-(void)_integrateTags:(id)arg1 eventInitiationLevel:(long long)arg2 ;
-(void)setSubscriptionList:(FCSubscriptionList *)arg1 ;
-(id)demoAutoFavoriteChannelIDs;
-(void)fetchAllTagsWithCallbackQueue:(id)arg1 maximumCachedAge:(double)arg2 qualityOfService:(long long)arg3 completion:(/*^block*/id)arg4 ;
-(id)subscriptionsWithType:(unsigned long long)arg1 ;
-(void)_handleNonTagSubscriptionType:(unsigned long long)arg1 addedSubscriptionsByType:(id)arg2 removedSubscriptionsByType:(id)arg3 changedSubscriptionsByType:(id)arg4 eventInitiationLevel:(long long)arg5 ;
-(BOOL)addGroupableSubscriptionForTagID:(id)arg1 origin:(unsigned long long)arg2 eventInitiationLevel:(long long)arg3 ;
-(id)newlySubscribedTagIDsInDateRange:(id)arg1 ;
-(id)orderedCachedSubscribedTags;
-(id)subscribedTagIDs;
-(BOOL)canAddSubscription;
-(void)subscriptionListDidResetToEmpty:(id)arg1 ;
-(void)removeAllAutoFavoriteSubscriptions:(/*^block*/id)arg1 ;
-(void)_purchaseListDidAddTagIDs:(id)arg1 ;
-(BOOL)canAddSubscriptionWithError:(id*)arg1 ;
-(id)autoFavoriteTagIDs;
-(BOOL)hasMutedSubscriptionForTagID:(id)arg1 ;
@end

