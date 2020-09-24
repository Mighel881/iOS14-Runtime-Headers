/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:50:00 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/Network.framework/Network
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Network/NWEndpoint.h>

@class NSString;

@interface NWHostEndpoint : NWEndpoint

@property (nonatomic,readonly) NSString * hostname; 
@property (nonatomic,readonly) NSString * port; 
+(unsigned)endpointType;
+(id)endpointWithHostname:(id)arg1 port:(id)arg2 ;
-(NSString *)port;
-(id)descriptionWithIndent:(int)arg1 showFullContent:(BOOL)arg2 ;
-(NSString *)hostname;
@end
