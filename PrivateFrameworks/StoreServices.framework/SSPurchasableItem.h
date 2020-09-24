/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:36:49 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary, NSString, SSSQLiteDatabase;

@interface SSPurchasableItem : NSObject {

	NSDictionary* _propertyValues;
	NSString* _tableName;
	SSSQLiteDatabase* _database;

}
+(id)databaseTable;
+(id)allPropertyKeys;
+(id)sortByDatePurchasedKey;
-(void)dealloc;
-(BOOL)isHidden;
-(id)propertyValues;
-(id)initWithPropertyValues:(id)arg1 ;
-(id)datePurchased;
-(long long)pid;
-(id)description;
-(long long)storeID;
-(long long)accountUniqueIdentifier;
@end
