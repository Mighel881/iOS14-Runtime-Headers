/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:46:43 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSData;

@interface PKWebServiceResponse : NSObject <NSSecureCoding> {

	NSData* _rawData;
	id _JSONObject;

}

@property (nonatomic,readonly) NSData * rawData;              //@synthesize rawData=_rawData - In the implementation block
@property (nonatomic,readonly) id JSONObject;                 //@synthesize JSONObject=_JSONObject - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)responseWithData:(id)arg1 ;
-(NSData *)rawData;
-(id)JSONObject;
-(id)debugDescription;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
@end

