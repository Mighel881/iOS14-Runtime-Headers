/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:41:00 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NewsFoundation.framework/NewsFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NFArchiver.h>

@protocol NFArchiver <NSObject>
@required
-(BOOL)unarchive:(id)arg1 toLocation:(id)arg2;
-(BOOL)archiveDirectory:(id)arg1 toLocation:(id)arg2;

@end


@class NSString;

@interface NFArchiver : NSObject <NFArchiver>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)unarchive:(id)arg1 toLocation:(id)arg2 ;
-(BOOL)archiveDirectory:(id)arg1 toLocation:(id)arg2 ;
@end
