/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:43:10 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSString, NSNumber;

@interface SADistance : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSString * unit; 
@property (nonatomic,copy) NSNumber * value; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)distanceWithDictionary:(id)arg1 context:(id)arg2 ;
+(id)distance;
-(id)afui_metersValue;
-(id)afui_abbreviatedUnit;
-(long long)afui_compare:(id)arg1 ;
-(NSString *)unit;
-(id)encodedClassName;
-(id)groupIdentifier;
-(void)setValue:(NSNumber *)arg1 ;
-(NSNumber *)value;
-(void)setUnit:(NSString *)arg1 ;
@end
