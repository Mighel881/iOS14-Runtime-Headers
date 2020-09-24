/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:46:38 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDecimalNumber, NSString, NSArray;

@interface PKDisbursementRequest : NSObject <NSSecureCoding> {

	NSDecimalNumber* _amount;
	NSString* _currencyCode;
	NSString* _countryCode;
	long long _requestSchedule;
	NSArray* _summaryItems;

}

@property (nonatomic,copy) NSDecimalNumber * amount;                 //@synthesize amount=_amount - In the implementation block
@property (nonatomic,copy) NSString * currencyCode;                  //@synthesize currencyCode=_currencyCode - In the implementation block
@property (nonatomic,copy) NSString * countryCode;                   //@synthesize countryCode=_countryCode - In the implementation block
@property (assign,nonatomic) long long requestSchedule;              //@synthesize requestSchedule=_requestSchedule - In the implementation block
@property (nonatomic,copy) NSArray * summaryItems;                   //@synthesize summaryItems=_summaryItems - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)currencyCode;
-(NSString *)countryCode;
-(void)setAmount:(NSDecimalNumber *)arg1 ;
-(void)setCurrencyCode:(NSString *)arg1 ;
-(NSArray *)summaryItems;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSDecimalNumber *)amount;
-(BOOL)isEqualToDisbursementRequest:(id)arg1 ;
-(long long)requestSchedule;
-(void)setSummaryItems:(NSArray *)arg1 ;
-(void)setRequestSchedule:(long long)arg1 ;
-(void)setCountryCode:(NSString *)arg1 ;
@end
