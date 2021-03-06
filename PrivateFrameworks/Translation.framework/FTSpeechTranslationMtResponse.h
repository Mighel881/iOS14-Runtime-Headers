/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:38:16 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/Translation.framework/Translation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Translation/Translation-Structs.h>
#import <libobjc.A.dylib/FLTBFBufferAccessor.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableDictionary, NSData, NSString, FTTranslationLocalePair, NSArray;

@interface FTSpeechTranslationMtResponse : NSObject <FLTBFBufferAccessor, NSCopying> {

	NSMutableDictionary* _storage;
	NSData* _data;
	const SpeechTranslationMtResponse* _root;

}

@property (nonatomic,readonly) NSString * conversation_id; 
@property (nonatomic,readonly) NSString * request_id; 
@property (nonatomic,readonly) int return_code; 
@property (nonatomic,readonly) NSString * return_str; 
@property (nonatomic,readonly) FTTranslationLocalePair * translation_locale_pair; 
@property (nonatomic,readonly) NSArray * n_best_translated_phrases; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)conversation_id;
-(FTTranslationLocalePair *)translation_locale_pair;
-(id)initWithFlatbuffData:(id)arg1 root:(const SpeechTranslationMtResponse*)arg2 verify:(BOOL)arg3 ;
-(Offset<siri::speech::schema_fb::SpeechTranslationMtResponse>)addObjectToBuffer:(FlatBufferBuilder*)arg1 ;
-(id)flatbuffData;
-(id)initWithFlatbuffData:(id)arg1 ;
-(id)initAndVerifyWithFlatbuffData:(id)arg1 ;
-(id)initWithFlatbuffData:(id)arg1 root:(const SpeechTranslationMtResponse*)arg2 ;
-(NSString *)request_id;
-(int)return_code;
-(NSString *)return_str;
-(NSArray *)n_best_translated_phrases;
@end

