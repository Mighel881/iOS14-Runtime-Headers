/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:46:44 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PKPaymentWebServiceResponse.h>

@class NSDictionary;

@interface PKPaymentAvailableDevicesResponse : PKPaymentWebServiceResponse {

	NSDictionary* _devices;

}

@property (nonatomic,copy) NSDictionary * devices;              //@synthesize devices=_devices - In the implementation block
-(void)setDevices:(NSDictionary *)arg1 ;
-(id)initWithData:(id)arg1 ;
-(NSDictionary *)devices;
@end

