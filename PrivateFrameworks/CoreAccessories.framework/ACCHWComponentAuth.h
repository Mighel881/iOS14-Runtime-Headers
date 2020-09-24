/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:37:38 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CoreAccessories.framework/CoreAccessories
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSXPCConnection;

@interface ACCHWComponentAuth : NSObject {

	NSXPCConnection* _xpcConnection;

}

@property (nonatomic,retain) NSXPCConnection * xpcConnection;              //@synthesize xpcConnection=_xpcConnection - In the implementation block
+(id)sharedManager;
-(void)setXpcConnection:(NSXPCConnection *)arg1 ;
-(NSXPCConnection *)xpcConnection;
-(id)_init;
-(id)init;
-(void)signVeridianChallenge:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)authenticateVeridianWithChallenge:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)authenticateBatteryWithChallenge:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)authenticateTouchControllerWithChallenge:(id)arg1 completionHandler:(/*^block*/id)arg2 updateRegistry:(BOOL)arg3 ;
-(void)authenticateTouchControllerWithChallenge:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
@end
