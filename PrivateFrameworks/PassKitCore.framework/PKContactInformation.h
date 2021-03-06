/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:46:38 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray;

@interface PKContactInformation : NSObject <NSSecureCoding> {

	NSArray* _postalAddresses;
	NSArray* _emailAddresses;
	NSArray* _phoneNumbers;

}

@property (nonatomic,readonly) NSArray * postalAddresses;              //@synthesize postalAddresses=_postalAddresses - In the implementation block
@property (nonatomic,readonly) NSArray * emailAddresses;               //@synthesize emailAddresses=_emailAddresses - In the implementation block
@property (nonatomic,readonly) NSArray * phoneNumbers;                 //@synthesize phoneNumbers=_phoneNumbers - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)_keychainWrapper;
+(id)contactInformationFromKeychain;
+(void)saveContactInformationToKeychain:(id)arg1 ;
+(void)deleteContactInformationFromKeychain;
-(NSArray *)postalAddresses;
-(NSArray *)emailAddresses;
-(id)initWithKeychainData:(id)arg1 ;
-(id)initWithPostalAddresses:(id)arg1 emailAddresses:(id)arg2 phoneNumbers:(id)arg3 ;
-(id)init;
-(NSArray *)phoneNumbers;
-(id)initWithCoder:(id)arg1 ;
-(id)keychainData;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
@end

