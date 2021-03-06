/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:35:48 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SetupAssistantSupport.framework/SetupAssistantSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SetupAssistantSupport/SASProximityAction.h>

@class SASProximityHandshake;

@interface SASProximityHandshakeAction : SASProximityAction {

	SASProximityHandshake* _handshake;

}

@property (retain) SASProximityHandshake * handshake;              //@synthesize handshake=_handshake - In the implementation block
+(unsigned long long)actionID;
-(id)init;
-(BOOL)hasResponse;
-(SASProximityHandshake *)handshake;
-(void)setResponseFromData:(id)arg1 ;
-(id)responsePayload;
-(void)setHandshake:(SASProximityHandshake *)arg1 ;
@end

