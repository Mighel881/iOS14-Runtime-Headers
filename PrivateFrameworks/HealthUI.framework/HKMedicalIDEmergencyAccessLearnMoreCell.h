/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:36:36 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UITableViewCell.h>

@class UITextView, NSAttributedString;

@interface HKMedicalIDEmergencyAccessLearnMoreCell : UITableViewCell {

	UITextView* _bodyTextView;
	NSAttributedString* _body;

}

@property (nonatomic,copy) NSAttributedString * body;              //@synthesize body=_body - In the implementation block
-(void)setBody:(NSAttributedString *)arg1 ;
-(NSAttributedString *)body;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)_addSubviews;
-(void)_setUpConstraints;
-(void)_setUpViews;
@end
