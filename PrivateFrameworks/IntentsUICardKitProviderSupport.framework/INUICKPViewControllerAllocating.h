/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:44:42 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/IntentsUICardKitProviderSupport.framework/IntentsUICardKitProviderSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSArray, NSDictionary;


@protocol INUICKPViewControllerAllocating <NSObject>
@property (assign,nonatomic) BOOL requiresUserConsent; 
@property (nonatomic,copy,readonly) NSArray * allocatedViewControllers; 
@property (nonatomic,copy,readonly) NSDictionary * viewControllersByInitialInterfaceSection; 
@property (nonatomic,copy,readonly) NSArray * redundantInterfaceSections; 
@property (assign,nonatomic,__weak) id<INUICKPViewControllerAllocatingDelegate> delegate; 
@optional
-(void)setDelegate:(id)arg1;
-(id<INUICKPViewControllerAllocatingDelegate>)delegate;

@required
-(BOOL)requiresUserConsent;
-(void)setRequiresUserConsent:(BOOL)arg1;
-(NSArray *)redundantInterfaceSections;
-(void)performAllocationsFromInteraction:(id)arg1 initialInterfaceSections:(id)arg2 completion:(/*^block*/id)arg3;
-(NSArray *)allocatedViewControllers;
-(NSDictionary *)viewControllersByInitialInterfaceSection;

@end

