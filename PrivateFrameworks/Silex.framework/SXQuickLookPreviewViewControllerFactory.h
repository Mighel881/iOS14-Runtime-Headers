/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:35:56 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SXQuickLookPreviewViewControllerFactory.h>

@protocol SXQuickLookPreviewViewControllerFactory <NSObject>
@required
-(id)viewControllerForFile:(id)arg1 transitionContext:(id)arg2;

@end


@protocol SXMediaSharingPolicyProvider;
@class NSString;

@interface SXQuickLookPreviewViewControllerFactory : NSObject <SXQuickLookPreviewViewControllerFactory> {

	id<SXMediaSharingPolicyProvider> _mediaSharingPolicyProvider;

}

@property (nonatomic,readonly) id<SXMediaSharingPolicyProvider> mediaSharingPolicyProvider;              //@synthesize mediaSharingPolicyProvider=_mediaSharingPolicyProvider - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<SXMediaSharingPolicyProvider>)mediaSharingPolicyProvider;
-(id)viewControllerForFile:(id)arg1 transitionContext:(id)arg2 ;
-(id)initWithMediaSharingPolicyProvider:(id)arg1 ;
@end

