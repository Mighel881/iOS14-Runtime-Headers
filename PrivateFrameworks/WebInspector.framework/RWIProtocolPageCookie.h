/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:35:40 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebInspector/RWIProtocolJSONObject.h>

@class NSString;

@interface RWIProtocolPageCookie : RWIProtocolJSONObject

@property (nonatomic,copy) NSString * name; 
@property (nonatomic,copy) NSString * value; 
@property (nonatomic,copy) NSString * domain; 
@property (nonatomic,copy) NSString * path; 
@property (assign,nonatomic) double expires; 
@property (assign,nonatomic) BOOL session; 
@property (assign,nonatomic) BOOL httpOnly; 
@property (assign,nonatomic) BOOL secure; 
@property (assign,nonatomic) long long sameSite; 
-(void)setSecure:(BOOL)arg1 ;
-(BOOL)secure;
-(BOOL)httpOnly;
-(long long)sameSite;
-(void)setSameSite:(long long)arg1 ;
-(void)setHttpOnly:(BOOL)arg1 ;
-(void)setPath:(NSString *)arg1 ;
-(NSString *)path;
-(double)expires;
-(void)setSession:(BOOL)arg1 ;
-(BOOL)session;
-(void)setValue:(NSString *)arg1 ;
-(NSString *)value;
-(void)setName:(NSString *)arg1 ;
-(void)setExpires:(double)arg1 ;
-(NSString *)domain;
-(void)setDomain:(NSString *)arg1 ;
-(NSString *)name;
-(id)initWithName:(id)arg1 value:(id)arg2 domain:(id)arg3 path:(id)arg4 expires:(double)arg5 session:(BOOL)arg6 httpOnly:(BOOL)arg7 secure:(BOOL)arg8 sameSite:(long long)arg9 ;
@end
