/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:35:56 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface SXDelayed : NSObject {

	BOOL _cancelled;
	/*^block*/id _block;

}

@property (nonatomic,copy) id block;                      //@synthesize block=_block - In the implementation block
@property (assign,nonatomic) BOOL cancelled;              //@synthesize cancelled=_cancelled - In the implementation block
+(id)execute:(/*^block*/id)arg1 delay:(double)arg2 ;
-(void)cancel;
-(void)invoke;
-(void)setCancelled:(BOOL)arg1 ;
-(id)block;
-(void)setBlock:(id)arg1 ;
-(BOOL)cancelled;
-(id)initWithBlock:(/*^block*/id)arg1 delay:(double)arg2 ;
@end
