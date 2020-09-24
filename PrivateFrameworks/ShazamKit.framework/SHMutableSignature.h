/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:46:14 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ShazamKit.framework/ShazamKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ShazamKit/SHSignature.h>

@class AVAudioFormat, SigX;

@interface SHMutableSignature : SHSignature {

	unsigned _currentFrameCount;
	double _maximumSeconds;
	long long _clipStyle;
	AVAudioFormat* _format;
	SigX* _sigX;

}

@property (nonatomic,retain) AVAudioFormat * format;                  //@synthesize format=_format - In the implementation block
@property (nonatomic,retain) SigX * sigX;                             //@synthesize sigX=_sigX - In the implementation block
@property (assign,nonatomic) unsigned currentFrameCount;              //@synthesize currentFrameCount=_currentFrameCount - In the implementation block
@property (nonatomic,readonly) long long clipStyle;                   //@synthesize clipStyle=_clipStyle - In the implementation block
@property (nonatomic,readonly) double maximumSeconds;                 //@synthesize maximumSeconds=_maximumSeconds - In the implementation block
+(id)entitlements;
+(BOOL)supportsSecureCoding;
-(int)signatureType;
-(id)dataRepresentation;
-(void)setFormat:(AVAudioFormat *)arg1 ;
-(AVAudioFormat *)format;
-(SigX *)sigX;
-(id)generate:(id*)arg1 ;
-(id)debugDescription;
-(long long)currentPosition;
-(double)length;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)append:(id)arg1 atTime:(id)arg2 error:(id*)arg3 ;
-(void)configureWithFormat:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setSigX:(SigX *)arg1 ;
-(id)initWithMaximumSeconds:(double)arg1 clipStyle:(long long)arg2 ;
-(BOOL)appendBuffer:(id)arg1 atTime:(id)arg2 error:(id*)arg3 ;
-(void)performSignatureGenerationEntitlementCheck;
-(long long)clipStyle;
-(double)maximumSeconds;
-(id)clipExcessAudio:(id)arg1 ;
-(unsigned)currentFrameCount;
-(void)setCurrentFrameCount:(unsigned)arg1 ;
-(double)secondsFromFrameCount:(unsigned)arg1 forFormat:(id)arg2 ;
@end
