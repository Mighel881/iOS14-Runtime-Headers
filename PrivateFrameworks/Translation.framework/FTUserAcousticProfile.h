/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:38:15 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/Translation.framework/Translation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Translation/Translation-Structs.h>
#import <libobjc.A.dylib/FLTBFBufferAccessor.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableDictionary, NSData, NSString;

@interface FTUserAcousticProfile : NSObject <FLTBFBufferAccessor, NSCopying> {

	NSMutableDictionary* _storage;
	NSData* _data;
	const UserAcousticProfile* _root;

}

@property (nonatomic,readonly) NSString * acoustic_profile_version; 
@property (nonatomic,readonly) NSData * acoustic_profile_blob; 
@property (nonatomic,readonly) NSString * profile_checksum; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)profile_checksum;
-(NSData *)acoustic_profile_blob;
-(NSString *)acoustic_profile_version;
-(void)acoustic_profile_blob:(/*^block*/id)arg1 ;
-(id)initWithFlatbuffData:(id)arg1 root:(const UserAcousticProfile*)arg2 verify:(BOOL)arg3 ;
-(Offset<siri::speech::schema_fb::UserAcousticProfile>)addObjectToBuffer:(FlatBufferBuilder*)arg1 ;
-(id)flatbuffData;
-(id)initWithFlatbuffData:(id)arg1 ;
-(id)initAndVerifyWithFlatbuffData:(id)arg1 ;
-(id)initWithFlatbuffData:(id)arg1 root:(const UserAcousticProfile*)arg2 ;
@end
