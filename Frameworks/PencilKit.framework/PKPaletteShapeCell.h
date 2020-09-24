/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:49:55 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PencilKit/PencilKit-Structs.h>
#import <UIKitCore/UICollectionViewCell.h>

@class UIImageView, PKPaletteShape;

@interface PKPaletteShapeCell : UICollectionViewCell {

	UIImageView* _imageView;
	PKPaletteShape* _shape;

}

@property (nonatomic,readonly) UIImageView * imageView;              //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,retain) PKPaletteShape * shape;                 //@synthesize shape=_shape - In the implementation block
-(PKPaletteShape *)shape;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setShape:(PKPaletteShape *)arg1 ;
-(UIImageView *)imageView;
@end
