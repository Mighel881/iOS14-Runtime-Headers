/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:43:42 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSDictionary, NSSet;

@interface HDSQLiteDatabaseTableSchema : NSObject {

	NSString* _name;
	NSDictionary* _columns;
	NSSet* _indices;

}

@property (nonatomic,copy) NSString * name;                       //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) NSDictionary * columns;              //@synthesize columns=_columns - In the implementation block
@property (nonatomic,retain) NSSet * indices;                     //@synthesize indices=_indices - In the implementation block
-(void)setIndices:(NSSet *)arg1 ;
-(void)setColumns:(NSDictionary *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(NSDictionary *)columns;
-(unsigned long long)hash;
-(NSString *)name;
-(NSSet *)indices;
-(id)description;
@end

