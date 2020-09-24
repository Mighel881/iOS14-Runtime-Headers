/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:38:23 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/TrialServer.framework/TrialServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TrialServer/TrialServer-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSURL, NSString;

@interface TRISignedAssetURL : NSObject <NSCopying> {

	NSURL* _url;
	NSString* _signature;

}

@property (nonatomic,readonly) NSURL * url;                       //@synthesize url=_url - In the implementation block
@property (nonatomic,readonly) NSString * signature;              //@synthesize signature=_signature - In the implementation block
+(id)assetURLWithUrl:(id)arg1 signature:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)signature;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSURL *)url;
-(id)description;
-(id)initWithUrl:(id)arg1 signature:(id)arg2 ;
-(BOOL)isEqualToAssetURL:(id)arg1 ;
-(id)copyWithReplacementUrl:(id)arg1 ;
-(id)copyWithReplacementSignature:(id)arg1 ;
@end
