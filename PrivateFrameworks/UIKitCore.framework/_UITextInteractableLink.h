/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:45:11 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/_UITextInteractableItem.h>

@class NSURL, LSAppLink;

@interface _UITextInteractableLink : _UITextInteractableItem {

	NSURL* _link;
	LSAppLink* _appLink;

}

@property (nonatomic,retain) NSURL * link;                     //@synthesize link=_link - In the implementation block
@property (nonatomic,retain) LSAppLink * appLink;              //@synthesize appLink=_appLink - In the implementation block
-(BOOL)isLink;
-(NSURL *)link;
-(LSAppLink *)appLink;
-(void)setAppLink:(LSAppLink *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setLink:(NSURL *)arg1 ;
@end
