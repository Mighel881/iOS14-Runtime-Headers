/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:40:19 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServicesUI.framework/AppleMediaServicesUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppleMediaServicesUI/AppleMediaServicesUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class UIColor;

@interface AMSUIWebAppearance : NSObject <NSCopying> {

	UIColor* _backgroundColor;

}

@property (nonatomic,retain) UIColor * backgroundColor;              //@synthesize backgroundColor=_backgroundColor - In the implementation block
+(id)secondarySystemGroupedBackgroundColor;
+(id)secondarySystemBackgroundColor;
+(id)tertiarySystemBackgroundColor;
+(id)tertiarySystemGroupedBackgroundColor;
+(id)systemBackgroundColor;
+(id)systemGroupedBackgroundColor;
+(id)tableViewAppearance;
+(id)defaultAppearance;
-(id)copyWithZone:(NSZone*)arg1 ;
-(UIColor *)backgroundColor;
-(void)setBackgroundColor:(UIColor *)arg1 ;
-(id)_convertHexString:(id)arg1 ;
-(void)updateBackgroundColorWithJSString:(id)arg1 ;
@end

