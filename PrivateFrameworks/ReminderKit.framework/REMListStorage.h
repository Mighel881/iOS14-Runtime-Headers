/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:39:31 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ReminderKit/ReminderKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/REMSortingStyleReadWriteProtocol.h>
#import <libobjc.A.dylib/REMObjectIDProviding.h>
#import <libobjc.A.dylib/REMExternalSyncMetadataWritableProviding.h>

@class NSOrderedSet, NSString, REMObjectID, REMColor, NSData, NSDictionary, REMResolutionTokenMap, NSSet, NSArray, NSDate;

@interface REMListStorage : NSObject <NSCopying, NSSecureCoding, REMSortingStyleReadWriteProtocol, REMObjectIDProviding, REMExternalSyncMetadataWritableProviding> {

	NSOrderedSet* _reminderIDsMergeableOrdering;
	unsigned long long _storeGeneration;
	unsigned long long _copyGeneration;
	BOOL _isGroup;
	BOOL _showingLargeAttachments;
	BOOL _remindersICSDisplayOrderChanged;
	BOOL _daIsEventOnlyContainer;
	BOOL _daIsReadOnly;
	BOOL _daIsImmutable;
	BOOL _daIsNotificationsCollection;
	BOOL _isPlaceholder;
	NSString* externalIdentifier;
	NSString* externalModificationTag;
	NSString* daSyncToken;
	NSString* daPushKey;
	NSString* sortingStyle;
	long long sortingDirection;
	REMObjectID* _accountID;
	REMObjectID* _objectID;
	NSString* _name;
	REMColor* _color;
	NSString* _badgeEmblem;
	REMObjectID* _parentAccountID;
	REMObjectID* _parentListID;
	NSData* _reminderIDsMergeableOrderingData;
	NSDictionary* _reminderIDsOrderingHints;
	REMResolutionTokenMap* _resolutionTokenMap;
	NSData* _resolutionTokenMapData;
	NSSet* _reminderIDsToUndelete;
	NSString* _sharedOwnerName;
	NSString* _sharedOwnerAddress;
	long long _sharingStatus;
	NSArray* _sharees;
	REMObjectID* _sharedOwnerID;
	NSDate* _lastUserAccessDate;
	NSArray* _calDAVNotifications;
	NSString* _daExternalIdentificationTag;
	NSDictionary* _daBulkRequests;
	long long _daDisplayOrder;
	NSString* _currentUserShareParticipantID;

}

@property (nonatomic,retain) REMObjectID * accountID;                                  //@synthesize accountID=_accountID - In the implementation block
@property (nonatomic,retain) REMObjectID * objectID;                                   //@synthesize objectID=_objectID - In the implementation block
@property (assign,nonatomic) BOOL isGroup;                                             //@synthesize isGroup=_isGroup - In the implementation block
@property (nonatomic,copy) NSString * name;                                            //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) REMColor * color;                                         //@synthesize color=_color - In the implementation block
@property (nonatomic,retain) NSString * badgeEmblem;                                   //@synthesize badgeEmblem=_badgeEmblem - In the implementation block
@property (assign,nonatomic) BOOL showingLargeAttachments;                             //@synthesize showingLargeAttachments=_showingLargeAttachments - In the implementation block
@property (nonatomic,retain) REMObjectID * parentAccountID;                            //@synthesize parentAccountID=_parentAccountID - In the implementation block
@property (nonatomic,retain) REMObjectID * parentListID;                               //@synthesize parentListID=_parentListID - In the implementation block
@property (nonatomic,readonly) NSString * displayName; 
@property (nonatomic,retain) NSOrderedSet * reminderIDsMergeableOrdering; 
@property (nonatomic,retain) NSData * reminderIDsMergeableOrderingData;                //@synthesize reminderIDsMergeableOrderingData=_reminderIDsMergeableOrderingData - In the implementation block
@property (nonatomic,retain) NSDictionary * reminderIDsOrderingHints;                  //@synthesize reminderIDsOrderingHints=_reminderIDsOrderingHints - In the implementation block
@property (nonatomic,retain) REMResolutionTokenMap * resolutionTokenMap;               //@synthesize resolutionTokenMap=_resolutionTokenMap - In the implementation block
@property (nonatomic,retain) NSData * resolutionTokenMapData;                          //@synthesize resolutionTokenMapData=_resolutionTokenMapData - In the implementation block
@property (nonatomic,retain) NSSet * reminderIDsToUndelete;                            //@synthesize reminderIDsToUndelete=_reminderIDsToUndelete - In the implementation block
@property (assign,nonatomic) BOOL remindersICSDisplayOrderChanged;                     //@synthesize remindersICSDisplayOrderChanged=_remindersICSDisplayOrderChanged - In the implementation block
@property (nonatomic,copy) NSString * sharedOwnerName;                                 //@synthesize sharedOwnerName=_sharedOwnerName - In the implementation block
@property (nonatomic,copy) NSString * sharedOwnerAddress;                              //@synthesize sharedOwnerAddress=_sharedOwnerAddress - In the implementation block
@property (assign,nonatomic) long long sharingStatus;                                  //@synthesize sharingStatus=_sharingStatus - In the implementation block
@property (nonatomic,retain) NSArray * sharees;                                        //@synthesize sharees=_sharees - In the implementation block
@property (nonatomic,retain) REMObjectID * sharedOwnerID;                              //@synthesize sharedOwnerID=_sharedOwnerID - In the implementation block
@property (nonatomic,copy) NSDate * lastUserAccessDate;                                //@synthesize lastUserAccessDate=_lastUserAccessDate - In the implementation block
@property (nonatomic,retain) NSArray * calDAVNotifications;                            //@synthesize calDAVNotifications=_calDAVNotifications - In the implementation block
@property (nonatomic,retain) NSString * daExternalIdentificationTag;                   //@synthesize daExternalIdentificationTag=_daExternalIdentificationTag - In the implementation block
@property (nonatomic,retain) NSDictionary * daBulkRequests;                            //@synthesize daBulkRequests=_daBulkRequests - In the implementation block
@property (assign,nonatomic) long long daDisplayOrder;                                 //@synthesize daDisplayOrder=_daDisplayOrder - In the implementation block
@property (assign,nonatomic) BOOL daIsEventOnlyContainer;                              //@synthesize daIsEventOnlyContainer=_daIsEventOnlyContainer - In the implementation block
@property (assign,nonatomic) BOOL daIsReadOnly;                                        //@synthesize daIsReadOnly=_daIsReadOnly - In the implementation block
@property (assign,nonatomic) BOOL daIsImmutable;                                       //@synthesize daIsImmutable=_daIsImmutable - In the implementation block
@property (assign,nonatomic) BOOL daIsNotificationsCollection;                         //@synthesize daIsNotificationsCollection=_daIsNotificationsCollection - In the implementation block
@property (assign,nonatomic) BOOL isPlaceholder;                                       //@synthesize isPlaceholder=_isPlaceholder - In the implementation block
@property (nonatomic,copy) NSString * currentUserShareParticipantID;                   //@synthesize currentUserShareParticipantID=_currentUserShareParticipantID - In the implementation block
@property (nonatomic,copy) NSString * sortingStyle; 
@property (assign,nonatomic) long long sortingDirection; 
@property (nonatomic,readonly) REMObjectID * remObjectID; 
@property (nonatomic,copy) NSString * externalIdentifier; 
@property (nonatomic,copy) NSString * externalModificationTag; 
@property (nonatomic,copy) NSString * daSyncToken; 
@property (nonatomic,copy) NSString * daPushKey; 
+(BOOL)supportsSecureCoding;
+(BOOL)_forceDisableFullRemindersSorting;
+(id)objectIDWithUUID:(id)arg1 ;
+(id)newObjectID;
+(id)cdEntityName;
+(void)set_forceDisableFullRemindersSorting:(BOOL)arg1 ;
+(id)reminderIDsMergeableOrderingFromReminderIDUUIDStringsJSONData:(id)arg1 error:(id*)arg2 ;
+(id)reminderIDUUIDStringsJSONDataFromReminderIDsMergeableOrdering:(id)arg1 error:(id*)arg2 ;
-(NSArray *)sharees;
-(void)setResolutionTokenMapData:(NSData *)arg1 ;
-(void)setParentListID:(REMObjectID *)arg1 ;
-(void)setResolutionTokenMap:(REMResolutionTokenMap *)arg1 ;
-(REMResolutionTokenMap *)resolutionTokenMap;
-(void)setSharingStatus:(long long)arg1 ;
-(NSString *)sortingStyle;
-(void)setReminderIDsMergeableOrderingData:(NSData *)arg1 ;
-(void)setSortingDirection:(long long)arg1 ;
-(void)setStoreGenerationIfNeeded:(unsigned long long)arg1 ;
-(unsigned long long)storeGeneration;
-(void)setDaExternalIdentificationTag:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setReminderIDsMergeableOrdering:(NSOrderedSet *)arg1 ;
-(NSData *)resolutionTokenMapData;
-(void)setSortingStyle:(NSString *)arg1 ;
-(void)setExternalIdentifier:(NSString *)arg1 ;
-(void)setCurrentUserShareParticipantID:(NSString *)arg1 ;
-(NSString *)displayName;
-(long long)sortingDirection;
-(void)setCalDAVNotifications:(NSArray *)arg1 ;
-(id)cdKeyToStorageKeyMap;
-(REMObjectID *)remObjectID;
-(BOOL)isGroup;
-(long long)daDisplayOrder;
-(NSString *)daExternalIdentificationTag;
-(void)setDaBulkRequests:(NSDictionary *)arg1 ;
-(void)setParentAccountID:(REMObjectID *)arg1 ;
-(NSString *)daPushKey;
-(void)setDaDisplayOrder:(long long)arg1 ;
-(BOOL)daIsImmutable;
-(NSString *)externalIdentifier;
-(REMObjectID *)objectID;
-(BOOL)daIsReadOnly;
-(id)debugDescription;
-(BOOL)isPlaceholder;
-(NSDictionary *)reminderIDsOrderingHints;
-(void)setIsPlaceholder:(BOOL)arg1 ;
-(void)setSharedOwnerID:(REMObjectID *)arg1 ;
-(NSDate *)lastUserAccessDate;
-(void)setShowingLargeAttachments:(BOOL)arg1 ;
-(void)setObjectID:(REMObjectID *)arg1 ;
-(REMObjectID *)parentListID;
-(void)setReminderIDsOrderingHints:(NSDictionary *)arg1 ;
-(NSString *)sharedOwnerName;
-(id)initWithObjectID:(id)arg1 accountID:(id)arg2 name:(id)arg3 isGroup:(BOOL)arg4 reminderIDsMergeableOrderingData:(id)arg5 ;
-(void)setSharees:(NSArray *)arg1 ;
-(void)setIsGroup:(BOOL)arg1 ;
-(NSString *)daSyncToken;
-(NSOrderedSet *)reminderIDsMergeableOrdering;
-(BOOL)hasDeserializedReminderIDsMergeableOrdering;
-(void)setRemindersICSDisplayOrderChanged:(BOOL)arg1 ;
-(void)setAccountID:(REMObjectID *)arg1 ;
-(REMObjectID *)parentAccountID;
-(void)setReminderIDsToUndelete:(NSSet *)arg1 ;
-(id)initWithObjectID:(id)arg1 accountID:(id)arg2 name:(id)arg3 ;
-(void)setSharedOwnerAddress:(NSString *)arg1 ;
-(void)setExternalModificationTag:(NSString *)arg1 ;
-(void)setDaIsNotificationsCollection:(BOOL)arg1 ;
-(void)setSharedOwnerName:(NSString *)arg1 ;
-(NSDictionary *)daBulkRequests;
-(BOOL)isEqual:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)sharedOwnerAddress;
-(void)setDaIsEventOnlyContainer:(BOOL)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(REMObjectID *)accountID;
-(void)setDaIsReadOnly:(BOOL)arg1 ;
-(NSString *)externalModificationTag;
-(NSSet *)reminderIDsToUndelete;
-(BOOL)showingLargeAttachments;
-(REMColor *)color;
-(void)setColor:(REMColor *)arg1 ;
-(NSString *)badgeEmblem;
-(BOOL)daIsNotificationsCollection;
-(void)setLastUserAccessDate:(NSDate *)arg1 ;
-(id)ekColor;
-(unsigned long long)hash;
-(void)setDaSyncToken:(NSString *)arg1 ;
-(void)setDaPushKey:(NSString *)arg1 ;
-(void)setBadgeEmblem:(NSString *)arg1 ;
-(id)initWithObjectID:(id)arg1 accountID:(id)arg2 name:(id)arg3 isGroup:(BOOL)arg4 reminderIDsMergeableOrdering:(id)arg5 ;
-(void)setDaIsImmutable:(BOOL)arg1 ;
-(NSString *)name;
-(NSArray *)calDAVNotifications;
-(id)description;
-(BOOL)daIsEventOnlyContainer;
-(NSString *)currentUserShareParticipantID;
-(long long)sharingStatus;
-(BOOL)remindersICSDisplayOrderChanged;
-(REMObjectID *)sharedOwnerID;
-(NSData *)reminderIDsMergeableOrderingData;
@end

