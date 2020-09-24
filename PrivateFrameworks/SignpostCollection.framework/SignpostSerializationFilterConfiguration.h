/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:46:00 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SignpostCollection.framework/SignpostCollection
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class SignpostSupportSubsystemCategoryFilter, SignpostSupportPIDFilter, SignpostSupportUniquePIDFilter, SignpostSupportExactProcessNameFilter;

@interface SignpostSerializationFilterConfiguration : NSObject {

	SignpostSupportSubsystemCategoryFilter* _subsystemCategoryFilter;
	SignpostSupportPIDFilter* _pidFilter;
	SignpostSupportUniquePIDFilter* _uniquePidFilter;
	SignpostSupportExactProcessNameFilter* _processNameFilter;

}

@property (nonatomic,retain) SignpostSupportSubsystemCategoryFilter * subsystemCategoryFilter;              //@synthesize subsystemCategoryFilter=_subsystemCategoryFilter - In the implementation block
@property (nonatomic,retain) SignpostSupportPIDFilter * pidFilter;                                          //@synthesize pidFilter=_pidFilter - In the implementation block
@property (nonatomic,retain) SignpostSupportUniquePIDFilter * uniquePidFilter;                              //@synthesize uniquePidFilter=_uniquePidFilter - In the implementation block
@property (nonatomic,retain) SignpostSupportExactProcessNameFilter * processNameFilter;                     //@synthesize processNameFilter=_processNameFilter - In the implementation block
-(void)setSubsystemCategoryFilter:(SignpostSupportSubsystemCategoryFilter *)arg1 ;
-(SignpostSupportSubsystemCategoryFilter *)subsystemCategoryFilter;
-(SignpostSupportPIDFilter *)pidFilter;
-(void)setPidFilter:(SignpostSupportPIDFilter *)arg1 ;
-(SignpostSupportUniquePIDFilter *)uniquePidFilter;
-(void)setUniquePidFilter:(SignpostSupportUniquePIDFilter *)arg1 ;
-(SignpostSupportExactProcessNameFilter *)processNameFilter;
-(void)setProcessNameFilter:(SignpostSupportExactProcessNameFilter *)arg1 ;
@end
