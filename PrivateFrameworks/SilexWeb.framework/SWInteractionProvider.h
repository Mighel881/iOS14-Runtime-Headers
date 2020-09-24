/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:37:17 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SilexWeb.framework/SilexWeb
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SWMessageHandler.h>
#import <libobjc.A.dylib/SWInteractionProvider.h>

@protocol SWInteractionProvider <NSObject>
@property (readonly,nonatomic) id<SWInteraction> interaction; 
@required
-(id<SWInteraction>)interaction;
-(void)onChange:(/*^block*/id)arg1;

@end


@protocol SWInteraction, SWInteractionFactory, SWLogger;
@class NSMutableArray, NSString;

@interface SWInteractionProvider : NSObject <SWMessageHandler, SWInteractionProvider> {

	id<SWInteraction> _interaction;
	id<SWInteractionFactory> _interactionFactory;
	id<SWLogger> _logger;
	NSMutableArray* _blocks;

}

@property (nonatomic,readonly) id<SWInteractionFactory> interactionFactory;              //@synthesize interactionFactory=_interactionFactory - In the implementation block
@property (nonatomic,readonly) id<SWLogger> logger;                                      //@synthesize logger=_logger - In the implementation block
@property (nonatomic,readonly) NSMutableArray * blocks;                                  //@synthesize blocks=_blocks - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) id<SWInteraction> interaction;                            //@synthesize interaction=_interaction - In the implementation block
-(id<SWLogger>)logger;
-(id<SWInteraction>)interaction;
-(void)onChange:(/*^block*/id)arg1 ;
-(NSMutableArray *)blocks;
-(void)didReceiveMessage:(id)arg1 securityOrigin:(id)arg2 ;
-(id)initWithMessageHandlerManager:(id)arg1 documentStateProvider:(id)arg2 interactionFactory:(id)arg3 logger:(id)arg4 ;
-(id<SWInteractionFactory>)interactionFactory;
@end
