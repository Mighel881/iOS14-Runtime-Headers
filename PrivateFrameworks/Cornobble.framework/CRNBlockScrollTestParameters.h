/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:44:16 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/Cornobble.framework/Cornobble
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CRNScrollTestParameters.h>
#import <libobjc.A.dylib/CRNBlockBasedScrollTestParameters.h>

@class NSString, RCPSyntheticEventStream;

@interface CRNBlockScrollTestParameters : NSObject <CRNScrollTestParameters, CRNBlockBasedScrollTestParameters> {

	NSString* _testName;
	/*^block*/id _completionHandler;
	/*^block*/id _composerBlock;

}

@property (nonatomic,copy) id composerBlock;                                       //@synthesize composerBlock=_composerBlock - In the implementation block
@property (nonatomic,copy) id completionHandler;                                   //@synthesize completionHandler=_completionHandler - In the implementation block
@property (nonatomic,readonly) RCPSyntheticEventStream * eventStream; 
@property (nonatomic,copy) NSString * testName;                                    //@synthesize testName=_testName - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)testName;
-(void)setTestName:(NSString *)arg1 ;
-(void)setCompletionHandler:(id)arg1 ;
-(RCPSyntheticEventStream *)eventStream;
-(id)composerBlock;
-(id)completionHandler;
-(id)initWithTestName:(id)arg1 withComposerBlock:(/*^block*/id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)initWithTestName:(id)arg1 withComposerBlock:(/*^block*/id)arg2 ;
-(void)setComposerBlock:(id)arg1 ;
@end

