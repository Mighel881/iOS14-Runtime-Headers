/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:38:56 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSUUID, NSString, NSData;

@interface IDSGroupSessionActiveParticipant : NSObject {

	NSUUID* _groupUUID;
	unsigned long long _participantIdentifier;
	NSString* _participantURI;
	BOOL _isKnown;
	NSData* _participantPushToken;

}

@property (nonatomic,readonly) NSUUID * groupUUID;                                    //@synthesize groupUUID=_groupUUID - In the implementation block
@property (nonatomic,readonly) unsigned long long participantIdentifier;              //@synthesize participantIdentifier=_participantIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL isKnown;                                          //@synthesize isKnown=_isKnown - In the implementation block
@property (nonatomic,readonly) NSString * participantURI;                             //@synthesize participantURI=_participantURI - In the implementation block
@property (nonatomic,readonly) NSData * participantPushToken;                         //@synthesize participantPushToken=_participantPushToken - In the implementation block
-(id)initWithDictionaryRepresentation:(id)arg1 ;
-(id)debugDescription;
-(NSUUID *)groupUUID;
-(BOOL)isKnown;
-(id)initWithGroupUUID:(id)arg1 participantIdentifier:(unsigned long long)arg2 isKnown:(BOOL)arg3 participantURI:(id)arg4 pushToken:(id)arg5 ;
-(NSString *)participantURI;
-(NSData *)participantPushToken;
-(unsigned long long)participantIdentifier;
-(id)description;
-(id)dictionaryRepresentation;
@end

