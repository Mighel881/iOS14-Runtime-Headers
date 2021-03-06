/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:38:39 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/ATXLayoutGeneratorProtocol.h>

@class NSArray;

@interface ATXLayoutGenerator : NSObject <ATXLayoutGeneratorProtocol> {

	NSArray* _rankedSuggestions;
	NSArray* _layoutsToConsider;

}
+(id)sortLayouts:(id)arg1 ;
-(id)generateValidLayouts;
-(id)uuidOfHighestConfidenceSuggestionFromRankedSuggestions:(id)arg1 uiLayoutType:(long long)arg2 ;
-(id)generateGreedySuggestionLayoutForUILayoutType:(long long)arg1 layoutTypesForRankedSuggestions:(id)arg2 isSuggestionsWidgetLayout:(BOOL)arg3 ;
-(void)scoreLayout:(id)arg1 ;
-(id)generateLayoutToSuggestionDictionary;
-(double)marginalScoreForSuggestion:(id)arg1 topRankingSuggestion:(id)arg2 ;
-(id)initWithRankedSuggestions:(id)arg1 layoutsToConsider:(id)arg2 ;
-(double)weightForConfidenceCategory:(long long)arg1 ;
@end

