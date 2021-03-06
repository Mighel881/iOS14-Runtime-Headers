/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:38:39 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/ATXAnchorModelPhase2TrainerProtocol.h>

@class ATXAnchor, ATXAnchorModelDataStoreWrapper, ATXAnchorModelHyperParameters, NSString;

@interface ATXAnchorModelPhase2Trainer : NSObject <ATXAnchorModelPhase2TrainerProtocol> {

	ATXAnchor* _anchor;
	ATXAnchorModelDataStoreWrapper* _storeWrapper;
	ATXAnchorModelHyperParameters* _hyperParameters;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(long long)candidateClassifierType;
-(id)initForAnchor:(id)arg1 ;
-(id)trainPhase2ForCandidate:(id)arg1 candidateType:(id)arg2 ;
-(id)initForAnchor:(id)arg1 anchorModelDataStoreWrapper:(id)arg2 ;
-(id)trainClassifierForCandidateId:(id)arg1 candidateType:(id)arg2 ;
-(id)trainNaivePositiveCandidateClassifierForCandidate:(id)arg1 candidateType:(id)arg2 ;
-(id)trainGamePlayKitDecisionTreeCandidateClassifierForCandidate:(id)arg1 candidateType:(id)arg2 ;
-(id)trainStrictContextMatchCandidateClassifierForCandidate:(id)arg1 candidateType:(id)arg2 ;
@end

