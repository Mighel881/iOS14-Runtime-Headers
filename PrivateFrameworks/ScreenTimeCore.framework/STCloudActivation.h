/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:36:30 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ScreenTimeCore.framework/ScreenTimeCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ScreenTimeCore/STUniquedManagedObject.h>
#import <libobjc.A.dylib/STReconcilableObject.h>
#import <libobjc.A.dylib/STSerializableManagedObject.h>

@class NSData, NSString, NSUUID;

@interface STCloudActivation : STUniquedManagedObject <STReconcilableObject, STSerializableManagedObject>

@property (assign,nonatomic) long long activationType; 
@property (nonatomic,retain) NSData * activationPlist; 
@property (nonatomic,copy) NSString * ckRecordID; 
@property (nonatomic,retain) NSData * ckRecordSystemFields; 
@property (nonatomic,copy) NSString * identifier; 
@property (nonatomic,copy) NSUUID * sortKey; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)reconcileWithManagedObjectContext:(id)arg1 andUpdateLosers:(id)arg2 error:(id*)arg3 ;
-(BOOL)updateWithDictionaryRepresentation:(id)arg1 ;
-(id)computeUniqueIdentifier;
-(void)didChangeValueForKey:(id)arg1 ;
-(id)dictionaryRepresentation;
@end

