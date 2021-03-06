/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:43:35 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VoiceShortcutClient/WFSingleConnectionXPCListener.h>
#import <libobjc.A.dylib/NSXPCListenerDelegate.h>
#import <libobjc.A.dylib/WFJavaScriptRunnerHostProtocol.h>

@class NSItemProvider, NSString;

@interface WFJavaScriptRunner : WFSingleConnectionXPCListener <NSXPCListenerDelegate, WFJavaScriptRunnerHostProtocol> {

	NSItemProvider* _itemProvider;

}

@property (nonatomic,readonly) NSItemProvider * itemProvider;              //@synthesize itemProvider=_itemProvider - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSItemProvider *)itemProvider;
-(id)initWithItemProvider:(id)arg1 ;
-(void)runJavaScript:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
@end

