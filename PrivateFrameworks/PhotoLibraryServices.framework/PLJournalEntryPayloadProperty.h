/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:46:30 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSSet, NSDictionary;

@interface PLJournalEntryPayloadProperty : NSObject {

	BOOL _requiresConversion;
	BOOL _isUUIDKey;
	BOOL _shouldPrefetchRelationship;
	BOOL _isToManySubRelationship;
	NSString* _key;
	unsigned long long _type;
	NSSet* _relatedEntityPropertyNames;
	NSDictionary* _subRelationshipProperties;
	PLJournalEntryPayloadProperty* _parentProperty;

}

@property (nonatomic,retain) PLJournalEntryPayloadProperty * parentProperty;              //@synthesize parentProperty=_parentProperty - In the implementation block
@property (nonatomic,readonly) NSString * key;                                            //@synthesize key=_key - In the implementation block
@property (nonatomic,readonly) unsigned long long type;                                   //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) BOOL requiresConversion; 
@property (nonatomic,readonly) BOOL isUUIDKey;                                            //@synthesize isUUIDKey=_isUUIDKey - In the implementation block
@property (nonatomic,readonly) NSSet * relatedEntityPropertyNames;                        //@synthesize relatedEntityPropertyNames=_relatedEntityPropertyNames - In the implementation block
@property (nonatomic,readonly) NSDictionary * subRelationshipProperties;                  //@synthesize subRelationshipProperties=_subRelationshipProperties - In the implementation block
@property (nonatomic,readonly) BOOL shouldPrefetchRelationship;                           //@synthesize shouldPrefetchRelationship=_shouldPrefetchRelationship - In the implementation block
@property (nonatomic,readonly) BOOL isToManySubRelationship;                              //@synthesize isToManySubRelationship=_isToManySubRelationship - In the implementation block
@property (nonatomic,readonly) BOOL isPropertyListSupportedType; 
+(id)payloadPropertyWithKey:(id)arg1 andType:(unsigned long long)arg2 requiresConversion:(BOOL)arg3 ;
+(id)payloadPropertyWithKey:(id)arg1 relatedEntityPropertyNames:(id)arg2 shouldPrefetchRelationship:(BOOL)arg3 ;
+(id)payloadPropertyWithKey:(id)arg1 andType:(unsigned long long)arg2 ;
+(id)payloadPropertyForUUID;
+(id)payloadPropertyWithKey:(id)arg1 subRelationshipProperties:(id)arg2 isToMany:(BOOL)arg3 ;
-(NSString *)key;
-(unsigned long long)type;
-(BOOL)isEqualToKey:(id)arg1 ;
-(BOOL)isUUIDKey;
-(BOOL)requiresConversion;
-(void)setParentProperty:(PLJournalEntryPayloadProperty *)arg1 ;
-(PLJournalEntryPayloadProperty *)parentProperty;
-(BOOL)isToManySubRelationship;
-(NSDictionary *)subRelationshipProperties;
-(BOOL)isPropertyListSupportedType;
-(BOOL)shouldPrefetchRelationship;
-(id)initWithKey:(id)arg1 andType:(unsigned long long)arg2 subRelationshipProperties:(id)arg3 requiresConversion:(BOOL)arg4 relatedEntityPropertyNames:(id)arg5 isUUIDKey:(BOOL)arg6 isToManySubRelationship:(BOOL)arg7 shouldPrefetchRelationship:(BOOL)arg8 ;
-(id)description;
-(NSSet *)relatedEntityPropertyNames;
@end
