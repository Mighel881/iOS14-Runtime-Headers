/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:46:09 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class EDWorkbook, NSMutableArray;

@interface EDProcessors : NSObject {

	EDWorkbook* mWorkbook;
	NSMutableArray* mProcessors;

}
-(void)removeAllObjects;
-(void)markObject:(id)arg1 processor:(Class)arg2 ;
-(id)initWithWorkbook:(id)arg1 ;
-(void)addProcessorClass:(Class)arg1 ;
-(BOOL)hasProcessors;
-(void)removeProcessorClass:(Class)arg1 ;
-(void)applyProcessorsWithSheet:(id)arg1 ;
@end

