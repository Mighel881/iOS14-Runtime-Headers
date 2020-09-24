/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:47:14 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Intents/INCodableNumberAttributeMetadata.h>

@class NSString, NSArray;

@interface INCodableCurrencyAmountAttributeMetadata : INCodableNumberAttributeMetadata {

	NSString* _currencyCode;
	NSArray* _currencyCodes;

}

@property (nonatomic,copy) NSString * currencyCode;                  //@synthesize currencyCode=_currencyCode - In the implementation block
@property (nonatomic,readonly) NSArray * currencyCodes;              //@synthesize currencyCodes=_currencyCodes - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)wf_updateWithParameterState:(id)arg1 ;
-(void)wf_updateWithParameterValue:(id)arg1 ;
-(Class)wf_objectClass;
-(Class)wf_parameterClass;
-(void)wf_updateParameterDictionary:(id)arg1 forCodableAttribute:(id)arg2 ;
-(BOOL)wf_processParameterValue:(id)arg1 forParameter:(id)arg2 codableAttribute:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)wf_parameterStateForIntentValue:(id)arg1 parameterDefinition:(id)arg2 ;
-(NSString *)currencyCode;
-(void)updateWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentationWithLocalizer:(id)arg1 ;
-(NSArray *)currencyCodes;
-(id)__INCodableDescriptionCurrencyCodeKey;
-(id)__INCodableDescriptionCurrencyCodesKey;
-(id)__INTypeCodableDescriptionCurrencyCodesKey;
-(id)__INIntentResponseCodableDescriptionCurrencyCodeKey;
-(id)__INTypeCodableDescriptionCurrencyCodeKey;
-(id)__INIntentResponseCodableDescriptionCurrencyCodesKey;
-(void)setCurrencyCode:(NSString *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
@end
