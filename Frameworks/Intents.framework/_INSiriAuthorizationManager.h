/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:47:14 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Intents/Intents-Structs.h>
#import <libobjc.A.dylib/_INSiriAuthorizationManagerExport.h>

@class NSString;

@interface _INSiriAuthorizationManager : NSObject <_INSiriAuthorizationManagerExport>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_tccAccessInfoForBundle:(id)arg1 ;
+(BOOL)_siriEnabled;
+(void)_requestSiriAuthorization:(/*^block*/id)arg1 auditToken:(SCD_Struct_IN2)arg2 ;
+(BOOL)_isSiriAuthorizationRestricted;
+(long long)_rawSiriAuthorizationStatusForAppID:(id)arg1 ;
+(long long)_siriAuthorizationStatusForAppID:(id)arg1 ;
@end

