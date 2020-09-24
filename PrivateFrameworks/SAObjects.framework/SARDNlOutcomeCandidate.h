/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:43:10 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSData, NSString;

@interface SARDNlOutcomeCandidate : SABaseClientBoundCommand

@property (nonatomic,copy) NSData * nlIntentHierarchyContainerProto; 
@property (nonatomic,copy) NSString * resultCandidateId; 
+(id)nlOutcomeCandidate;
+(id)nlOutcomeCandidateWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)encodedClassName;
-(id)groupIdentifier;
-(BOOL)requiresResponse;
-(NSData *)nlIntentHierarchyContainerProto;
-(void)setNlIntentHierarchyContainerProto:(NSData *)arg1 ;
-(NSString *)resultCandidateId;
-(void)setResultCandidateId:(NSString *)arg1 ;
@end
