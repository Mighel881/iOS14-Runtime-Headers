/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:41:48 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionClient.framework/AppPredictionClient
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppPredictionClient/AppPredictionClient-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSData;

@interface ATXPBHomeScreenWidgetIdentifiable : PBCodable <NSCopying> {

	NSString* _appBundleId;
	NSString* _extensionBundleId;
	NSData* _intent;
	int _size;
	NSString* _widgetKind;
	NSString* _widgetUniqueId;
	SCD_Struct_AT1 _has;

}

@property (nonatomic,readonly) BOOL hasExtensionBundleId; 
@property (nonatomic,retain) NSString * extensionBundleId;              //@synthesize extensionBundleId=_extensionBundleId - In the implementation block
@property (nonatomic,readonly) BOOL hasWidgetKind; 
@property (nonatomic,retain) NSString * widgetKind;                     //@synthesize widgetKind=_widgetKind - In the implementation block
@property (nonatomic,readonly) BOOL hasAppBundleId; 
@property (nonatomic,retain) NSString * appBundleId;                    //@synthesize appBundleId=_appBundleId - In the implementation block
@property (nonatomic,readonly) BOOL hasIntent; 
@property (nonatomic,retain) NSData * intent;                           //@synthesize intent=_intent - In the implementation block
@property (nonatomic,readonly) BOOL hasWidgetUniqueId; 
@property (nonatomic,retain) NSString * widgetUniqueId;                 //@synthesize widgetUniqueId=_widgetUniqueId - In the implementation block
@property (assign,nonatomic) BOOL hasSize; 
@property (assign,nonatomic) int size;                                  //@synthesize size=_size - In the implementation block
-(id)sizeAsString:(int)arg1 ;
-(BOOL)hasAppBundleId;
-(NSString *)extensionBundleId;
-(void)setWidgetUniqueId:(NSString *)arg1 ;
-(NSString *)widgetKind;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setIntent:(NSData *)arg1 ;
-(void)writeTo:(id)arg1 ;
-(int)StringAsSize:(id)arg1 ;
-(void)setWidgetKind:(NSString *)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(BOOL)hasWidgetKind;
-(BOOL)hasSize;
-(void)setSize:(int)arg1 ;
-(void)setExtensionBundleId:(NSString *)arg1 ;
-(NSData *)intent;
-(NSString *)widgetUniqueId;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)hasIntent;
-(void)setAppBundleId:(NSString *)arg1 ;
-(int)size;
-(NSString *)appBundleId;
-(unsigned long long)hash;
-(id)description;
-(void)setHasSize:(BOOL)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)hasWidgetUniqueId;
-(BOOL)hasExtensionBundleId;
@end

