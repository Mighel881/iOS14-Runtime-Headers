/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:47:09 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpriteKit/SpriteKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface SKReachConstraints : NSObject <NSSecureCoding> {

	double _lowerAngleLimit;
	double _upperAngleLimit;

}

@property (assign,nonatomic) double lowerAngleLimit;              //@synthesize lowerAngleLimit=_lowerAngleLimit - In the implementation block
@property (assign,nonatomic) double upperAngleLimit;              //@synthesize upperAngleLimit=_upperAngleLimit - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setLowerAngleLimit:(double)arg1 ;
-(void)setUpperAngleLimit:(double)arg1 ;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(double)lowerAngleLimit;
-(double)upperAngleLimit;
-(id)initWithLowerAngleLimit:(double)arg1 upperAngleLimit:(double)arg2 ;
@end
