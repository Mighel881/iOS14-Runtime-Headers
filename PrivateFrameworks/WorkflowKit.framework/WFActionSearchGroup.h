/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:45:00 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSArray;

@interface WFActionSearchGroup : NSObject {

	NSString* _identifier;
	NSString* _localizedName;
	NSArray* _actions;

}

@property (nonatomic,copy,readonly) NSString * identifier;                 //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * localizedName;              //@synthesize localizedName=_localizedName - In the implementation block
@property (nonatomic,copy,readonly) NSArray * actions;                     //@synthesize actions=_actions - In the implementation block
-(NSString *)identifier;
-(NSArray *)actions;
-(NSString *)localizedName;
-(id)initWithIdentifier:(id)arg1 localizedName:(id)arg2 actions:(id)arg3 ;
@end
