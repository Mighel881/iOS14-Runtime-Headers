/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:47:10 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/SoundAnalysis.framework/SoundAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SNRequest;
@interface SNTwoPassConfiguration : NSObject {

	id<SNRequest> _firstPassRequest;
	id<SNRequest> _secondPassRequest;
	double _historicalDataAmount;

}

@property (readonly) id<SNRequest> firstPassRequest;               //@synthesize firstPassRequest=_firstPassRequest - In the implementation block
@property (readonly) id<SNRequest> secondPassRequest;              //@synthesize secondPassRequest=_secondPassRequest - In the implementation block
@property (readonly) double historicalDataAmount;                  //@synthesize historicalDataAmount=_historicalDataAmount - In the implementation block
-(id)initWithFirstPassRequest:(id)arg1 secondPassRequest:(id)arg2 historicalDataAmount:(double)arg3 ;
-(id<SNRequest>)firstPassRequest;
-(id<SNRequest>)secondPassRequest;
-(double)historicalDataAmount;
@end

