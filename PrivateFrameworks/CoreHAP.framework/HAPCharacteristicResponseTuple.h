/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:38:22 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>

@class HAPCharacteristic, NSNumber, NSDate, NSError;

@interface HAPCharacteristicResponseTuple : HMFObject {

	HAPCharacteristic* _characteristic;
	id _value;
	NSNumber* _stateNumber;
	NSDate* _valueUpdatedTime;
	NSError* _error;

}

@property (nonatomic,retain) HAPCharacteristic * characteristic;              //@synthesize characteristic=_characteristic - In the implementation block
@property (nonatomic,retain) id value;                                        //@synthesize value=_value - In the implementation block
@property (nonatomic,retain) NSNumber * stateNumber;                          //@synthesize stateNumber=_stateNumber - In the implementation block
@property (nonatomic,retain) NSDate * valueUpdatedTime;                       //@synthesize valueUpdatedTime=_valueUpdatedTime - In the implementation block
@property (nonatomic,retain) NSError * error;                                 //@synthesize error=_error - In the implementation block
+(id)responseTupleForCharacteristic:(id)arg1 error:(id)arg2 ;
-(void)setValue:(id)arg1 ;
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
-(id)value;
-(NSDate *)valueUpdatedTime;
-(void)setValueUpdatedTime:(NSDate *)arg1 ;
-(HAPCharacteristic *)characteristic;
-(void)setCharacteristic:(HAPCharacteristic *)arg1 ;
-(NSNumber *)stateNumber;
-(void)setStateNumber:(NSNumber *)arg1 ;
@end

