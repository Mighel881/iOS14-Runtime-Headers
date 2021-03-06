/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:38:56 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <IDSFoundation/IDSFoundation-Structs.h>
@class NSMutableArray;

@interface IDSTransactionQueue : NSObject {

	os_unfair_lock_s _lock;
	NSMutableArray* _transactions;

}

@property (nonatomic,retain) NSMutableArray * transactions;              //@synthesize transactions=_transactions - In the implementation block
@property (assign,nonatomic) os_unfair_lock_s lock;                      //@synthesize lock=_lock - In the implementation block
-(void)setLock:(os_unfair_lock_s)arg1 ;
-(os_unfair_lock_s)lock;
-(void)_prependTransaction:(id)arg1 ;
-(/*^block*/id)appendPendingItem:(id)arg1 ;
-(void)_readyTransaction:(id)arg1 ;
-(id)init;
-(void)_appendTransaction:(id)arg1 ;
-(void)appendItem:(id)arg1 ;
-(NSMutableArray *)transactions;
-(void)_removeTransaction:(id)arg1 ;
-(void)executeReadyItemsWithBlock:(/*^block*/id)arg1 ;
-(void)setTransactions:(NSMutableArray *)arg1 ;
-(void)prependItem:(id)arg1 ;
@end

