/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:35:52 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SXDOM;
@class SXLayoutBlueprint;

@interface SXLayoutResult : NSObject {

	SXLayoutBlueprint* _blueprint;
	id<SXDOM> _DOM;
	double _duration;

}

@property (nonatomic,readonly) SXLayoutBlueprint * blueprint;              //@synthesize blueprint=_blueprint - In the implementation block
@property (nonatomic,readonly) id<SXDOM> DOM;                              //@synthesize DOM=_DOM - In the implementation block
@property (nonatomic,readonly) double duration;                            //@synthesize duration=_duration - In the implementation block
-(SXLayoutBlueprint *)blueprint;
-(double)duration;
-(id<SXDOM>)DOM;
-(id)initWithLayoutBlueprint:(id)arg1 DOM:(id)arg2 duration:(double)arg3 ;
@end
