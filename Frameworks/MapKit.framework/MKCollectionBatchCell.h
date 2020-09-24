/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:47:25 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <UIKitCore/UICollectionViewCell.h>

@class UIActivityIndicatorView;

@interface MKCollectionBatchCell : UICollectionViewCell {

	UIActivityIndicatorView* _loadingView;

}
+(id)reuseIdentifier;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setupConstraitns;
-(void)startedLoadingBatch;
-(void)finishedLoadingBatch;
-(void)setupSubviews;
@end
