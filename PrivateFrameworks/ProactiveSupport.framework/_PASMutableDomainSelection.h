/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:40:45 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ProactiveSupport.framework/ProactiveSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ProactiveSupport/ProactiveSupport-Structs.h>
#import <ProactiveSupport/_PASDomainSelection.h>

@class NSMutableDictionary;

@interface _PASMutableDomainSelection : _PASDomainSelection {

	NSMutableDictionary* _domains;
	unsigned long long _count;
	BOOL _taintedByDeepDomain;

}
-(BOOL)addDomainsFromSelection:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqualToDomainSelection:(id)arg1 ;
-(void)_decrementCountAndMaybePruneItems:(id)arg1 ;
-(BOOL)_addDomainsFrom:(id)arg1 ;
-(void)dealloc;
-(BOOL)_addDomainsFromOtherDictionary:(id)arg1 toOwnDictionary:(id)arg2 ownDictionaryIsPlaceholder:(BOOL)arg3 ;
-(id)allDomains;
-(id)init;
-(BOOL)addDomain:(id)arg1 ;
-(BOOL)addDomainsFromSet:(id)arg1 ;
-(unsigned long long)count;
-(id)_initWithNonOverlappingDomainSet:(id)arg1 ;
-(BOOL)addDomainsFromArray:(id)arg1 ;
-(BOOL)isEmpty;
-(BOOL)containsDomain:(id)arg1 ;
@end

