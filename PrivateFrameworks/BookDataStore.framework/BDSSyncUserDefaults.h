/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:40:18 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/BookDataStore.framework/BookDataStore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <BookDataStore/BookDataStore-Structs.h>
@interface BDSSyncUserDefaults : NSObject
+(id)iCloudIdentity;
+(BOOL)isGlobalICloudDriveSyncOptedIn;
+(BOOL)_isBundleIdentifierInArray:(CFArrayRef)arg1 ;
+(BOOL)isSignedIntoICloud;
+(BOOL)isCloudKitSyncOptedIn;
+(BOOL)_isServiceEnabledAlternative:(CFStringRef)arg1 ;
+(BOOL)_isServiceDisabledAlternative:(CFStringRef)arg1 ;
+(void)_setService:(CFStringRef)arg1 enabled:(BOOL)arg2 ;
@end
