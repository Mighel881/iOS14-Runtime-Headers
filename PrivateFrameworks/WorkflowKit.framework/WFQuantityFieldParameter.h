/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:45:02 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WorkflowKit/WFNumberFieldParameter.h>
#import <libobjc.A.dylib/WFModuleSummarySupporting.h>

@class NSArray, NSString;

@interface WFQuantityFieldParameter : WFNumberFieldParameter <WFModuleSummarySupporting> {

	NSArray* _possibleUnits;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSArray * possibleUnits;                 //@synthesize possibleUnits=_possibleUnits - In the implementation block
+(BOOL)defaultAllowsNegativeNumbers;
+(BOOL)defaultAllowsDecimalNumbers;
-(id)moduleSummarySlotsForState:(id)arg1 ;
-(id)defaultUnit;
-(id)initWithDefinition:(id)arg1 ;
-(Class)singleStateClass;
-(void)createDialogRequestWithAttribution:(id)arg1 defaultState:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)defaultSerializedRepresentation;
-(void)setPossibleUnits:(NSArray *)arg1 ;
-(id)localizedLabelForPossibleUnit:(id)arg1 magnitude:(id)arg2 style:(unsigned long long)arg3 ;
-(NSArray *)possibleUnits;
@end
