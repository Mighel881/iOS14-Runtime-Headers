/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:42:30 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Home/HFStaticItemProvider.h>

@class NSSet;

@interface HUCameraStorageDurationHeaderItemProvider : HFStaticItemProvider {

	unsigned long long _displayStyle;
	NSSet* _cameraProfiles;

}

@property (nonatomic,readonly) unsigned long long displayStyle;              //@synthesize displayStyle=_displayStyle - In the implementation block
@property (nonatomic,copy,readonly) NSSet * cameraProfiles;                  //@synthesize cameraProfiles=_cameraProfiles - In the implementation block
-(id)initWithItems:(id)arg1 ;
-(unsigned long long)displayStyle;
-(id)invalidationReasons;
-(NSSet *)cameraProfiles;
-(id)initWithCameraProfiles:(id)arg1 displayStyle:(unsigned long long)arg2 ;
@end
