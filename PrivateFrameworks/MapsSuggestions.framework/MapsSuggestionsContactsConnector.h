/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:44:12 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/MapsSuggestions.framework/MapsSuggestions
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MapsSuggestionsContactsConnector <MapsSuggestionsObject>
@required
-(id)_crossPlatformUnifiedMeContactWithKeysToFetch:(id)arg1 error:(id*)arg2;
-(void)setDelegate:(id)arg1;
-(void)stopListeningForChanges;
-(id)singleLineStringFromPostalAddress:(id)arg1 addCountryName:(BOOL)arg2;
-(void)startListeningForChanges;

@end

