/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:44:32 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CVNLP.framework/CVNLP
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface CVNLPCaptionPerformanceResult : NSObject {

	double maxpeak;
	double peakdelta;
	double recentpeak;
	double current;
	double cpuTime;
	double cpuInstructions;
	double timeInterval;
	NSString* _name;

}

@property (nonatomic,readonly) NSString * name;              //@synthesize name=_name - In the implementation block
-(id)initWithName:(id)arg1 ;
-(id)dict;
-(NSString *)name;
-(id)description;
@end
