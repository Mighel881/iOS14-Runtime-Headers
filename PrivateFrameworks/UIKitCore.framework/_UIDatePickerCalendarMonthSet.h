/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:45:14 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <UIKitCore/UIKitCore-Structs.h>
@class NSCalendar, _UIDatePickerCalendarMonth, NSMutableIndexSet, NSMutableOrderedSet;

@interface _UIDatePickerCalendarMonthSet : NSObject {

	NSCalendar* _calendar;
	unsigned long long _rangeLength;
	_UIDatePickerCalendarMonth* _referenceMonth;
	NSMutableIndexSet* _loadedMonthOffsets;
	NSMutableOrderedSet* _loadedMonths;

}
-(unsigned long long)_shiftReferenceMonthToFitOffsetMonthsIfNecessary:(_UISignedRange)arg1 ;
-(void)insertMonthsAroundMonth:(id)arg1 loadedIndexRange:(NSRange*)arg2 ;
-(void)_ensureReferenceMonthWithFallbackMonth:(id)arg1 ;
-(id)loadedMonths;
-(id)monthAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)indexOfMonth:(id)arg1 ;
-(id)_monthAtOffset:(long long)arg1 ;
-(NSRange)_loadOffsetRange:(_UISignedRange)arg1 ;
-(void)_clearLoadedData;
-(_UISignedRange)_offsetRangeForMonth:(id)arg1 ;
-(id)initWithCalendar:(id)arg1 rangeLength:(unsigned long long)arg2 ;
-(void)reloadWithMonthsAroundMonth:(id)arg1 ;
@end
