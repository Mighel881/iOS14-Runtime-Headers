/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:38:06 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GameCenterFoundation/GKAchievementDescription.h>

@class GKGame, NSString;

@interface GKLocalizedAchievementDescription : GKAchievementDescription {

	GKGame* _game;
	NSString* _iconImageName;

}

@property (retain) GKGame * game;                       //@synthesize game=_game - In the implementation block
@property (copy) NSString * iconImageName;              //@synthesize iconImageName=_iconImageName - In the implementation block
-(GKGame *)game;
-(void)dealloc;
-(id)title;
-(NSString *)iconImageName;
-(id)achievedDescription;
-(void)setGame:(GKGame *)arg1 ;
-(id)unachievedDescription;
-(id)imageNameForIcon;
-(id)_localizedStringFromKey:(id)arg1 ;
-(void)setIconImageName:(NSString *)arg1 ;
@end

