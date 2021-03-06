/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:40:42 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/DiskImages2.framework/DiskImages2
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSMachPort;

@interface DISessionSecurityPort : NSObject <NSSecureCoding, NSCoding> {

	NSMachPort* _port;

}

@property (retain) NSMachPort * port;              //@synthesize port=_port - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSMachPort *)port;
-(void)setPort:(NSMachPort *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
@end

