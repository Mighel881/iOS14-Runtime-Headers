/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:45:04 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSManagedObject.h>

@class NSString, NSData;

@interface VCVoiceShortcutSuggestionListManagedObject : NSManagedObject

@property (nonatomic,copy) NSString * associatedAppBundleIdentifier; 
@property (nonatomic,retain) NSData * serializedSuggestions; 
@property (assign,nonatomic) int shortcutAvailabilityOptions; 
+(id)fetchRequest;
-(id)descriptor;
@end
