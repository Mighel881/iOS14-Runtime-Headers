/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:50:44 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EventKit/EventKit-Structs.h>
#import <libobjc.A.dylib/EKFrozenMeltedPair.h>
#import <libobjc.A.dylib/EKProtocolMutableObject.h>

@class NSString, EKPersistentObject, EKChangeSet, NSMutableDictionary, NSDictionary, EKObjectValidationContext, EKEventStore;

@interface EKObject : NSObject <EKFrozenMeltedPair, EKProtocolMutableObject> {

	EKPersistentObject* _persistentObject;
	EKChangeSet* _changeSet;
	NSMutableDictionary* __cachedMeltedObjects;
	NSDictionary* _additionalFrozenProperties;
	NSMutableDictionary* __cachedValues;
	EKObjectValidationContext* __validationContext;

}

@property (nonatomic,readonly) NSString * specificIdentifier; 
@property (nonatomic,retain) EKPersistentObject * persistentObject;                       //@synthesize persistentObject=_persistentObject - In the implementation block
@property (nonatomic,retain) EKEventStore * eventStore; 
@property (nonatomic,retain) EKChangeSet * changeSet;                                     //@synthesize changeSet=_changeSet - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * _cachedMeltedObjects;                  //@synthesize _cachedMeltedObjects=__cachedMeltedObjects - In the implementation block
@property (nonatomic,retain) NSDictionary * additionalFrozenProperties;                   //@synthesize additionalFrozenProperties=_additionalFrozenProperties - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * _cachedValues;                         //@synthesize _cachedValues=__cachedValues - In the implementation block
@property (nonatomic,retain) EKObjectValidationContext * _validationContext;              //@synthesize _validationContext=__validationContext - In the implementation block
@property (nonatomic,retain) EKPersistentObject * backingObject; 
@property (nonatomic,readonly) BOOL hasChanges; 
@property (getter=isNew,nonatomic,readonly) BOOL new; 
@property (nonatomic,readonly) BOOL isFrozen; 
@property (nonatomic,readonly) BOOL isPartialObject; 
@property (nonatomic,readonly) NSString * uniqueIdentifier; 
@property (nonatomic,readonly) NSString * semanticIdentifier; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL canBeConvertedToFullObject; 
@property (nonatomic,readonly) NSDictionary * preFrozenRelationshipObjects; 
+(id)knownSingleValueKeysForComparison;
+(id)knownIdentityKeysForComparison;
+(id)EKObjectChangeSummarizer_singleValueDiffKeys;
+(id)EKObjectChangeSummarizer_multiValueDiffKeys;
+(Class)frozenClass;
+(BOOL)_compareAllKnownKeysExceptKeys:(id)arg1 forObject:(id)arg2 againstObject:(id)arg3 compareIdentityKeys:(BOOL)arg4 ;
+(unsigned long long)_numberOfSharedLocksForUnitTesting;
+(BOOL)_compareRelationshipObject1:(id)arg1 againstRelationshipObject2:(id)arg2 propertiesToIgnore:(id)arg3 relationshipObjectKey:(id)arg4 ;
+(BOOL)isDerivedRelationship;
+(BOOL)_compareAllKnownKeysExceptKeys:(id)arg1 forObject:(id)arg2 againstObject:(id)arg3 ;
+(BOOL)_compareKnownKeys:(id)arg1 forObject:(id)arg2 againstObject:(id)arg3 ;
+(BOOL)_compareNonIdentityKeys:(id)arg1 forObject:(id)arg2 againstObject:(id)arg3 propertiesToIgnore:(id)arg4 ;
+(id)knownImmutableKeys;
+(BOOL)_object:(id)arg1 equalsObject:(id)arg2 forKeys:(id)arg3 compareImmutableKeys:(BOOL)arg4 ignoringProperties:(id)arg5 ;
+(BOOL)_objects:(id)arg1 haveSameMeltedClass:(Class)arg2 frozenClass:(Class)arg3 ;
+(BOOL)_compareKnownKeys:(id)arg1 forObject:(id)arg2 againstObject:(id)arg3 compareImmutableKeys:(BOOL)arg4 propertiesToIgnore:(id)arg5 ;
+(BOOL)_compareKnownKeys:(id)arg1 forObject:(id)arg2 againstObject:(id)arg3 compareImmutableKeys:(BOOL)arg4 propertiesToIgnore:(id)arg5 ;
+(BOOL)isWeakRelationship;
+(BOOL)_compareKnownKeys:(id)arg1 forObject:(id)arg2 againstObject:(id)arg3 compareIdentityKeys:(BOOL)arg4 compareImmutableKeys:(BOOL)arg5 propertiesToIgnore:(id)arg6 ;
+(BOOL)_compareKnownKeys:(id)arg1 forObject:(id)arg2 againstObject:(id)arg3 compareIdentityKeys:(BOOL)arg4 compareImmutableKeys:(BOOL)arg5 propertiesToIgnore:(id)arg6 ;
+(BOOL)_compareIdentityKeysForObject:(id)arg1 againstObject:(id)arg2 propertiesToIgnore:(id)arg3 ;
+(BOOL)_compareIdentityKeysForObject:(id)arg1 againstObject:(id)arg2 propertiesToIgnore:(id)arg3 ;
+(id)knownRelationshipMultiValueKeys;
+(BOOL)_compareNonIdentityKeys:(id)arg1 forObject:(id)arg2 againstObject:(id)arg3 compareImmutableKeys:(BOOL)arg4 propertiesToIgnore:(id)arg5 ;
+(BOOL)_compareNonIdentityKeys:(id)arg1 forObject:(id)arg2 againstObject:(id)arg3 compareImmutableKeys:(BOOL)arg4 propertiesToIgnore:(id)arg5 ;
+(id)knownRelationshipSingleValueKeys;
+(BOOL)_compareSingleValueRelationshipKeys:(id)arg1 forObject:(id)arg2 againstObject:(id)arg3 propertiesToIgnore:(id)arg4 ;
+(BOOL)_compareSingleValueRelationshipKeys:(id)arg1 forObject:(id)arg2 againstObject:(id)arg3 propertiesToIgnore:(id)arg4 ;
+(BOOL)_compareMultiValueRelationshipKeys:(id)arg1 forObject:(id)arg2 againstObject:(id)arg3 propertiesToIgnore:(id)arg4 ;
+(BOOL)_compareMultiValueRelationshipKeys:(id)arg1 forObject:(id)arg2 againstObject:(id)arg3 propertiesToIgnore:(id)arg4 ;
+(BOOL)_compareNonRelationshipKeys:(id)arg1 forObject:(id)arg2 againstObject:(id)arg3 propertiesToIgnore:(id)arg4 ;
+(BOOL)_compareSingleValueRelationshipKey:(id)arg1 forObject:(id)arg2 againstObject:(id)arg3 propertiesToIgnore:(id)arg4 ;
+(BOOL)_compareMutliValueRelationshipKey:(id)arg1 forObject:(id)arg2 againstObject:(id)arg3 propertiesToIgnore:(id)arg4 ;
+(BOOL)_compareRelationshipObject1:(id)arg1 againstRelationshipObject2:(id)arg2 propertiesToIgnore:(id)arg3 ;
+(BOOL)isMeltedAndNotWeakRelationshipObject:(id)arg1 forKey:(id)arg2 ;
+(BOOL)isWeakRelationObject:(id)arg1 forKey:(id)arg2 ;
+(id)propertiesUnavailableForPartialObjects;
+(id)knownDerivedAndSingleValueRelationshipKeys;
+(BOOL)_compareMultiValueRelationshipKey:(id)arg1 forObject:(id)arg2 againstObject:(id)arg3 propertiesToIgnore:(id)arg4 ;
+(id)knownSummaryKeys;
+(Class)meltedClass;
+(BOOL)canonicalizedEqualityTestValue1:(id)arg1 value2:(id)arg2 key:(id)arg3 object1:(id)arg4 object2:(id)arg5 ;
+(id)knownRelationshipWeakKeys;
+(id)knownDerivedRelationshipKeys;
-(BOOL)refresh;
-(NSString *)semanticIdentifier;
-(EKEventStore *)eventStore;
-(BOOL)isNew;
-(NSMutableDictionary *)_cachedValues;
-(void)setCachedValue:(id)arg1 forKey:(id)arg2 ;
-(BOOL)isSaved;
-(void)_sharedInit;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(EKChangeSet *)changeSet;
-(id)_convertBackingObjectsWithPath:(id)arg1 updateBackingObjects:(BOOL)arg2 allChangedBackingObjects:(id)arg3 eventStore:(id)arg4 updatedBackingObjectProvider:(id)arg5 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setBackingObject:(EKPersistentObject *)arg1 ;
-(EKPersistentObject *)backingObject;
-(id)initWithObject:(id)arg1 ;
-(BOOL)_isNew;
-(void)rebase;
-(id)objectID;
-(id)duplicate;
-(BOOL)_resetIfBackingObjectIsOfClass:(Class)arg1 fetchResetFrozenObjectBlock:(/*^block*/id)arg2 ;
-(BOOL)isUndeleted;
-(BOOL)_reset;
-(void)reset;
-(void)addChanges:(id)arg1 ;
-(id)privacyDescription;
-(BOOL)hasUnsavedChangesInKeys:(id)arg1 ;
-(void)clearCachedValuesForKeys:(id)arg1 ;
-(id)cachedValueForKey:(id)arg1 expectingCachedValue:(id)arg2 forMasterKey:(id)arg3 relatedKeys:(id)arg4 populateBlock:(/*^block*/id)arg5 ;
-(void)refetch;
-(void)setChangeSet:(EKChangeSet *)arg1 ;
-(void)addChangesFromObject:(id)arg1 keep:(id)arg2 ;
-(void)addChangesFromObject:(id)arg1 except:(id)arg2 ;
-(int)rowID;
-(void)emptyMeltedCacheForKeys:(id)arg1 ;
-(void)_resetAfterUpdatingChangeSetOrBackingObject;
-(id)init;
-(id)changedKeys;
-(NSString *)uniqueIdentifier;
-(Class)frozenClass;
-(id)_readWriteLock;
-(void)_performWithReadLock:(/*^block*/id)arg1 ;
-(void)_performWithWriteLock:(/*^block*/id)arg1 ;
-(BOOL)validateWithOwner:(id)arg1 error:(id*)arg2 ;
-(void)_resetWithFrozenObject:(id)arg1 ;
-(unsigned long long)_cachedMeltedObjectsCount;
-(BOOL)hasUnsavedChangesIgnoreKeys:(id)arg1 ;
-(BOOL)_hasChangeHelperInKeys:(id)arg1 ignoreKeys:(id)arg2 checkUnsaved:(BOOL)arg3 ;
-(BOOL)_hasUnsavedChangesInKeys:(id)arg1 ignoreKeys:(id)arg2 ;
-(void)updateAfterApplyingChanges:(id)arg1 ;
-(BOOL)_hasChangesForKey:(id)arg1 checkUnsaved:(BOOL)arg2 ;
-(id)_singleRelationshipKeysToCheckForChanges;
-(id)_multiRelationshipKeysToCheckForChanges;
-(void)_addChangesFromObject:(id)arg1 except:(id)arg2 keep:(id)arg3 copyingBackingObjects:(BOOL)arg4 ;
-(void)_addChanges:(id)arg1 copyingBackingObjects:(BOOL)arg2 ;
-(void)addChangesFromObject:(id)arg1 ;
-(void)clearCachedValueForKey:(id)arg1 ;
-(void)addMultiChangedObjectValues:(id)arg1 forKey:(id)arg2 ;
-(void)removeMultiChangedObjectValues:(id)arg1 forKey:(id)arg2 ;
-(id)multiChangedObjectValuesForKey:(id)arg1 ;
-(void)_addCachedMeltedObject:(id)arg1 forMultiValueKey:(id)arg2 ;
-(void)updateMultiValueCacheForChangeSet:(id)arg1 preservingExistingAdds:(BOOL)arg2 ;
-(void)_applyDefinedAfterFirstSaveFrom:(id)arg1 ;
-(void)_applyKnownImmutableValuesFrom:(id)arg1 ;
-(void)_removeCachedMeltedObject:(id)arg1 forMultiValueKey:(id)arg2 ;
-(void)_updateCachedMeltedObjectSetForMultiValueKey:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)removeMultiChangedObjectValue:(id)arg1 forKey:(id)arg2 ;
-(void)_resetMeltedCache;
-(id)frozenOrMeltedCachedSingleRelationObjectForKey:(id)arg1 ;
-(void)replaceMultiChangedObjectValuesWithObjectValues:(id)arg1 forKey:(id)arg2 ;
-(id)singleChangedValueForKey:(id)arg1 ;
-(void)setSingleChangedValue:(id)arg1 forKey:(id)arg2 ;
-(id)cachedValueForKey:(id)arg1 populateBlock:(/*^block*/id)arg2 ;
-(void)updateMeltedCacheForChangeSet:(id)arg1 ;
-(id)_changeSetForDiff:(id)arg1 ;
-(id)backingObjectOfChildObject:(id)arg1 withRelationshipKey:(id)arg2 ;
-(void)emptyMeltedCache;
-(void)_cachedMeltedChildIdentifierToParentMap:(id)arg1 ;
-(unsigned long long)meltedAndCachedMultiRelationCountForKey:(id)arg1 ;
-(id)inverseObjectWithObject:(id)arg1 diff:(id*)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithPersistentObject:(id)arg1 ;
-(EKPersistentObject *)persistentObject;
-(id)_copyWithoutChangesInZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 comparingKeys:(id)arg2 compareImmutableKeys:(BOOL)arg3 ignoringProperties:(id)arg4 ;
-(void)markAsSaved;
-(id)frozenObject;
-(BOOL)revert;
-(BOOL)isPropertyUnavailable:(id)arg1 ;
-(BOOL)isFrozen;
-(BOOL)isEqual:(id)arg1 ignoringProperties:(id)arg2 ;
-(void)setPersistentObject:(EKPersistentObject *)arg1 ;
-(BOOL)existsInStore;
-(void)rebaseSkippingRelationProperties:(id)arg1 ;
-(void)_initChangeSetIfNone;
-(void)addMultiChangedObjectValue:(id)arg1 forKey:(id)arg2 ;
-(BOOL)_isPropertyUnavailable:(id)arg1 convertToFullObjectIfUnavailable:(BOOL)arg2 ;
-(id)cachedValueForKey:(id)arg1 ;
-(void)addChangesFromObject:(id)arg1 copyingBackingObjects:(BOOL)arg2 ;
-(id)initWithObjectForCopy:(id)arg1 ;
-(NSDictionary *)additionalFrozenProperties;
-(BOOL)_resetCommon;
-(void)setAdditionalFrozenProperties:(NSDictionary *)arg1 ;
-(id)meltedAndCachedMultiRelationObjectsForKey:(id)arg1 ;
-(void)_rollbackCommon;
-(id)_recursiveSnapshotCopyWithPropertyAccessor:(/*^block*/id)arg1 recurseOnWeakRelations:(BOOL)arg2 ;
-(id)meltedAndCachedSingleRelationObjectForKey:(id)arg1 ;
-(void)setCachedMeltedObject:(id)arg1 forSingleValueKey:(id)arg2 ;
-(void)setCachedMeltedObjects:(id)arg1 forMultiValueKey:(id)arg2 ;
-(BOOL)_refreshCommon;
-(id)_previousValueForKey:(id)arg1 ;
-(void)_markAsNewCommon;
-(void)_markAsNotNewCommon;
-(void)_markAsDeletedCommon;
-(void)_markAsSavedCommon;
-(void)_markAsUndeletedCommon;
-(void)_markAsCommittedCommon;
-(void)markAsCommitted;
-(void)_performBlockOnOwnedCachedRelatedObjects:(/*^block*/id)arg1 ;
-(void)_resetInternalState;
-(id)cachedMeltedObjectForSingleValueKey:(id)arg1 ;
-(id)cachedMeltedObjectsForMultiValueKey:(id)arg1 ;
-(BOOL)_hasChangesForKey:(id)arg1 ;
-(void)_updatePersistentValueForKey:(id)arg1 ;
-(id)_propertyValueForKey:(id)arg1 ;
-(void)updatePersistentObject;
-(void)addCoCommitObject:(id)arg1 ;
-(void)updatePersistentObjectSkippingProperties:(id)arg1 ;
-(id)existingMeltedObject;
-(BOOL)isCompletelyEqual:(id)arg1 ;
-(BOOL)isPartialObject;
-(BOOL)canBeConvertedToFullObject;
-(NSDictionary *)preFrozenRelationshipObjects;
-(id)previouslySavedObject;
-(id)committedCopy;
-(id)snapshotCopy;
-(id)committedValueForKey:(id)arg1 ;
-(void)markAsNotNew;
-(void)markAsDeleted;
-(void)markAsUndeleted;
-(NSMutableDictionary *)_cachedMeltedObjects;
-(BOOL)validate:(id*)arg1 ;
-(void)updatePersistentValueForKeyIfNeeded:(id)arg1 ;
-(void)insertPersistentObjectIfNeeded;
-(void)deletePersistentObject;
-(void)set_cachedValues:(NSMutableDictionary *)arg1 ;
-(void)set_cachedMeltedObjects:(NSMutableDictionary *)arg1 ;
-(EKObjectValidationContext *)_validationContext;
-(void)set_validationContext:(EKObjectValidationContext *)arg1 ;
-(id)meltedObjectInStore:(id)arg1 ;
-(id)prepareReminderKitObjectForSaveWithUpdatedBackingObjectProvider:(id)arg1 ;
-(id)cachedMeltedChildIdentifierToParentMap;
-(void)applyChanges:(id)arg1 ;
-(BOOL)_refreshable;
-(NSString *)specificIdentifier;
-(BOOL)hasUnsavedChanges;
-(id)diffWithObject:(id)arg1 ;
-(void)setEventStore:(EKEventStore *)arg1 ;
-(id)_basicSummaryWithDepth:(long long)arg1 ;
-(void)_addSummaryWithDepth:(long long)arg1 toMutableString:(id)arg2 indentFirstLine:(BOOL)arg3 ;
-(id)_summaryWithDepth:(long long)arg1 ;
-(unsigned long long)hash;
-(BOOL)_hasChanges;
-(void)updateMeltedAndCachedSingleRelationObject:(id)arg1 forKey:(id)arg2 frozenClass:(Class)arg3 ;
-(void)updateMeltedAndCachedMultiRelationObjects:(id)arg1 forKey:(id)arg2 ;
-(void)addCachedMeltedObject:(id)arg1 forMultiValueKey:(id)arg2 ;
-(void)removeCachedMeltedObject:(id)arg1 forMultiValueKey:(id)arg2 ;
-(BOOL)_isOnlyChangedKey:(id)arg1 ;
-(BOOL)isDeleted;
-(BOOL)_areOnlyChangedKeys:(id)arg1 ;
-(void)emptyMeltedCacheForKey:(id)arg1 ;
-(void)markAsNew;
-(BOOL)hasChanges;
-(void)rollback;
@end

