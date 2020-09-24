/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:41:19 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AuthKit.framework/AuthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AuthKit/AuthKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSLock, NSString, NSNumber, NSLocale, NSData;

@interface AKDevice : NSObject <NSSecureCoding, NSCopying> {

	os_unfair_lock_s _unfairLock;
	CTServerConnectionRef _telephonyConnectionRef;
	NSLock* _telephonyLock;
	BOOL _shouldUpdateUniqueDeviceIdentifier;
	BOOL _shouldUpdateServerFriendlyDescription;
	BOOL _shouldUpdateColor;
	BOOL _shouldUpdateEnclosureColor;
	BOOL _shouldUpdateCoverGlassColor;
	BOOL _shouldUpdateHousingColor;
	BOOL _shouldUpdateBackingColor;
	BOOL _shouldUpdateLocale;
	BOOL _shouldUpdateROMAddress;
	BOOL _shouldUpdateMLBSerialNumber;
	BOOL _shouldUpdateModelNumber;
	NSString* _uniqueDeviceIdentifier;
	NSString* _serverFriendlyDescription;
	NSString* _color;
	NSString* _enclosureColor;
	NSNumber* _coverGlassColor;
	NSNumber* _housingColor;
	NSNumber* _backingColor;
	NSLocale* _locale;
	NSString* _ROMAddress;
	NSString* _MLBSerialNumber;
	NSString* _modelNumber;
	unsigned long long _linkType;

}

@property (readonly) NSString * serialNumber; 
@property (readonly) NSString * userChosenName; 
@property (readonly) NSString * userFullName; 
@property (readonly) NSString * internationalMobileEquipmentIdentity; 
@property (readonly) BOOL isProtectedWithPasscode; 
@property (readonly) BOOL isBiometricAuthCapable; 
@property (readonly) BOOL isFaceIDCapable; 
@property (readonly) BOOL isUnlocked; 
@property (readonly) BOOL isInCircle; 
@property (readonly) NSString * phoneNumber; 
@property (readonly) NSString * mobileEquipmentIdentifier; 
@property (readonly) NSString * integratedCircuitCardIdentifier; 
@property (readonly) BOOL isInternalBuild; 
@property (readonly) BOOL isMultiUserMode; 
@property (readonly) NSData * serializedData; 
@property (nonatomic,copy) NSString * serverFriendlyDescription;                   //@synthesize serverFriendlyDescription=_serverFriendlyDescription - In the implementation block
@property (nonatomic,copy) NSString * uniqueDeviceIdentifier;                      //@synthesize uniqueDeviceIdentifier=_uniqueDeviceIdentifier - In the implementation block
@property (nonatomic,copy) NSString * color;                                       //@synthesize color=_color - In the implementation block
@property (nonatomic,copy) NSString * enclosureColor;                              //@synthesize enclosureColor=_enclosureColor - In the implementation block
@property (nonatomic,copy) NSNumber * coverGlassColor;                             //@synthesize coverGlassColor=_coverGlassColor - In the implementation block
@property (nonatomic,copy) NSNumber * housingColor;                                //@synthesize housingColor=_housingColor - In the implementation block
@property (nonatomic,copy) NSNumber * backingColor;                                //@synthesize backingColor=_backingColor - In the implementation block
@property (nonatomic,copy) NSLocale * locale;                                      //@synthesize locale=_locale - In the implementation block
@property (nonatomic,copy) NSString * MLBSerialNumber;                             //@synthesize MLBSerialNumber=_MLBSerialNumber - In the implementation block
@property (nonatomic,copy) NSString * ROMAddress;                                  //@synthesize ROMAddress=_ROMAddress - In the implementation block
@property (nonatomic,copy) NSString * modelNumber;                                 //@synthesize modelNumber=_modelNumber - In the implementation block
@property (setter=setLinkType:) unsigned long long linkType;                       //@synthesize linkType=_linkType - In the implementation block
@property (readonly) NSString * localUserUUID; 
+(id)deviceWithSerializedData:(id)arg1 ;
+(id)_generateServerFriendlyDescriptionForPairedDevice:(id)arg1 ;
+(BOOL)supportsSecureCoding;
+(id)_osVersion;
+(id)activeIDSPeerDevice;
+(id)deviceSpecificLocalizedStringWithKey:(id)arg1 ;
+(id)systemContainerURL;
+(id)systemContainerCacheURL;
+(id)_hardwareModel;
+(id)currentDevice;
+(id)_osName;
+(id)_buildNumber;
+(long long)currentDeviceAuthenticationMode;
-(BOOL)isInternalBuild;
-(NSString *)userChosenName;
-(id)_volumeGroupUUID;
-(NSString *)phoneNumber;
-(NSString *)serialNumber;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setLinkType:(unsigned long long)arg1 ;
-(void)setModelNumber:(NSString *)arg1 ;
-(void)setLocale:(NSLocale *)arg1 ;
-(NSNumber *)housingColor;
-(void)_setShouldUpdateToValue:(BOOL)arg1 ;
-(NSString *)modelNumber;
-(void)setHousingColor:(NSNumber *)arg1 ;
-(NSString *)internationalMobileEquipmentIdentity;
-(void)dealloc;
-(NSLocale *)locale;
-(NSString *)enclosureColor;
-(BOOL)isBiometricAuthCapable;
-(NSString *)localUserUUID;
-(BOOL)isInCircle;
-(NSString *)ROMAddress;
-(NSString *)mobileEquipmentIdentifier;
-(NSData *)serializedData;
-(BOOL)isProtectedWithPasscode;
-(void)setBackingColor:(NSNumber *)arg1 ;
-(id)init;
-(NSString *)integratedCircuitCardIdentifier;
-(unsigned long long)linkType;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)userFullName;
-(void)setEnclosureColor:(NSString *)arg1 ;
-(CTServerConnectionRef)_telephonyConnection;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isUnlocked;
-(NSString *)serverFriendlyDescription;
-(NSString *)color;
-(NSNumber *)backingColor;
-(void)setUniqueDeviceIdentifier:(NSString *)arg1 ;
-(void)setCoverGlassColor:(NSNumber *)arg1 ;
-(void)setColor:(NSString *)arg1 ;
-(NSString *)uniqueDeviceIdentifier;
-(void)setROMAddress:(NSString *)arg1 ;
-(void)setMLBSerialNumber:(NSString *)arg1 ;
-(BOOL)isMultiUserMode;
-(BOOL)isFaceIDCapable;
-(id)description;
-(NSString *)MLBSerialNumber;
-(void)setServerFriendlyDescription:(NSString *)arg1 ;
-(NSNumber *)coverGlassColor;
@end
