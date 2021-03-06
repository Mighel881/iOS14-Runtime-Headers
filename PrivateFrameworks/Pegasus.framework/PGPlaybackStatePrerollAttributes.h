/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:42:58 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/Pegasus.framework/Pegasus
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary, UIColor;

@interface PGPlaybackStatePrerollAttributes : NSObject {

	NSDictionary* _dictionaryRepresentation;

}

@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation;              //@synthesize dictionaryRepresentation=_dictionaryRepresentation - In the implementation block
@property (nonatomic,readonly) long long contentType; 
@property (nonatomic,readonly) double requiredLinearPlaybackEndTime; 
@property (nonatomic,readonly) UIColor * preferredTintColor; 
+(id)prerollAttributesForAdContentWithRequiredLinearPlaybackEndTime:(double)arg1 preferredTintColor:(id)arg2 ;
+(id)prerollAttributesForSponsoredContentWithRequiredLinearPlaybackEndTime:(double)arg1 preferredTintColor:(id)arg2 ;
-(long long)contentType;
-(UIColor *)preferredTintColor;
-(double)requiredLinearPlaybackEndTime;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)succinctDescription;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)description;
-(NSDictionary *)dictionaryRepresentation;
-(id)initWithRequiredLinearPlaybackEndTime:(double)arg1 preferredTintColor:(id)arg2 contentType:(long long)arg3 ;
-(id)preferredTintColorDescription;
@end

