/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:38:42 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/DataAccessExpress.framework/DataAccessExpress
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DataAccessExpress/DataAccessExpress-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface DADAMContainerIDCacheKey : NSObject <NSCopying> {

	NSString* _accountID;
	long long _dataclass;

}

@property (nonatomic,readonly) NSString * accountID;              //@synthesize accountID=_accountID - In the implementation block
@property (nonatomic,readonly) long long dataclass;               //@synthesize dataclass=_dataclass - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithAccountID:(id)arg1 andDataclass:(long long)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)accountID;
-(unsigned long long)hash;
-(long long)dataclass;
-(id)description;
@end

