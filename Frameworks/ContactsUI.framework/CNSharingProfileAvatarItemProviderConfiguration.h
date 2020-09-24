/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:50:52 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class PRMonogramColor, CNPhotoPickerColorVariant;

@interface CNSharingProfileAvatarItemProviderConfiguration : NSObject {

	PRMonogramColor* _monogramColor;
	CNPhotoPickerColorVariant* _animojiColor;

}

@property (nonatomic,retain) PRMonogramColor * monogramColor;                       //@synthesize monogramColor=_monogramColor - In the implementation block
@property (nonatomic,retain) CNPhotoPickerColorVariant * animojiColor;              //@synthesize animojiColor=_animojiColor - In the implementation block
-(void)setAnimojiColor:(CNPhotoPickerColorVariant *)arg1 ;
-(CNPhotoPickerColorVariant *)animojiColor;
-(void)setMonogramColor:(PRMonogramColor *)arg1 ;
-(PRMonogramColor *)monogramColor;
@end
