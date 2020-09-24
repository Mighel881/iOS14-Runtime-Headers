/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:42:34 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NewsUI2.framework/NewsUI2
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/FCBundleSubscriptionChangeObserver.h>
#import <libobjc.A.dylib/FCSubscriptionObserving.h>

@interface NewsUI2.OfflineIssueAutoDownloader : NSObject <FCBundleSubscriptionChangeObserver, FCSubscriptionObserving> {

	 currentIssuesChecker;
	 offlineIssueManager;
	 bundleSubscriptionManager;
	 triggerDeduper;

}
-(void)subscriptionController:(id)arg1 didAddTags:(id)arg2 changeTags:(id)arg3 moveTags:(id)arg4 removeTags:(id)arg5 subscriptionType:(unsigned long long)arg6 eventInitiationLevel:(long long)arg7 ;
-(void)bundleSubscriptionDidSubscribe:(id)arg1 ;
-(id)init;
@end
