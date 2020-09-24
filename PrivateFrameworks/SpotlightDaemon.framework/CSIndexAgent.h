/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:44:29 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SpotlightDaemon.framework/SpotlightDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreSpotlight/CSXPCConnection.h>

@protocol MDIndexer;
@class NSMutableDictionary;

@interface CSIndexAgent : CSXPCConnection {

	id<MDIndexer> _indexer;
	NSMutableDictionary* _indexConnections;

}

@property (nonatomic,retain) NSMutableDictionary * indexConnections;              //@synthesize indexConnections=_indexConnections - In the implementation block
@property (nonatomic,retain) id<MDIndexer> indexer;                               //@synthesize indexer=_indexer - In the implementation block
+(id)indexAgent;
+(id)indexAgent:(BOOL)arg1 serviceName:(id)arg2 ;
+(id)indexDelegateAgent:(id)arg1 ;
-(id<MDIndexer>)indexer;
-(void)setIndexConnections:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)indexConnections;
-(BOOL)addClientConnectionIfAllowedForConfiguration:(id)arg1 ;
-(BOOL)handleCommand:(const char*)arg1 info:(id)arg2 connection:(id)arg3 ;
-(BOOL)addClientConnectionIfAllowedForConnection:(id)arg1 ;
-(void)setIndexer:(id<MDIndexer>)arg1 ;
-(BOOL)lostClientConnection:(id)arg1 error:(id)arg2 ;
-(id)indexConnection:(id)arg1 ;
@end
