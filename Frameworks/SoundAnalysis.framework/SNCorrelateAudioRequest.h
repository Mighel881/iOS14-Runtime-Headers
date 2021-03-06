/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:47:10 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/SoundAnalysis.framework/SoundAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SNAnalyzerCreating.h>
#import <libobjc.A.dylib/SNRequest.h>

@class AVAudioFile, NSString;

@interface SNCorrelateAudioRequest : NSObject <SNAnalyzerCreating, SNRequest> {

	AVAudioFile* _referenceAudioFile;
	double _overlapFactor;

}

@property (assign) double overlapFactor;                            //@synthesize overlapFactor=_overlapFactor - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)createAnalyzerWithError:(id*)arg1 ;
-(double)overlapFactor;
-(void)setOverlapFactor:(double)arg1 ;
-(id)initWithAudioFile:(id)arg1 ;
@end

