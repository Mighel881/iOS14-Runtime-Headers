/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:38:40 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/ATXProtoBufWrapper.h>

@class NSMutableOrderedSet, NSMutableDictionary, ATXPredictionContext, NSUUID;

@interface ATXBiomeUIContext : NSObject <NSSecureCoding, ATXProtoBufWrapper> {

	NSMutableOrderedSet* _cacheUpdateOrdering;
	NSMutableDictionary* _blendingModelCacheUpdates;
	NSMutableDictionary* _clientModelCacheUpdates;
	ATXPredictionContext* _context;
	NSUUID* _pinnedBlendingModelUICacheUpdateUUID;

}

@property (nonatomic,readonly) NSMutableOrderedSet * cacheUpdateOrdering;                    //@synthesize cacheUpdateOrdering=_cacheUpdateOrdering - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * blendingModelCacheUpdates;              //@synthesize blendingModelCacheUpdates=_blendingModelCacheUpdates - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * clientModelCacheUpdates;                //@synthesize clientModelCacheUpdates=_clientModelCacheUpdates - In the implementation block
@property (nonatomic,readonly) ATXPredictionContext * context;                               //@synthesize context=_context - In the implementation block
@property (nonatomic,readonly) NSUUID * pinnedBlendingModelUICacheUpdateUUID;                //@synthesize pinnedBlendingModelUICacheUpdateUUID=_pinnedBlendingModelUICacheUpdateUUID - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)encodeAsProto;
-(id)_initWithCoder:(id)arg1 ;
-(id)initWithProto:(id)arg1 ;
-(id)proto;
-(BOOL)checkAndReportDecodingFailureIfNeededForid:(id)arg1 key:(id)arg2 coder:(id)arg3 errorDomain:(id)arg4 errorCode:(long long)arg5 ;
-(void)addContext:(id)arg1 ;
-(id)initWithProtoData:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(ATXPredictionContext *)context;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithContext:(id)arg1 ;
-(void)addClientModelCacheUpdate:(id)arg1 ;
-(void)addBlendingModelUICacheUpdate:(id)arg1 ;
-(void)pinBlendingModelUICacheUpdateWithUUID:(id)arg1 ;
-(void)clearExistingPinnedBlendingModelCache;
-(id)blendingModelUICacheUpdateForUUID:(id)arg1 ;
-(id)clientModelCacheUpdatesForBlendingModelUICacheUpdateUUID:(id)arg1 ;
-(NSMutableDictionary *)blendingModelCacheUpdates;
-(NSMutableDictionary *)clientModelCacheUpdates;
-(NSUUID *)pinnedBlendingModelUICacheUpdateUUID;
-(id)initWithBlendingModelCacheUpdateOrdering:(id)arg1 blendingModelCacheUpdates:(id)arg2 clientModelCacheUpdates:(id)arg3 context:(id)arg4 pinnedBlendingModelUICacheUpdateUUID:(id)arg5 ;
-(void)pruneBlendingModelCachesOverMaxNum;
-(void)pruneUnreferencedClientModelCachesIfPossible;
-(id)contextStateVerboseStringRepresentation;
-(void)_pruneBlendingModelCachesOlderThanUUID:(id)arg1 ;
-(void)_validateCacheUpdateOrderingAndCacheDictMapping;
-(void)pruneContextStateOlderThanBlendingUUID:(id)arg1 ;
-(id)_referencedClientModelCaches;
-(BOOL)isEqualToATXBiomeUIContext:(id)arg1 ;
-(NSMutableOrderedSet *)cacheUpdateOrdering;
@end

