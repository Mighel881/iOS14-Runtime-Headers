/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:38:15 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/Translation.framework/Translation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Translation/Translation-Structs.h>
#import <Translation/FTBatchTranslationRequest.h>

@class NSString, NSArray;

@interface FTMutableBatchTranslationRequest : FTBatchTranslationRequest

@property (nonatomic,copy) NSString * request_id; 
@property (nonatomic,copy) NSString * task; 
@property (nonatomic,copy) NSString * source_language; 
@property (nonatomic,copy) NSString * target_language; 
@property (nonatomic,copy) NSArray * paragraphs; 
@property (nonatomic,copy) NSString * app_id; 
@property (nonatomic,copy) NSString * session_id; 
@property (nonatomic,copy) NSString * url; 
@property (assign,nonatomic) long long opt_in_status; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)task;
-(NSString *)app_id;
-(void)setTask:(NSString *)arg1 ;
-(NSString *)request_id;
-(void)setRequest_id:(NSString *)arg1 ;
-(void)setSource_language:(NSString *)arg1 ;
-(void)setTarget_language:(NSString *)arg1 ;
-(void)setApp_id:(NSString *)arg1 ;
-(void)setSession_id:(NSString *)arg1 ;
-(void)setParagraphs:(NSArray *)arg1 ;
-(NSString *)session_id;
-(NSArray *)paragraphs;
-(id)init;
-(void)setUrl:(NSString *)arg1 ;
-(NSString *)source_language;
-(NSString *)target_language;
-(NSString *)url;
-(long long)opt_in_status;
-(void)setOpt_in_status:(long long)arg1 ;
@end

