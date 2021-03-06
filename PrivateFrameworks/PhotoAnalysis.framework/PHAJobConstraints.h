/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:43:55 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoAnalysis/PhotoAnalysis-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface PHAJobConstraints : NSObject <NSCopying> {

	BOOL _canRunAutomaticBackgroundAnalysis;
	BOOL _canRunAutomaticForegroundAnalysis;
	BOOL _canRunUserInitiatedForegroundAnalysis;
	BOOL _canUseNetwork;
	BOOL _turboMode;
	BOOL _cancelsTurboMode;

}

@property (assign,getter=isTurboMode,nonatomic) BOOL turboMode;                         //@synthesize turboMode=_turboMode - In the implementation block
@property (assign,nonatomic) BOOL cancelsTurboMode;                                     //@synthesize cancelsTurboMode=_cancelsTurboMode - In the implementation block
@property (nonatomic,readonly) BOOL canRunAutomaticBackgroundAnalysis;                  //@synthesize canRunAutomaticBackgroundAnalysis=_canRunAutomaticBackgroundAnalysis - In the implementation block
@property (nonatomic,readonly) BOOL canRunAutomaticForegroundAnalysis;                  //@synthesize canRunAutomaticForegroundAnalysis=_canRunAutomaticForegroundAnalysis - In the implementation block
@property (nonatomic,readonly) BOOL canRunUserInitiatedForegroundAnalysis;              //@synthesize canRunUserInitiatedForegroundAnalysis=_canRunUserInitiatedForegroundAnalysis - In the implementation block
@property (nonatomic,readonly) BOOL canUseNetwork;                                      //@synthesize canUseNetwork=_canUseNetwork - In the implementation block
+(id)constraintsWithAllAllowances;
+(id)constraintsWithNoAllowances;
-(id)statusAsDictionary;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned)qosClassForProcessing;
-(id)initWithCanRunAutomaticBackgroundAnalysis:(BOOL)arg1 canRunAutomaticForegroundAnalysis:(BOOL)arg2 canRunUserInitiatedForegroundAnalysis:(BOOL)arg3 canUseNetwork:(BOOL)arg4 ;
-(void)applyConstraints:(id)arg1 usingMask:(id)arg2 ;
-(BOOL)isTurboMode;
-(BOOL)canRunUserInitiatedForegroundAnalysis;
-(BOOL)canRunAutomaticBackgroundAnalysis;
-(BOOL)isEqualToConstraints:(id)arg1 ;
-(id)initFromBitString:(id)arg1 ;
-(id)asBitString;
-(BOOL)cancelsTurboMode;
-(void)setCancelsTurboMode:(BOOL)arg1 ;
-(BOOL)canRunAutomaticForegroundAnalysis;
-(void)setTurboMode:(BOOL)arg1 ;
-(id)description;
-(BOOL)canUseNetwork;
@end

