/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:35:59 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/RCWaveformGeneratorSegmentOutputObserver.h>

@class RCWaveformGenerator, NSMutableArray, NSString;

@interface RCWaveformSegmentAccumulator : NSObject <RCWaveformGeneratorSegmentOutputObserver> {

	BOOL _finishedSuccessfully;
	RCWaveformGenerator* _generator;
	NSMutableArray* _segments;

}

@property (nonatomic,retain) RCWaveformGenerator * generator;              //@synthesize generator=_generator - In the implementation block
@property (nonatomic,retain) NSMutableArray * segments;                    //@synthesize segments=_segments - In the implementation block
@property (nonatomic,readonly) BOOL finishedSuccessfully;                  //@synthesize finishedSuccessfully=_finishedSuccessfully - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(RCWaveformGenerator *)generator;
-(BOOL)waitUntilFinished;
-(void)waveformGeneratorWillBeginLoading:(id)arg1 ;
-(id)initWithWaveformGenerator:(id)arg1 ;
-(void)dealloc;
-(void)waveformGenerator:(id)arg1 didLoadWaveformSegment:(id)arg2 ;
-(BOOL)finishedSuccessfully;
-(void)waveformGeneratorDidFinishLoading:(id)arg1 error:(id)arg2 ;
-(void)setSegments:(NSMutableArray *)arg1 ;
-(NSMutableArray *)segments;
-(void)setGenerator:(RCWaveformGenerator *)arg1 ;
@end
