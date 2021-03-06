/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:35:41 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoardUIServices/SpringBoardUIServices-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/_SBUIWidgetHost.h>

@protocol _SBUIWidgetHost;
@class NSString;

@interface _SBUIWidgetViewController : UIViewController <_SBUIWidgetHost> {

	NSString* _widgetIdentifier;
	id<_SBUIWidgetHost> _widgetHost;

}

@property (nonatomic,copy) NSString * widgetIdentifier;                          //@synthesize widgetIdentifier=_widgetIdentifier - In the implementation block
@property (assign,nonatomic,__weak) id<_SBUIWidgetHost> widgetHost;              //@synthesize widgetHost=_widgetHost - In the implementation block
@property (nonatomic,readonly) CGSize preferredViewSize; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<_SBUIWidgetHost>)widgetHost;
-(void)requestLaunchOfURL:(id)arg1 ;
-(void)invalidatePreferredViewSize;
-(CGSize)preferredViewSize;
-(void)hostWillPresent;
-(void)hostDidPresent;
-(void)hostWillDismiss;
-(void)hostDidDismiss;
-(void)setWidgetHost:(id<_SBUIWidgetHost>)arg1 ;
-(NSString *)widgetIdentifier;
-(void)setWidgetIdentifier:(NSString *)arg1 ;
-(void)setVisibleWidgetsIDs:(id)arg1 ;
@end

