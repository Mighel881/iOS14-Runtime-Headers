/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:36:39 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthUI/HealthUI-Structs.h>
#import <UIKitCore/UISearchBar.h>

@class NSString, UILabel;

@interface _SearchEntryWithMatchDisplay : UISearchBar {

	NSString* _matchDisplayString;
	UILabel* _matchDisplayLabel;

}

@property (readonly) UILabel * matchDisplayLabel;                        //@synthesize matchDisplayLabel=_matchDisplayLabel - In the implementation block
@property (nonatomic,retain) NSString * matchDisplayString;              //@synthesize matchDisplayString=_matchDisplayString - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setMatchDisplayString:(NSString *)arg1 ;
-(void)matchDisplayVisible:(BOOL)arg1 ;
-(id)_createMatchDisplayLabel;
-(NSString *)matchDisplayString;
-(UILabel *)matchDisplayLabel;
@end

