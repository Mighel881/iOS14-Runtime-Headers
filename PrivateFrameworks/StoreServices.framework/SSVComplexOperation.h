/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:36:49 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreServices/SSVOperation.h>

@class SSVFairPlaySAPSession, SSURLBag, NSDictionary;

@interface SSVComplexOperation : SSVOperation {

	SSVFairPlaySAPSession* _sapSession;
	SSURLBag* _urlBag;
	NSDictionary* _urlBagDictionary;

}

@property (copy,readonly) NSDictionary * URLBagDictionary; 
@property (retain) SSVFairPlaySAPSession * SAPSession; 
-(SSVFairPlaySAPSession *)SAPSession;
-(void)configureWithURLBagDictionary:(id)arg1 ;
-(id)newLoadURLOperationWithRequest:(id)arg1 ;
-(void)configureWithURLBag:(id)arg1 ;
-(void)setSAPSession:(SSVFairPlaySAPSession *)arg1 ;
-(NSDictionary *)URLBagDictionary;
@end

