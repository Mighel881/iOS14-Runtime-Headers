/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:37:51 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SiriFindMy.framework/SiriFindMy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Intents/INObject.h>

@class NSString, INPerson, NSArray;

@interface DeviceDetail : INObject

@property (copy,nonatomic) NSString * deviceName; 
@property (copy,nonatomic) NSString * deviceClass; 
@property (copy,nonatomic) NSString * productName; 
@property (copy,nonatomic) NSString * category; 
@property (assign,nonatomic) long long deviceLocality; 
@property (retain,nonatomic) INPerson * deviceOwner; 
@property (copy,nonatomic) NSString * emoji; 
@property (copy,nonatomic) NSArray * productTypes; 
-(id)initWithIdentifier:(id)arg1 displayString:(id)arg2 pronunciationHint:(id)arg3 ;
-(id)initWithCoder:(id)arg1 ;
@end
