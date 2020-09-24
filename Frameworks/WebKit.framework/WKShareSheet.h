/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:50:04 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebKit/WebKit-Structs.h>
#import <UIKit/UIAdaptivePresentationControllerDelegate.h>

@class NSString;

@interface WKShareSheet : NSObject <UIAdaptivePresentationControllerDelegate> {

	RetainPtr<NSURL>* _temporaryFileShareDirectory;
	WeakObjCPtr<WKWebView> _webView;
	WeakObjCPtr<id<WKShareSheetDelegate> > _delegate;
	CompletionHandler<void (bool)>* _completionHandler;
	RetainPtr<UIActivityViewController>* _shareSheetViewController;
	RetainPtr<UIViewController>* _presentationViewController;
	BOOL _didShareSuccessfully;

}

@property (assign,nonatomic,__weak) id<WKShareSheetDelegate> delegate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)createTemporarySharingDirectory;
+(id)writeFileToShareableURL:(id)arg1 data:(id)arg2 temporaryDirectory:(id)arg3 ;
+(id)createRandomSharingDirectoryForFile:(id)arg1 ;
-(void)presentationControllerDidDismiss:(id)arg1 ;
-(void)presentWithShareDataArray:(id)arg1 inRect:(Optional<WebCore::FloatRect>)arg2 ;
-(void)setDelegate:(id<WKShareSheetDelegate>)arg1 ;
-(void)presentWithParameters:(const ShareDataWithParsedURL*)arg1 inRect:(Optional<WebCore::FloatRect>)arg2 completionHandler:(CompletionHandler<void (bool)>*)arg3 ;
-(id)initWithView:(id)arg1 ;
-(id<WKShareSheetDelegate>)delegate;
-(void)dismiss;
@end
