/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:50:11 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthKit/HealthKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/HKCodedObject.h>

@class HKMedicalCoding, NSArray, HKConcept, HKMedicalDate, HKMedicalCodingCollection, NSString;

@interface HKAllergyReaction : NSObject <NSSecureCoding, NSCopying, HKCodedObject> {

	HKMedicalCoding* _severityCoding;
	NSArray* _manifestionCodings;
	HKConcept* _severity;
	NSArray* _manifestations;
	HKMedicalDate* _onsetDate;

}

@property (nonatomic,copy,readonly) NSArray * manifestations; 
@property (nonatomic,copy,readonly) NSArray * manifestionCodings;                                      //@synthesize manifestionCodings=_manifestionCodings - In the implementation block
@property (nonatomic,copy,readonly) NSArray * manifestationCodingCollections; 
@property (nonatomic,copy,readonly) HKMedicalDate * onsetDate;                                         //@synthesize onsetDate=_onsetDate - In the implementation block
@property (nonatomic,copy,readonly) HKConcept * severity; 
@property (nonatomic,copy,readonly) HKMedicalCoding * severityCoding; 
@property (nonatomic,copy,readonly) HKMedicalCodingCollection * severityCodingCollection; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)allergyReactionWithManifestationCodings:(id)arg1 onsetDate:(id)arg2 severityCoding:(id)arg3 ;
+(id)indexableKeyPathsWithPrefix:(id)arg1 ;
-(HKMedicalDate *)onsetDate;
-(id)copyWithZone:(NSZone*)arg1 ;
-(HKMedicalCodingCollection *)severityCodingCollection;
-(id)initWithManifestationCodings:(id)arg1 onsetDate:(id)arg2 severityCoding:(id)arg3 ;
-(NSArray *)manifestationCodingCollections;
-(NSArray *)manifestionCodings;
-(NSArray *)manifestations;
-(HKMedicalCoding *)severityCoding;
-(void)_setSeverityCoding:(id)arg1 ;
-(id)manifestationCodings;
-(void)_setManifestationCodings:(id)arg1 ;
-(id)init;
-(HKConcept *)severity;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(id)codingsForKeyPath:(id)arg1 error:(id*)arg2 ;
-(BOOL)applyConcepts:(id)arg1 forKeyPath:(id)arg2 error:(id*)arg3 ;
-(NSString *)description;
@end

