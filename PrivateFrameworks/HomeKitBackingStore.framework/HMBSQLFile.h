/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:46:58 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HomeKitBackingStore.framework/HomeKitBackingStore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>

@interface HMBSQLFile : HMFObject
+(void)removeDatastoreAtURL:(id)arg1 ;
+(id)open:(id)arg1 readOnly:(BOOL)arg2 using:(Class)arg3 error:(id*)arg4 ;
+(id)contexts;
+(id)open:(id)arg1 ;
+(id)open:(id)arg1 readOnly:(BOOL)arg2 error:(id*)arg3 initializer:(/*^block*/id)arg4 ;
+(void)close:(id)arg1 ;
+(id)contextLock;
@end

