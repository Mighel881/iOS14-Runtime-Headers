/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:41:55 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Stocks/Stocks-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray;

@interface SCKZoneDiff : NSObject <NSCopying> {

	NSArray* _modifiedRecords;
	NSArray* _deletedRecordIDs;

}

@property (nonatomic,copy,readonly) NSArray * modifiedRecords;               //@synthesize modifiedRecords=_modifiedRecords - In the implementation block
@property (nonatomic,copy,readonly) NSArray * deletedRecordIDs;              //@synthesize deletedRecordIDs=_deletedRecordIDs - In the implementation block
@property (getter=isEmpty,nonatomic,readonly) BOOL empty; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)applyToModifyRecordsOperation:(id)arg1 ;
-(NSArray *)modifiedRecords;
-(NSArray *)deletedRecordIDs;
-(id)applyToRecords:(id)arg1 ;
-(id)initWithModifiedRecords:(id)arg1 deletedRecordIDs:(id)arg2 ;
-(BOOL)isEmpty;
-(BOOL)hasSameBaseAsDiff:(id)arg1 ;
@end

