/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:36:01 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ShareSheet.framework/ShareSheet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, NSError;

@interface _UISaveToCameraRollSaveItemsController : NSObject {

	BOOL _successToReport;
	/*^block*/id _saveCompletionBlock;
	NSArray* _itemsToSchedule;
	long long _pendingSaveCount;
	NSError* _errorToReport;

}

@property (nonatomic,readonly) id saveCompletionBlock;                  //@synthesize saveCompletionBlock=_saveCompletionBlock - In the implementation block
@property (nonatomic,readonly) NSArray * itemsToSchedule;               //@synthesize itemsToSchedule=_itemsToSchedule - In the implementation block
@property (nonatomic,readonly) long long pendingSaveCount;              //@synthesize pendingSaveCount=_pendingSaveCount - In the implementation block
@property (nonatomic,readonly) NSError * errorToReport;                 //@synthesize errorToReport=_errorToReport - In the implementation block
@property (nonatomic,readonly) BOOL successToReport;                    //@synthesize successToReport=_successToReport - In the implementation block
-(id)saveCompletionBlock;
-(void)beginSaving;
-(id)initWithItems:(id)arg1 saveCompletionBlock:(/*^block*/id)arg2 ;
-(void)beginSavingItem:(id)arg1 ;
-(NSArray *)itemsToSchedule;
-(void)_didCompleteSavingItem:(id)arg1 error:(id)arg2 contextInfo:(void*)arg3 ;
-(void)_noteDidCompleteSavingItem:(id)arg1 error:(id)arg2 ;
-(void)_invokeSaveCompletionBlock;
-(long long)pendingSaveCount;
-(NSError *)errorToReport;
-(BOOL)successToReport;
@end
