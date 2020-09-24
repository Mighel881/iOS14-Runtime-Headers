/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:44:12 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/MapsSuggestions.framework/MapsSuggestions
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapsSuggestions/MapsSuggestionsTriggeringToggle.h>
#import <libobjc.A.dylib/LSApplicationWorkspaceObserverProtocol.h>

@class NSString;

@interface MapsSuggestionsMapsInstalledTriggeringToggle : MapsSuggestionsTriggeringToggle <LSApplicationWorkspaceObserverProtocol>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)didRemoveLastObserver;
-(void)applicationsDidInstall:(id)arg1 ;
-(BOOL)shouldRun;
-(void)applicationsDidUninstall:(id)arg1 ;
-(void)didAddFirstObserver;
@end
