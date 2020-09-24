/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:37:51 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AXTapToSpeakTime.framework/AXTapToSpeakTime
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AccessibilityUtilities/AXSettings.h>

@interface AXTimeOutputPreferences : AXSettings
+(id)sharedInstance;
-(id)tapticChimesLocalizedTitle;
-(void)setVoiceOverTapticTimeMode:(BOOL)arg1 ;
-(id)tapticChimesLocalizedDescription;
-(void)setVoiceOverTapticChimesEnabled:(BOOL)arg1 ;
-(id)tapticChimesSoundsLocalizedTitle;
-(long long)voiceOverTapticChimesSoundType;
-(BOOL)voiceOverTapticChimesEnabled;
-(id)tapticTimeLocalizedTitle;
-(id)localizedStringForKey:(id)arg1 ;
-(BOOL)_voiceOverIsInTripleClick;
-(id)_npsValueForPreferenceKey:(id)arg1 expectedClass:(Class)arg2 ;
-(long long)tapToSpeakTimeAvailability;
-(id)accessibilityDomainAccessor;
-(BOOL)_voiceOverIsEnabled;
-(void)setVoiceOverTapticChimesSoundType:(long long)arg1 ;
-(void)setTapToSpeakTimeEnabled:(BOOL)arg1 ;
-(void)setVoiceOverTapticTimeEncoding:(long long)arg1 ;
-(id)tapticTimeModeLocalizedDescription;
-(id)localizedStringForTapticTimeEncoding:(long long)arg1 ;
-(BOOL)voiceOverTapticTimeMode;
-(long long)voiceOverTapticTimeEncoding;
-(id)localizedStringForTapticChimesFrequencyEncoding:(long long)arg1 ;
-(id)tapToSpeakAvailabilityOptions;
-(id)tapticChimesScheduleLocalizedTitle;
-(void)setTapToSpeakTimeAvailability:(long long)arg1 ;
-(id)tapticChimesLocalizedCurrentSounds;
-(id)tapticChimesFrequencyOptions;
-(BOOL)_npsBoolValueForPreferenceKey:(id)arg1 defaultValue:(BOOL)arg2 ;
-(void)setVoiceOverTapticChimesFrequencyEncoding:(long long)arg1 ;
-(id)localizedStringForTapticChimesSoundType:(long long)arg1 ;
-(id)tapticChimesSoundsOptions;
-(id)localizedStringForTapToSpeakTimeAvailability:(long long)arg1 ;
-(id)tapToSpeakTimeLocalizedDescription;
-(BOOL)tapToSpeakTimeEnabled;
-(long long)voiceOverTapticChimesFrequencyEncoding;
-(id)tapToSpeakTimeLocalizedTitle;
-(id)tapticTimeLocalizedDescription;
-(long long)_npsIntegerValueForPreferenceKey:(id)arg1 defaultValue:(long long)arg2 ;
-(void)_setNPSValue:(id)arg1 preferenceKey:(id)arg2 ;
-(id)tapticTimeEncodingOptions;
-(id)_npsValueForPreferenceKey:(id)arg1 ;
-(id)tapticChimesLocalizedCurrentFrequency;
-(id)tapticTimeLocalizedCurrentMode;
@end
