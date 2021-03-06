/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:44:34 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NetworkServiceProxy.framework/NetworkServiceProxy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSData, NSUUID, NSPNetworkAgent;

@interface NPKey : NSObject {

	unsigned _session_counter;
	int _error;
	unsigned _flags;
	NSData* _info;
	NSUUID* _uuid;

}

@property (assign) unsigned session_counter;                     //@synthesize session_counter=_session_counter - In the implementation block
@property (assign) int error;                                    //@synthesize error=_error - In the implementation block
@property (nonatomic,retain) NSData * info;                      //@synthesize info=_info - In the implementation block
@property (nonatomic,retain) NSUUID * uuid;                      //@synthesize uuid=_uuid - In the implementation block
@property (assign) unsigned flags;                               //@synthesize flags=_flags - In the implementation block
@property (readonly) NSPNetworkAgent * agentForKey; 
-(NSData *)info;
-(void)setInfo:(NSData *)arg1 ;
-(id)data;
-(unsigned)flags;
-(void)setFlags:(unsigned)arg1 ;
-(int)error;
-(void)setError:(int)arg1 ;
-(unsigned)session_counter;
-(void)setUuid:(NSUUID *)arg1 ;
-(void)setSession_counter:(unsigned)arg1 ;
-(NSUUID *)uuid;
-(NSPNetworkAgent *)agentForKey;
-(id)initWithData:(id)arg1 ;
@end

