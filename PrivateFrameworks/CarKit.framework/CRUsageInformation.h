/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:46:21 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CarKit.framework/CarKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CRCarKitServiceClient;

@interface CRUsageInformation : NSObject {

	CRCarKitServiceClient* _serviceClient;

}

@property (nonatomic,retain) CRCarKitServiceClient * serviceClient;              //@synthesize serviceClient=_serviceClient - In the implementation block
@property (nonatomic,readonly) BOOL shouldSuggestCarPlayTips; 
-(id)init;
-(void)setServiceClient:(CRCarKitServiceClient *)arg1 ;
-(CRCarKitServiceClient *)serviceClient;
-(BOOL)shouldSuggestCarPlayTips;
@end

