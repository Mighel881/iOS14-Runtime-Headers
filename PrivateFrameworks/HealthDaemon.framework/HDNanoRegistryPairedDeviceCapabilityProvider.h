/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:43:42 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/HDPairedDeviceCapabilityProviding.h>

@protocol HDPairedDeviceCapabilityProvidingDelegate;
@interface HDNanoRegistryPairedDeviceCapabilityProvider : NSObject <HDPairedDeviceCapabilityProviding> {

	id<HDPairedDeviceCapabilityProvidingDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<HDPairedDeviceCapabilityProvidingDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)isCapabilitySupportedOnActivePairedDevice:(id)arg1 error:(id*)arg2 ;
-(id)activePairedDevice;
-(id)deviceForPairingID:(id)arg1 ;
-(void)setDelegate:(id<HDPairedDeviceCapabilityProvidingDelegate>)arg1 ;
-(id<HDPairedDeviceCapabilityProvidingDelegate>)delegate;
-(void)_pairedOrActiveDevicesDidChange:(id)arg1 ;
-(void)startListeningForUpdates;
-(id)isCapabilitySupported:(id)arg1 onDevice:(id)arg2 error:(id*)arg3 ;
@end

