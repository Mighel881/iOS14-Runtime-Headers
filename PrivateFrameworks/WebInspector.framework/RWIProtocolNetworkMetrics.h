/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:35:40 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebInspector/RWIProtocolJSONObject.h>

@class NSString, RWIProtocolNetworkHeaders, RWIProtocolSecurityConnection;

@interface RWIProtocolNetworkMetrics : RWIProtocolJSONObject

@property (nonatomic,copy) NSString * protocol; 
@property (assign,nonatomic) long long priority; 
@property (nonatomic,copy) NSString * connectionIdentifier; 
@property (nonatomic,copy) NSString * remoteAddress; 
@property (nonatomic,retain) RWIProtocolNetworkHeaders * requestHeaders; 
@property (assign,nonatomic) double requestHeaderBytesSent; 
@property (assign,nonatomic) double requestBodyBytesSent; 
@property (assign,nonatomic) double responseHeaderBytesReceived; 
@property (assign,nonatomic) double responseBodyBytesReceived; 
@property (assign,nonatomic) double responseBodyDecodedSize; 
@property (nonatomic,retain) RWIProtocolSecurityConnection * securityConnection; 
-(void)setProtocol:(NSString *)arg1 ;
-(NSString *)remoteAddress;
-(NSString *)protocol;
-(void)setPriority:(long long)arg1 ;
-(NSString *)connectionIdentifier;
-(void)setRemoteAddress:(NSString *)arg1 ;
-(void)setConnectionIdentifier:(NSString *)arg1 ;
-(void)setResponseBodyBytesReceived:(double)arg1 ;
-(long long)priority;
-(double)responseBodyBytesReceived;
-(RWIProtocolNetworkHeaders *)requestHeaders;
-(void)setRequestHeaders:(RWIProtocolNetworkHeaders *)arg1 ;
-(void)setResponseBodyDecodedSize:(double)arg1 ;
-(void)setRequestHeaderBytesSent:(double)arg1 ;
-(void)setRequestBodyBytesSent:(double)arg1 ;
-(double)requestHeaderBytesSent;
-(double)requestBodyBytesSent;
-(void)setResponseHeaderBytesReceived:(double)arg1 ;
-(double)responseHeaderBytesReceived;
-(double)responseBodyDecodedSize;
-(void)setSecurityConnection:(RWIProtocolSecurityConnection *)arg1 ;
-(RWIProtocolSecurityConnection *)securityConnection;
@end

