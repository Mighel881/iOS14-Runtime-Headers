/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:38:37 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/BMStoreData.h>
#import <libobjc.A.dylib/ATXProtoBufWrapper.h>

@protocol NSSecureCodingATXProtoBufWrapper;
@class NSObject, NSDictionary, NSUUID, NSDate, NSString;

@interface ATXBlendingModelUICacheUpdate : NSObject <NSSecureCoding, BMStoreData, ATXProtoBufWrapper> {

	double _absoluteCacheCreationDate;
	unsigned char _consumerSubType;
	NSObject*<NSSecureCoding>*<ATXProtoBufWrapper> _uiCache;
	NSDictionary* _clientModelCacheUpdateUUIDs;
	NSUUID* _uuid;

}

@property (nonatomic,readonly) NSObject*<NSSecureCoding>*<ATXProtoBufWrapper> uiCache;              //@synthesize uiCache=_uiCache - In the implementation block
@property (nonatomic,readonly) unsigned char consumerSubType;                                       //@synthesize consumerSubType=_consumerSubType - In the implementation block
@property (nonatomic,readonly) NSDictionary * clientModelCacheUpdateUUIDs;                          //@synthesize clientModelCacheUpdateUUIDs=_clientModelCacheUpdateUUIDs - In the implementation block
@property (nonatomic,readonly) NSUUID * uuid;                                                       //@synthesize uuid=_uuid - In the implementation block
@property (nonatomic,readonly) NSDate * cacheCreationDate; 
@property (nonatomic,readonly) unsigned dataVersion; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)eventWithData:(id)arg1 dataVersion:(unsigned)arg2 ;
-(id)protoForBiome;
-(unsigned char)consumerSubType;
-(id)serialize;
-(id)json;
-(unsigned)dataVersion;
-(id)encodeAsProto;
-(id)_initWithCoder:(id)arg1 ;
-(id)jsonRawData;
-(id)initWithProto:(id)arg1 ;
-(id)proto;
-(NSDate *)cacheCreationDate;
-(id)clientModelCacheUpdateUUIDsDictionaryFromProto:(id)arg1 ;
-(void)setClientModelCacheUpdateUUIDsDictionaryOnProto:(id)arg1 ;
-(id)atxProactiveSuggestionWithWidgetUUIDString:(id)arg1 suggestionUUID:(id)arg2 ;
-(BOOL)checkAndReportDecodingFailureIfNeededForint:(int)arg1 key:(id)arg2 coder:(id)arg3 errorDomain:(id)arg4 errorCode:(long long)arg5 ;
-(id)encodeAsProtoForBiome;
-(BOOL)checkAndReportDecodingFailureIfNeededForid:(id)arg1 key:(id)arg2 coder:(id)arg3 errorDomain:(id)arg4 errorCode:(long long)arg5 ;
-(id)clientModelCacheUpdateUUIDsFromCacheUpdates:(id)arg1 ;
-(id)initWithProtoData:(id)arg1 ;
-(id)initWithSuggestionLayout:(id)arg1 consumerSubType:(unsigned char)arg2 clientModelCacheUpdates:(id)arg3 ;
-(NSDictionary *)clientModelCacheUpdateUUIDs;
-(NSObject*<NSSecureCoding>*<ATXProtoBufWrapper>)uiCache;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSUUID *)uuid;
-(void)setUICacheObjectOnProtoForBiome:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithUICache:(id)arg1 consumerSubType:(unsigned char)arg2 clientModelCacheUpdateUUIDs:(id)arg3 uuid:(id)arg4 cacheCreationDate:(id)arg5 ;
-(void)setUICacheObjectOnProto:(id)arg1 ;
-(id)initWithHomeScreenCachedSuggestions:(id)arg1 consumerSubType:(unsigned char)arg2 clientModelCacheUpdates:(id)arg3 ;
-(BOOL)isEqualToATXBlendingModelUICacheUpdate:(id)arg1 ;
-(unsigned long long)hash;
@end

