/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:40:23 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ProofReader.framework/ProofReader
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <ProofReader/ProofReader-Structs.h>
@class NSString;

@interface PRLexicon : NSObject {

	NSString* _localization;
	NSString* _unigramsPath;
	const void* _lexicon;

}
+(id)lexiconWithLocalization:(id)arg1 unigramsPath:(id)arg2 ;
+(id)lexiconWithLexicon:(const void*)arg1 ;
-(LXLexiconRef)lexicon;
-(void)enumerateCorrectionEntriesForWord:(id)arg1 maxCorrections:(unsigned long long)arg2 withBlock:(/*^block*/id)arg3 ;
-(unsigned)tokenIDForString:(id)arg1 ;
-(void)dealloc;
-(void)enumerateEntriesForString:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(id)initWithLocalization:(id)arg1 unigramsPath:(id)arg2 ;
-(void)enumerateCompletionEntriesForPrefix:(id)arg1 maxCompletions:(unsigned long long)arg2 withBlock:(/*^block*/id)arg3 ;
-(id)initWithLexicon:(const void*)arg1 ;
-(BOOL)getProbabilityForTokenID:(unsigned)arg1 probability:(double*)arg2 ;
-(id)createCursor;
-(void)enumerateCompletionsForPrefix:(id)arg1 maxCompletions:(unsigned long long)arg2 withBlock:(/*^block*/id)arg3 ;
-(BOOL)getProbabilityForString:(id)arg1 probability:(double*)arg2 ;
-(id)stringForTokenID:(unsigned)arg1 ;
-(id)description;
@end
