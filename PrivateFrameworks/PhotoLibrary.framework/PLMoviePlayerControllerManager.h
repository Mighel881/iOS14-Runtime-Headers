/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:35:41 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray;

@interface PLMoviePlayerControllerManager : NSObject {

	NSMutableArray* _playerStack;

}
+(id)sharedInstance;
-(void)dealloc;
-(id)init;
-(void)moveControllerToTopOfStack:(id)arg1 ;
-(void)removeControllerFromStack:(id)arg1 ;
@end
