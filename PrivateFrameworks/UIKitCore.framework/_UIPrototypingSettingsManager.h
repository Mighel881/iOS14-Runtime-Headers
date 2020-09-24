/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:45:45 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, NSArray;

@interface _UIPrototypingSettingsManager : NSObject {

	NSMutableDictionary* _storedSettings;

}

@property (nonatomic,retain) NSMutableDictionary * storedSettings;              //@synthesize storedSettings=_storedSettings - In the implementation block
@property (nonatomic,readonly) NSArray * allSettings; 
+(id)sharedManager;
-(NSArray *)allSettings;
-(id)init;
-(void)synchronizeStoredSettings;
-(id)settingOfType:(long long)arg1 withName:(id)arg2 ;
-(void)deleteAllStoredSettings;
-(NSMutableDictionary *)storedSettings;
-(void)setStoredSettings:(NSMutableDictionary *)arg1 ;
@end
