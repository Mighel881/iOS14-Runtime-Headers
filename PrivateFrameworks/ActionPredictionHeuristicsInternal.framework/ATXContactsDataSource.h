/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:41:23 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ActionPredictionHeuristicsInternal.framework/ActionPredictionHeuristicsInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class ATXHeuristicDevice;

@interface ATXContactsDataSource : NSObject {

	ATXHeuristicDevice* _device;

}
-(void)contactsWithEmail:(id)arg1 callback:(/*^block*/id)arg2 ;
-(void)contactsWithIdentifiers:(id)arg1 callback:(/*^block*/id)arg2 ;
-(id)initWithDevice:(id)arg1 ;
-(void)contactsWithPhone:(id)arg1 callback:(/*^block*/id)arg2 ;
-(void)contactsWithName:(id)arg1 callback:(/*^block*/id)arg2 ;
-(void)_contactsWithPredicate:(id)arg1 callback:(/*^block*/id)arg2 ;
@end
