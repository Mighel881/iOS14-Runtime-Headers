/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:46:07 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OCDDelayedNodeContext;
@interface OCDDelayedNode : NSObject {

	id<OCDDelayedNodeContext> mDelayedContext;
	BOOL mLoaded;

}
-(BOOL)isLoaded;
-(BOOL)load;
-(void)setLoaded:(BOOL)arg1 ;
-(void)setDelayedContext:(id)arg1 ;
-(id)delayedContext;
@end
