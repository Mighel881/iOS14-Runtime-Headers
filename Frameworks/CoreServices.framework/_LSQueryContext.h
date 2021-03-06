/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:50:13 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/CoreServices.framework/CoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface _LSQueryContext : NSObject {

	id _resolver;

}

@property (readonly) id<_LSQueryResolving> _resolver; 
+(void)setSimulateLimitedMappingForXCTests:(BOOL)arg1 ;
+(BOOL)simulateLimitedMappingForXCTests;
+(id)defaultContext;
-(void)clearCaches;
-(void)enumerateResolvedResultsOfQuery:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(id)debugDescription;
-(id)_init;
-(id)_resolveQueries:(id)arg1 XPCConnection:(id)arg2 error:(id*)arg3 ;
-(id<_LSQueryResolving>)_resolver;
-(id)init;
-(id)resolveQueries:(id)arg1 error:(id*)arg2 ;
@end

