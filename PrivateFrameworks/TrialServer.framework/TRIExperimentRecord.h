/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:38:23 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/TrialServer.framework/TrialServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TrialServer/TrialServer-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class TRIExperimentDeployment, NSString, NSDate, NSArray;

@interface TRIExperimentRecord : NSObject <NSCopying, NSSecureCoding> {

	int _type;
	TRIExperimentDeployment* _experimentDeployment;
	NSString* _treatmentId;
	long long _status;
	NSDate* _startDate;
	NSDate* _endDate;
	NSArray* _namespaces;

}

@property (nonatomic,readonly) TRIExperimentDeployment * experimentDeployment;              //@synthesize experimentDeployment=_experimentDeployment - In the implementation block
@property (nonatomic,readonly) NSString * treatmentId;                                      //@synthesize treatmentId=_treatmentId - In the implementation block
@property (nonatomic,readonly) int type;                                                    //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) long long status;                                            //@synthesize status=_status - In the implementation block
@property (nonatomic,readonly) NSDate * startDate;                                          //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,readonly) NSDate * endDate;                                            //@synthesize endDate=_endDate - In the implementation block
@property (nonatomic,readonly) NSArray * namespaces;                                        //@synthesize namespaces=_namespaces - In the implementation block
+(void)load;
+(BOOL)supportsSecureCoding;
+(id)recordWithExperimentDeployment:(id)arg1 treatmentId:(id)arg2 type:(int)arg3 status:(long long)arg4 startDate:(id)arg5 endDate:(id)arg6 namespaces:(id)arg7 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)treatmentId;
-(long long)status;
-(NSArray *)namespaces;
-(NSDate *)endDate;
-(id)init;
-(int)type;
-(id)copyWithReplacementType:(int)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSDate *)startDate;
-(unsigned long long)hash;
-(BOOL)isEqualToRecord:(id)arg1 ;
-(id)description;
-(id)initWithExperimentDeployment:(id)arg1 treatmentId:(id)arg2 type:(int)arg3 status:(long long)arg4 startDate:(id)arg5 endDate:(id)arg6 namespaces:(id)arg7 ;
-(TRIExperimentDeployment *)experimentDeployment;
-(id)copyWithReplacementExperimentDeployment:(id)arg1 ;
-(id)copyWithReplacementTreatmentId:(id)arg1 ;
-(id)copyWithReplacementStatus:(long long)arg1 ;
-(id)copyWithReplacementStartDate:(id)arg1 ;
-(id)copyWithReplacementEndDate:(id)arg1 ;
-(id)copyWithReplacementNamespaces:(id)arg1 ;
-(void)_swizzledEncodeWithCoder:(id)arg1 ;
-(BOOL)isExpiredExperiment;
@end

