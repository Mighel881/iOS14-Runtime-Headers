/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:36:44 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SVVideoInteractionObserverFactory.h>

@protocol SVVideoEventTrackerProviding;
@class NSString;

@interface SVNowPlayingInteractionObserverFactory : NSObject <SVVideoInteractionObserverFactory> {

	id<SVVideoEventTrackerProviding> _eventTrackerProvider;

}

@property (nonatomic,readonly) id<SVVideoEventTrackerProviding> eventTrackerProvider;              //@synthesize eventTrackerProvider=_eventTrackerProvider - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<SVVideoEventTrackerProviding>)eventTrackerProvider;
-(id)createInteractionObserverForVideo:(id)arg1 ;
-(id)initWithVideoEventTrackerProvider:(id)arg1 ;
@end

