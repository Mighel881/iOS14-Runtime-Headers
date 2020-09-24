/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:41:56 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Home/Home-Structs.h>
#import <Home/HFItem.h>
#import <libobjc.A.dylib/HFHomeKitSettingItemProtocol.h>

@protocol HFHomeKitSettingsVendor;
@class HFAccessorySettingsEntity, NSString, HMSetting, NSDictionary;

@interface HFAccessorySettingItem : HFItem <HFHomeKitSettingItemProtocol> {

	id<HFHomeKitSettingsVendor> _homeKitSettingsVendor;
	HMSetting* _setting;
	HFAccessorySettingsEntity* _entity;
	NSDictionary* _usageOptions;

}

@property (nonatomic,retain) id<HFHomeKitSettingsVendor> homeKitSettingsVendor;              //@synthesize homeKitSettingsVendor=_homeKitSettingsVendor - In the implementation block
@property (nonatomic,retain) HMSetting * setting;                                            //@synthesize setting=_setting - In the implementation block
@property (nonatomic,retain) HFAccessorySettingsEntity * entity;                             //@synthesize entity=_entity - In the implementation block
@property (nonatomic,retain) NSDictionary * usageOptions;                                    //@synthesize usageOptions=_usageOptions - In the implementation block
@property (nonatomic,readonly) NSString * settingKeyPath; 
@property (nonatomic,readonly) id<HFHomeKitObject> homeKitObject; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setEntity:(HFAccessorySettingsEntity *)arg1 ;
-(HFAccessorySettingsEntity *)entity;
-(void)setSetting:(HMSetting *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(HMSetting *)setting;
-(id)value;
-(id)updateValue:(id)arg1 ;
-(id)initWithHomeKitSettingsVendor:(id)arg1 usageOptions:(id)arg2 setting:(id)arg3 ;
-(id<HFHomeKitSettingsVendor>)homeKitSettingsVendor;
-(NSDictionary *)usageOptions;
-(NSString *)settingKeyPath;
-(void)_decorateOutcomeWithDependencies:(id)arg1 ;
-(void)setUsageOptions:(NSDictionary *)arg1 ;
-(void)_decorateOutcomeWithResultKeys:(id)arg1 ;
-(void)_decorateHiddenOrDisabled:(id)arg1 ;
-(id<HFHomeKitObject>)homeKitObject;
-(id)_subclass_updateWithOptions:(id)arg1 ;
-(void)_decorateOutcomeWithAccessorySettingResultKeys:(id)arg1 ;
-(BOOL)_validateKeyPathDependencies;
-(void)setHomeKitSettingsVendor:(id<HFHomeKitSettingsVendor>)arg1 ;
@end
