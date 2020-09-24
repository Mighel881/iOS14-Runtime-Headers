/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:38:50 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CRKASMOrganization.h>

@class NSUUID, NSString;

@interface CRKASMConcreteOrganization : NSObject <CRKASMOrganization> {

	NSUUID* _UUID;
	NSString* _name;

}

@property (nonatomic,readonly) NSUUID * UUID;                       //@synthesize UUID=_UUID - In the implementation block
@property (nonatomic,copy,readonly) NSString * name;                //@synthesize name=_name - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSUUID *)UUID;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)name;
-(NSString *)description;
-(id)initWithIdentifier:(id)arg1 name:(id)arg2 ;
@end
