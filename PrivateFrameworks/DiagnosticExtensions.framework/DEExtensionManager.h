/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:43:33 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/DiagnosticExtensions.framework/DiagnosticExtensions
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSArray;

@interface DEExtensionManager : NSObject {

	BOOL _extendedLoaded;
	NSObject*<OS_dispatch_queue> _initialLoadQueue;
	NSArray* _extensions;
	/*^block*/id _afterExtendedBlock;

}

@property (nonatomic,retain) NSArray * extensions;                                       //@synthesize extensions=_extensions - In the implementation block
@property (nonatomic,copy) id afterExtendedBlock;                                        //@synthesize afterExtendedBlock=_afterExtendedBlock - In the implementation block
@property (assign,nonatomic) BOOL extendedLoaded;                                        //@synthesize extendedLoaded=_extendedLoaded - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> initialLoadQueue;              //@synthesize initialLoadQueue=_initialLoadQueue - In the implementation block
+(id)sharedInstance;
-(NSArray *)extensions;
-(void)loadExtensions;
-(void)setExtensions:(NSArray *)arg1 ;
-(void)setInitialLoadQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setAfterExtendedBlock:(id)arg1 ;
-(void)setExtendedLoaded:(BOOL)arg1 ;
-(NSObject*<OS_dispatch_queue>)initialLoadQueue;
-(id)extensionsWithFilter:(id)arg1 ;
-(id)afterExtendedBlock;
-(BOOL)extendedLoaded;
-(id)init;
-(id)extensionForIdentifier:(id)arg1 ;
@end
