/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:39:37 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TelephonyUtilities/TelephonyUtilities-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/TUPubliclyAccessibleCopying.h>

@class NSDictionary, NSString, NSArray, TUCloudCallingDevice;

@interface TUCallCapabilitiesState : NSObject <NSSecureCoding, NSCopying, TUPubliclyAccessibleCopying> {

	BOOL _supportsPrimaryCalling;
	BOOL _supportsBasebandCalling;
	BOOL _supportsCellularData;
	BOOL _supportsDisplayingTelephonyCalls;
	BOOL _supportsDisplayingFaceTimeAudioCalls;
	BOOL _supportsDisplayingFaceTimeVideoCalls;
	BOOL _faceTimeAudioAvailable;
	BOOL _faceTimeVideoAvailable;
	BOOL _ctCapabilitiesValid;
	BOOL _accountsMatchForSecondaryCalling;
	BOOL _accountsSupportSecondaryCalling;
	BOOL _supportsRelayCalling;
	BOOL _relayCallingEnabled;
	BOOL _relayCallingFeaturesEnabled;
	BOOL _supportsTelephonyRelayCalling;
	BOOL _supportsFaceTimeAudioRelayCalling;
	BOOL _supportsFaceTimeVideoRelayCalling;
	BOOL _emergencyCallbackModeEnabled;
	BOOL _emergencyCallbackPossible;
	int _relayCallingAvailability;
	NSDictionary* _relayCallingDisabledForDeviceID;
	NSString* _outgoingRelayCallerID;
	NSArray* _cloudCallingDevices;
	NSDictionary* _senderIdentityCapabilitiesStateByUUID;

}

@property (assign,nonatomic) BOOL supportsPrimaryCalling;                                                          //@synthesize supportsPrimaryCalling=_supportsPrimaryCalling - In the implementation block
@property (assign,nonatomic) BOOL supportsBasebandCalling;                                                         //@synthesize supportsBasebandCalling=_supportsBasebandCalling - In the implementation block
@property (assign,nonatomic) BOOL supportsCellularData;                                                            //@synthesize supportsCellularData=_supportsCellularData - In the implementation block
@property (assign,nonatomic) BOOL supportsDisplayingTelephonyCalls;                                                //@synthesize supportsDisplayingTelephonyCalls=_supportsDisplayingTelephonyCalls - In the implementation block
@property (assign,nonatomic) BOOL supportsDisplayingFaceTimeAudioCalls;                                            //@synthesize supportsDisplayingFaceTimeAudioCalls=_supportsDisplayingFaceTimeAudioCalls - In the implementation block
@property (assign,nonatomic) BOOL supportsDisplayingFaceTimeVideoCalls;                                            //@synthesize supportsDisplayingFaceTimeVideoCalls=_supportsDisplayingFaceTimeVideoCalls - In the implementation block
@property (assign,getter=isFaceTimeAudioAvailable,nonatomic) BOOL faceTimeAudioAvailable;                          //@synthesize faceTimeAudioAvailable=_faceTimeAudioAvailable - In the implementation block
@property (assign,getter=isFaceTimeVideoAvailable,nonatomic) BOOL faceTimeVideoAvailable;                          //@synthesize faceTimeVideoAvailable=_faceTimeVideoAvailable - In the implementation block
@property (assign,getter=areCTCapabilitiesValid,nonatomic) BOOL ctCapabilitiesValid;                               //@synthesize ctCapabilitiesValid=_ctCapabilitiesValid - In the implementation block
@property (assign,nonatomic) BOOL accountsMatchForSecondaryCalling;                                                //@synthesize accountsMatchForSecondaryCalling=_accountsMatchForSecondaryCalling - In the implementation block
@property (assign,nonatomic) BOOL accountsSupportSecondaryCalling;                                                 //@synthesize accountsSupportSecondaryCalling=_accountsSupportSecondaryCalling - In the implementation block
@property (assign,nonatomic) BOOL supportsRelayCalling;                                                            //@synthesize supportsRelayCalling=_supportsRelayCalling - In the implementation block
@property (assign,getter=isRelayCallingEnabled,nonatomic) BOOL relayCallingEnabled;                                //@synthesize relayCallingEnabled=_relayCallingEnabled - In the implementation block
@property (assign,getter=areRelayCallingFeaturesEnabled,nonatomic) BOOL relayCallingFeaturesEnabled;               //@synthesize relayCallingFeaturesEnabled=_relayCallingFeaturesEnabled - In the implementation block
@property (assign,nonatomic) int relayCallingAvailability;                                                         //@synthesize relayCallingAvailability=_relayCallingAvailability - In the implementation block
@property (nonatomic,copy) NSDictionary * relayCallingDisabledForDeviceID;                                         //@synthesize relayCallingDisabledForDeviceID=_relayCallingDisabledForDeviceID - In the implementation block
@property (nonatomic,copy) NSString * outgoingRelayCallerID;                                                       //@synthesize outgoingRelayCallerID=_outgoingRelayCallerID - In the implementation block
@property (assign,nonatomic) BOOL supportsTelephonyRelayCalling;                                                   //@synthesize supportsTelephonyRelayCalling=_supportsTelephonyRelayCalling - In the implementation block
@property (assign,nonatomic) BOOL supportsFaceTimeAudioRelayCalling;                                               //@synthesize supportsFaceTimeAudioRelayCalling=_supportsFaceTimeAudioRelayCalling - In the implementation block
@property (assign,nonatomic) BOOL supportsFaceTimeVideoRelayCalling;                                               //@synthesize supportsFaceTimeVideoRelayCalling=_supportsFaceTimeVideoRelayCalling - In the implementation block
@property (nonatomic,copy) NSArray * cloudCallingDevices;                                                          //@synthesize cloudCallingDevices=_cloudCallingDevices - In the implementation block
@property (nonatomic,readonly) TUCloudCallingDevice * defaultPairedDevice; 
@property (assign,getter=isEmergencyCallbackModeEnabled,nonatomic) BOOL emergencyCallbackModeEnabled;              //@synthesize emergencyCallbackModeEnabled=_emergencyCallbackModeEnabled - In the implementation block
@property (assign,getter=isEmergencyCallbackPossible,nonatomic) BOOL emergencyCallbackPossible;                    //@synthesize emergencyCallbackPossible=_emergencyCallbackPossible - In the implementation block
@property (nonatomic,copy) NSDictionary * senderIdentityCapabilitiesStateByUUID;                                   //@synthesize senderIdentityCapabilitiesStateByUUID=_senderIdentityCapabilitiesStateByUUID - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(id)publiclyAccessibleCopy;
-(BOOL)supportsDisplayingFaceTimeAudioCalls;
-(id)publiclyAccessibleCopyWithZone:(NSZone*)arg1 ;
-(void)setSupportsPrimaryCalling:(BOOL)arg1 ;
-(void)setSupportsFaceTimeVideoRelayCalling:(BOOL)arg1 ;
-(void)setRelayCallingEnabled:(BOOL)arg1 ;
-(BOOL)supportsBasebandCalling;
-(void)setSupportsCellularData:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setFaceTimeAudioAvailable:(BOOL)arg1 ;
-(BOOL)supportsFaceTimeVideoRelayCalling;
-(void)setEmergencyCallbackModeEnabled:(BOOL)arg1 ;
-(void)setCloudCallingDevices:(NSArray *)arg1 ;
-(void)setRelayCallingAvailability:(int)arg1 ;
-(BOOL)accountsMatchForSecondaryCalling;
-(void)setSupportsDisplayingFaceTimeVideoCalls:(BOOL)arg1 ;
-(BOOL)supportsDisplayingTelephonyCalls;
-(NSDictionary *)relayCallingDisabledForDeviceID;
-(void)setSupportsTelephonyRelayCalling:(BOOL)arg1 ;
-(void)setSenderIdentityCapabilitiesStateByUUID:(NSDictionary *)arg1 ;
-(BOOL)supportsFaceTimeAudioRelayCalling;
-(BOOL)areRelayCallingFeaturesEnabled;
-(void)setCtCapabilitiesValid:(BOOL)arg1 ;
-(BOOL)supportsDisplayingFaceTimeVideoCalls;
-(BOOL)isEmergencyCallbackModeEnabled;
-(BOOL)accountsSupportSecondaryCalling;
-(BOOL)supportsRelayCalling;
-(void)setOutgoingRelayCallerID:(NSString *)arg1 ;
-(BOOL)isFaceTimeVideoAvailable;
-(BOOL)isEmergencyCallbackPossible;
-(BOOL)supportsPrimaryCalling;
-(void)setSupportsRelayCalling:(BOOL)arg1 ;
-(void)setEmergencyCallbackPossible:(BOOL)arg1 ;
-(void)setSupportsFaceTimeAudioRelayCalling:(BOOL)arg1 ;
-(id)init;
-(BOOL)supportsCellularData;
-(void)setSupportsDisplayingFaceTimeAudioCalls:(BOOL)arg1 ;
-(void)setRelayCallingFeaturesEnabled:(BOOL)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDictionary *)senderIdentityCapabilitiesStateByUUID;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)outgoingRelayCallerID;
-(void)setFaceTimeVideoAvailable:(BOOL)arg1 ;
-(int)relayCallingAvailability;
-(void)setSupportsDisplayingTelephonyCalls:(BOOL)arg1 ;
-(TUCloudCallingDevice *)defaultPairedDevice;
-(void)setAccountsMatchForSecondaryCalling:(BOOL)arg1 ;
-(void)setSupportsBasebandCalling:(BOOL)arg1 ;
-(NSArray *)cloudCallingDevices;
-(void)setAccountsSupportSecondaryCalling:(BOOL)arg1 ;
-(void)setRelayCallingDisabledForDeviceID:(NSDictionary *)arg1 ;
-(BOOL)isRelayCallingEnabled;
-(BOOL)supportsTelephonyRelayCalling;
-(NSString *)description;
-(BOOL)areCTCapabilitiesValid;
-(BOOL)isFaceTimeAudioAvailable;
@end
