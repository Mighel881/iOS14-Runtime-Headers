/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:42:06 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <TextInputCore/TextInputCore-Structs.h>
@class NSArray, TIInputMode;

@interface TIEmojiCandidateGenerator : NSObject {

	void* m_emojiGeneratorPrimaryLanguage;
	void* m_emojiGeneratorSecondaryLanguage;
	BOOL m_didAttemptPrimaryEmojiGeneratorLoad;
	BOOL m_didAttemptSecondaryEmojiGeneratorLoad;
	BOOL m_shouldShowEmojis;
	EmojiLocaleDataWrapperRef m_emojiDataForPrimaryLocale;
	EmojiLocaleDataWrapperRef m_emojiDataForSecondaryLocale;
	BOOL m_didAttemptPrimaryLocaleForEmojiLoad;
	BOOL m_didAttemptSecondaryLocaleForEmojiLoad;
	BOOL m_isEmojiInputModeEnabled;
	NSArray* _activeInputModes;

}

@property (nonatomic,readonly) TIInputMode * primaryInputMode; 
@property (nonatomic,retain) NSArray * activeInputModes;                    //@synthesize activeInputModes=_activeInputModes - In the implementation block
-(void)updateForActiveInputModes:(id)arg1 ;
-(id)emojiReplacementCandidates:(id)arg1 ;
-(TIInputMode *)primaryInputMode;
-(id)getSkinToneSensitiveEmojis:(id)arg1 ;
-(id)skinToneModifiedAdornmentEmojis:(id)arg1 forLocale:(EmojiLocaleDataWrapperRef)arg2 forInput:(id)arg3 ;
-(void)dealloc;
-(id)extractTokensForEmojiComputation:(id)arg1 ;
-(void)updateEmojiLocale;
-(id)generateEmojiAdornmentCandidates:(id)arg1 ;
-(id)initWithActiveInputModes:(id)arg1 ;
-(void)updateEmojiAdornmentGenerators;
-(id)emojiAdornmentCandidates:(id)arg1 ;
-(void)logEmojiUsageFromCandidateBar:(id)arg1 ;
-(id)emojiAppendCandidates:(id)arg1 ;
-(void)setActiveInputModes:(NSArray *)arg1 ;
-(id)createAndAddEmojiTokensFrom:(CFArrayRef)arg1 inArray:(id)arg2 forInputString:(id)arg3 ;
-(NSArray *)activeInputModes;
-(id)emojiReplacementCandidatesForKeyboardState:(id)arg1 ;
-(id)enumerateForEmojiCandidatesIn:(id)arg1 forEmojiLocaleData:(EmojiLocaleDataWrapperRef)arg2 asReplacementCandidate:(BOOL)arg3 ;
-(id)emojiAdornmentCandidatesForKeyboardState:(id)arg1 ;
-(id)randomShuffle:(id)arg1 ;
-(id)emojiReplacementCandidatesForText:(id)arg1 ;
-(void)updateEmojiStatusForKeyboardState:(id)arg1 ;
@end
