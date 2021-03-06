/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:36:46 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SVInteraction.h>

@protocol SVInteraction <NSObject>
@property (setter=uponInteraction:,nonatomic,copy) id interactionBlock; 
@required
-(void)uponInteraction:(/*^block*/id)arg1;
-(id)interactionBlock;

@end


@class NSString;

@interface SVInteraction : NSObject <SVInteraction> {

	/*^block*/id interactionBlock;
	/*^block*/id _contextProvider;

}

@property (nonatomic,readonly) id contextProvider;                                   //@synthesize contextProvider=_contextProvider - In the implementation block
@property (setter=uponInteraction:,nonatomic,copy) id interactionBlock; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)performWithObject:(id)arg1 ;
-(id)contextProvider;
-(void)uponInteraction:(/*^block*/id)arg1 ;
-(id)initWithContextProvider:(/*^block*/id)arg1 ;
-(id)interactionBlock;
@end

