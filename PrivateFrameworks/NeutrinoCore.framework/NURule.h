/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:40:35 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@interface NURule : NSObject <NSSecureCoding> {

	long long _salience;

}

@property (assign,nonatomic) long long salience;              //@synthesize salience=_salience - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)ruleWithPredicate:(id)arg1 assertingFact:(id)arg2 grade:(double)arg3 ;
+(id)ruleWithPredicate:(id)arg1 retractingFact:(id)arg2 grade:(double)arg3 ;
+(id)ruleWithPredicate:(id)arg1 action:(/*^block*/id)arg2 ;
+(id)ruleWithTarget:(id)arg1 predicate:(SEL)arg2 action:(SEL)arg3 ;
+(id)ruleWithBlockPredicate:(/*^block*/id)arg1 action:(/*^block*/id)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)performActionWithSystem:(id)arg1 ;
-(long long)salience;
-(BOOL)evaluatePredicateWithSystem:(id)arg1 ;
-(void)setSalience:(long long)arg1 ;
@end
