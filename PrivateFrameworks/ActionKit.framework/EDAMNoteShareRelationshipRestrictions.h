/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:38:08 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ActionKit/FATObject.h>

@class NSNumber;

@interface EDAMNoteShareRelationshipRestrictions : FATObject {

	NSNumber* _noSetReadNote;
	NSNumber* _noSetModifyNote;
	NSNumber* _noSetFullAccess;

}

@property (nonatomic,retain) NSNumber * noSetReadNote;                //@synthesize noSetReadNote=_noSetReadNote - In the implementation block
@property (nonatomic,retain) NSNumber * noSetModifyNote;              //@synthesize noSetModifyNote=_noSetModifyNote - In the implementation block
@property (nonatomic,retain) NSNumber * noSetFullAccess;              //@synthesize noSetFullAccess=_noSetFullAccess - In the implementation block
+(id)structName;
+(id)structFields;
-(NSNumber *)noSetFullAccess;
-(void)setNoSetFullAccess:(NSNumber *)arg1 ;
-(NSNumber *)noSetReadNote;
-(void)setNoSetReadNote:(NSNumber *)arg1 ;
-(NSNumber *)noSetModifyNote;
-(void)setNoSetModifyNote:(NSNumber *)arg1 ;
@end

