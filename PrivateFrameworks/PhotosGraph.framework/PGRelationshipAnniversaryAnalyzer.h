/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:40:51 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/PGRelationshipAnalyzer.h>

@class PGGraphRelationshipProcessor, NSString;

@interface PGRelationshipAnniversaryAnalyzer : NSObject <PGRelationshipAnalyzer> {

	PGGraphRelationshipProcessor* _processor;

}

@property (nonatomic,__weak,readonly) PGGraphRelationshipProcessor * processor;              //@synthesize processor=_processor - In the implementation block
@property (nonatomic,readonly) NSString * name; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(PGGraphRelationshipProcessor *)processor;
-(NSString *)name;
-(void)runAnalysisWithProgressBlock:(/*^block*/id)arg1 ;
-(id)initWithRelationshipProcessor:(id)arg1 ;
@end
