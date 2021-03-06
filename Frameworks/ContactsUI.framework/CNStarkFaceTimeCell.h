/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:50:51 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContactsUI/CNContactCell.h>
#import <libobjc.A.dylib/CNStarkActionViewDelegate.h>

@protocol CNPropertyCellDelegate;
@class NSDictionary, UILabel, CNStarkActionView, NSString;

@interface CNStarkFaceTimeCell : CNContactCell <CNStarkActionViewDelegate> {

	id<CNPropertyCellDelegate> _delegate;
	NSDictionary* _labelTextAttributes;
	UILabel* _faceTimeLabel;
	CNStarkActionView* _actionView;

}

@property (nonatomic,retain) UILabel * faceTimeLabel;                                 //@synthesize faceTimeLabel=_faceTimeLabel - In the implementation block
@property (nonatomic,readonly) CNStarkActionView * actionView;                        //@synthesize actionView=_actionView - In the implementation block
@property (assign,nonatomic,__weak) id<CNPropertyCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSDictionary * labelTextAttributes;                        //@synthesize labelTextAttributes=_labelTextAttributes - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)requiresConstraintBasedLayout;
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)setSeparatorStyle:(long long)arg1 ;
-(void)_cnui_applyContactStyle;
-(NSDictionary *)labelTextAttributes;
-(CNStarkActionView *)actionView;
-(id)variableConstraints;
-(void)setDelegate:(id<CNPropertyCellDelegate>)arg1 ;
-(UILabel *)faceTimeLabel;
-(void)setLabelTextAttributes:(NSDictionary *)arg1 ;
-(void)actionViewTapped:(id)arg1 ;
-(BOOL)supportsTintColorValue;
-(BOOL)shouldShowStar;
-(void)updateTransportButtons;
-(void)setFaceTimeLabel:(UILabel *)arg1 ;
-(id)constantConstraints;
-(id<CNPropertyCellDelegate>)delegate;
-(void)performDefaultAction;
@end

