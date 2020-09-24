/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:45:36 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, UIAlertController, UIPrintingProgressViewController, UIWindowScene, UIWindow;

@interface UIPrintingProgress : NSObject {

	NSString* _printerName;
	/*^block*/id _cancelHandler;
	double _startTime;
	double _displayTime;
	UIAlertController* _alertController;
	UIPrintingProgressViewController* _viewController;
	BOOL _donePrinting;
	BOOL _forceDisplayAsAlert;
	BOOL _creatingPDF;
	double _lastPageUpdate;
	double _progressAlertDelay;
	UIWindowScene* _hostingWindowScene;
	UIWindow* _progressAlertWindow;

}

@property (readonly) NSString * title; 
@property (assign) BOOL creatingPDF;                                //@synthesize creatingPDF=_creatingPDF - In the implementation block
@property (assign) double lastPageUpdate;                           //@synthesize lastPageUpdate=_lastPageUpdate - In the implementation block
@property (assign) double progressAlertDelay;                       //@synthesize progressAlertDelay=_progressAlertDelay - In the implementation block
@property (__weak) UIWindowScene * hostingWindowScene;              //@synthesize hostingWindowScene=_hostingWindowScene - In the implementation block
@property (retain) UIWindow * progressAlertWindow;                  //@synthesize progressAlertWindow=_progressAlertWindow - In the implementation block
-(void)endProgress;
-(id)initWithPrinterName:(id)arg1 forceDisplayAsAlert:(BOOL)arg2 hostingWindowScene:(id)arg3 cancelHandler:(/*^block*/id)arg4 ;
-(void)progressCancel;
-(UIWindowScene *)hostingWindowScene;
-(void)setHostingWindowScene:(UIWindowScene *)arg1 ;
-(void)hideProgressAnimated:(BOOL)arg1 ;
-(void)setProgressAlertDelay:(double)arg1 ;
-(UIWindow *)progressAlertWindow;
-(void)_mainQueue_presentProgressAlert;
-(void)setProgressAlertWindow:(UIWindow *)arg1 ;
-(void)_mainQueue_showProgress:(id)arg1 immediately:(BOOL)arg2 ;
-(BOOL)progressVisible;
-(void)setPage:(long long)arg1 ofPage:(long long)arg2 ;
-(void)_presentProgressAlert;
-(void)_mainQueue_hideProgressAnimated:(BOOL)arg1 ;
-(double)lastPageUpdate;
-(void)_mainQueue_endProgress;
-(void)showProgress:(id)arg1 immediately:(BOOL)arg2 ;
-(void)setLastPageUpdate:(double)arg1 ;
-(double)progressAlertDelay;
-(void)setPrintInfoState:(int)arg1 ;
-(void)setCreatingPDF:(BOOL)arg1 ;
-(id)initPDFCreationWithHostingWindowScene:(id)arg1 cancelHandler:(/*^block*/id)arg2 ;
-(double)nextPrintDelay;
-(NSString *)title;
-(BOOL)creatingPDF;
@end
