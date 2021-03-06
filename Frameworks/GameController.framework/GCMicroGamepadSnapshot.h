/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:47:28 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/GameController.framework/GameController
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GameController/GCMicroGamepad.h>

@class NSData;

@interface GCMicroGamepadSnapshot : GCMicroGamepad {

	NSData* snapshotData;

}

@property (copy) NSData * snapshotData; 
-(id)init;
-(NSData *)snapshotData;
-(id)initWithController:(id)arg1 snapshotData:(id)arg2 ;
-(void)setSnapshotData:(NSData *)arg1 ;
-(id)initWithSnapshotData:(id)arg1 ;
-(BOOL)supportsDpadTaps;
@end

