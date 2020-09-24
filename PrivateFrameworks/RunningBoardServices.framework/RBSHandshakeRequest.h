/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:44:25 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/RunningBoardServices.framework/RunningBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/RBSXPCSecureCoding.h>

@class NSSet, NSString;

@interface RBSHandshakeRequest : NSObject <RBSXPCSecureCoding> {

	unsigned _euid;
	NSSet* _assertionDescriptors;

}

@property (nonatomic,retain) NSSet * assertionDescriptors;              //@synthesize assertionDescriptors=_assertionDescriptors - In the implementation block
@property (assign,nonatomic) unsigned euid;                             //@synthesize euid=_euid - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsRBSXPCSecureCoding;
-(unsigned)euid;
-(void)setAssertionDescriptors:(NSSet *)arg1 ;
-(void)encodeWithRBSXPCCoder:(id)arg1 ;
-(id)initWithRBSXPCCoder:(id)arg1 ;
-(NSSet *)assertionDescriptors;
-(void)setEuid:(unsigned)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
@end
