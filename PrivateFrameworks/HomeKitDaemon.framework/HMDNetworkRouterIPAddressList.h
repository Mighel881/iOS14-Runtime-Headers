/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:41:07 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/HAPTLVProtocol.h>

@class NSMutableArray, NSString;

@interface HMDNetworkRouterIPAddressList : NSObject <NSCopying, HAPTLVProtocol> {

	NSMutableArray* _addresses;

}

@property (nonatomic,retain) NSMutableArray * addresses;              //@synthesize addresses=_addresses - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)parsedFromData:(id)arg1 error:(id*)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSMutableArray *)addresses;
-(BOOL)parseFromData:(id)arg1 error:(id*)arg2 ;
-(id)init;
-(id)initWithAddresses:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setAddresses:(NSMutableArray *)arg1 ;
-(NSString *)description;
-(id)serializeWithError:(id*)arg1 ;
@end

