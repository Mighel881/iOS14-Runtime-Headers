/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:40:58 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SystemStatus.framework/SystemStatus
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SystemStatus/SystemStatus-Structs.h>
#import <libobjc.A.dylib/STStatusDomainDataDifferencing.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/STStatusDomainData.h>

@class STActivityAttributionCatalog, NSSet, NSString;

@interface STCallingStatusDomainData : NSObject <STStatusDomainDataDifferencing, NSSecureCoding, STStatusDomainData> {

	STActivityAttributionCatalog* _attributionCatalog;

}

@property (nonatomic,copy,readonly) STActivityAttributionCatalog * attributionCatalog;              //@synthesize attributionCatalog=_attributionCatalog - In the implementation block
@property (nonatomic,copy,readonly) NSSet * activeCallAttributions; 
@property (nonatomic,copy,readonly) NSSet * ringingCallAttributions; 
@property (nonatomic,copy,readonly) NSSet * activeVideoConferenceAttributions; 
@property (nonatomic,copy,readonly) NSSet * ringingVideoConferenceAttributions; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(NSSet *)activeVideoConferenceAttributions;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)diffFromData:(id)arg1 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(STActivityAttributionCatalog *)attributionCatalog;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSSet *)ringingCallAttributions;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)_initWithAttributionCatalog:(id)arg1 ;
-(NSSet *)ringingVideoConferenceAttributions;
-(id)succinctDescriptionBuilder;
-(unsigned long long)hash;
-(NSSet *)activeCallAttributions;
-(id)succinctDescription;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(NSString *)description;
-(id)initWithAttributionCatalog:(id)arg1 ;
-(id)dataByApplyingDiff:(id)arg1 ;
@end

