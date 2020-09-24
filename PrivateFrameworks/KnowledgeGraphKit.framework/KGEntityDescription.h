/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:35:36 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/KnowledgeGraphKit.framework/KnowledgeGraphKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface KGEntityDescription : NSObject {

	NSMutableDictionary* _classByNodeLabels;
	NSMutableDictionary* _classByEdgeLabels;
	Class _defaultNodeClass;
	Class _defaultEdgeClass;

}

@property (nonatomic,retain) Class defaultNodeClass;              //@synthesize defaultNodeClass=_defaultNodeClass - In the implementation block
@property (nonatomic,retain) Class defaultEdgeClass;              //@synthesize defaultEdgeClass=_defaultEdgeClass - In the implementation block
-(id)init;
-(Class)defaultEdgeClass;
-(Class)defaultNodeClass;
-(void)setDefaultEdgeClass:(Class)arg1 ;
-(void)setDefaultNodeClass:(Class)arg1 ;
-(void)registerNodeClass:(Class)arg1 forLabels:(id)arg2 ;
-(void)registerEdgeClass:(Class)arg1 forLabels:(id)arg2 ;
-(id)_generateAllPossibleLabelSetsForLabels:(id)arg1 labelSetsCache:(id)arg2 ;
-(Class)_selectClassFromPossibleLabels:(id)arg1 dictionary:(id)arg2 ;
-(Class)classForEdgeLabels:(id)arg1 ;
-(Class)classForNodeLabels:(id)arg1 ;
@end
