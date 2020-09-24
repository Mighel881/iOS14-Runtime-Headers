/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:39:25 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSMutableArray;

@interface _ML3DatabaseNaturalStatement : NSObject {

	NSString* _sql;
	NSMutableArray* _parameters;

}

@property (nonatomic,retain) NSString * sql;                           //@synthesize sql=_sql - In the implementation block
@property (nonatomic,retain) NSMutableArray * parameters;              //@synthesize parameters=_parameters - In the implementation block
+(id)naturalStatementWithSQL:(id)arg1 parameters:(id)arg2 ;
-(void)setParameters:(NSMutableArray *)arg1 ;
-(NSMutableArray *)parameters;
-(NSString *)sql;
-(id)init;
-(void)setSql:(NSString *)arg1 ;
-(void)setParameter:(id)arg1 forPosition:(unsigned long long)arg2 ;
@end
