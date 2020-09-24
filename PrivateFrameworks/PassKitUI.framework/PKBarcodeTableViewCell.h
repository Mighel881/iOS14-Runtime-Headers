/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:44:45 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <UIKitCore/UITableViewCell.h>

@class PKBarcodeStickerView, PKPass;

@interface PKBarcodeTableViewCell : UITableViewCell {

	PKBarcodeStickerView* _barcodeStickerView;
	CGSize _maximumBarcodeSize;
	PKPass* _pass;
	long long _barcodeStyle;

}

@property (nonatomic,retain) PKPass * pass;                       //@synthesize pass=_pass - In the implementation block
@property (assign,nonatomic) long long barcodeStyle;              //@synthesize barcodeStyle=_barcodeStyle - In the implementation block
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)setPass:(PKPass *)arg1 ;
-(void)_computeMaxBarcodeSize;
-(void)setBarcodeStyle:(long long)arg1 ;
-(long long)barcodeStyle;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(PKPass *)pass;
@end
