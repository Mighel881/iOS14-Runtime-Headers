/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:44:13 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/KeychainCircle.framework/KeychainCircle
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol KCJoiningAcceptSecretDelegate, KCJoiningAcceptCircleDelegate;
#import <KeychainCircle/KeychainCircle-Structs.h>
@class KCSRPServerContext, KCAESGCMDuplexSession, NSData, NSString, OTJoiningConfiguration, OTControl, NSMutableDictionary;

@interface KCJoiningAcceptSession : NSObject {

	int _state;
	int _piggy_version;
	unsigned long long _dsid;
	id<KCJoiningAcceptSecretDelegate> _secretDelegate;
	id<KCJoiningAcceptCircleDelegate> _circleDelegate;
	KCSRPServerContext* _context;
	KCAESGCMDuplexSession* _session;
	NSData* _startMessage;
	NSString* _piggy_uuid;
	NSData* _octagon;
	OTJoiningConfiguration* _joiningConfiguration;
	OTControl* _otControl;
	NSMutableDictionary* _defaults;

}

@property (readonly) unsigned long long dsid;                                            //@synthesize dsid=_dsid - In the implementation block
@property (__weak) id<KCJoiningAcceptSecretDelegate> secretDelegate;                     //@synthesize secretDelegate=_secretDelegate - In the implementation block
@property (__weak) id<KCJoiningAcceptCircleDelegate> circleDelegate;                     //@synthesize circleDelegate=_circleDelegate - In the implementation block
@property (readonly) KCSRPServerContext * context;                                       //@synthesize context=_context - In the implementation block
@property (readonly) KCAESGCMDuplexSession * session;                                    //@synthesize session=_session - In the implementation block
@property (readonly) int state;                                                          //@synthesize state=_state - In the implementation block
@property (retain) NSData * startMessage;                                                //@synthesize startMessage=_startMessage - In the implementation block
@property (retain) NSString * piggy_uuid;                                                //@synthesize piggy_uuid=_piggy_uuid - In the implementation block
@property (assign) int piggy_version;                                                    //@synthesize piggy_version=_piggy_version - In the implementation block
@property (retain) NSData * octagon;                                                     //@synthesize octagon=_octagon - In the implementation block
@property (nonatomic,retain) OTJoiningConfiguration * joiningConfiguration;              //@synthesize joiningConfiguration=_joiningConfiguration - In the implementation block
@property (nonatomic,retain) OTControl * otControl;                                      //@synthesize otControl=_otControl - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * defaults;                             //@synthesize defaults=_defaults - In the implementation block
+(id)sessionWithInitialMessage:(id)arg1 secretDelegate:(id)arg2 circleDelegate:(id)arg3 dsid:(unsigned long long)arg4 error:(id*)arg5 ;
-(unsigned long long)dsid;
-(void)setDefaults:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)defaults;
-(BOOL)isDone;
-(KCAESGCMDuplexSession *)session;
-(OTControl *)otControl;
-(void)setOtControl:(OTControl *)arg1 ;
-(KCSRPServerContext *)context;
-(NSData *)octagon;
-(id)stateString;
-(int)state;
-(id)description;
-(void)setConfiguration:(id)arg1 ;
-(id)processMessage:(id)arg1 error:(id*)arg2 ;
-(void)setControlObject:(id)arg1 ;
-(OTJoiningConfiguration *)joiningConfiguration;
-(void)setJoiningConfiguration:(OTJoiningConfiguration *)arg1 ;
-(BOOL)setupSession:(id*)arg1 ;
-(id<KCJoiningAcceptSecretDelegate>)secretDelegate;
-(void)setSecretDelegate:(id<KCJoiningAcceptSecretDelegate>)arg1 ;
-(NSString *)piggy_uuid;
-(void)setPiggy_uuid:(NSString *)arg1 ;
-(int)piggy_version;
-(void)setPiggy_version:(int)arg1 ;
-(id)accessSession;
-(id<KCJoiningAcceptCircleDelegate>)circleDelegate;
-(id)initWithSecretDelegate:(id)arg1 circleDelegate:(id)arg2 dsid:(unsigned long long)arg3 rng:(ccrng_state*)arg4 error:(id*)arg5 ;
-(id)copyChallengeMessage:(id*)arg1 ;
-(BOOL)shouldAcceptOctagonRequests;
-(id)processInitialMessage:(id)arg1 error:(id*)arg2 ;
-(id)processResponse:(id)arg1 error:(id*)arg2 ;
-(id)processSOSApplication:(id)arg1 error:(id*)arg2 ;
-(id)createPairingMessageFromJoiningMessage:(id)arg1 error:(id*)arg2 ;
-(id)createTLKRequestResponse:(id*)arg1 ;
-(BOOL)shouldProcessSOSApplication:(id)arg1 pairingMessage:(id)arg2 ;
-(id)processApplication:(id)arg1 error:(id*)arg2 ;
-(void)setCircleDelegate:(id<KCJoiningAcceptCircleDelegate>)arg1 ;
-(NSData *)startMessage;
-(void)setStartMessage:(NSData *)arg1 ;
-(void)setOctagon:(NSData *)arg1 ;
@end

