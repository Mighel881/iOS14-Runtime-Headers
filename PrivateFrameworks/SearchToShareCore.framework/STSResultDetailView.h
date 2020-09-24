/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:40:01 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SearchToShareCore.framework/SearchToShareCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SearchToShareCore/SearchToShareCore-Structs.h>
#import <UIKitCore/UIView.h>

@protocol STSResultDetailViewDelegate;
@class UIVisualEffectView, UIImageView, STSResultDetailFooter, UIView, UIImage, STSAnimatedImageInfo, NSString;

@interface STSResultDetailView : UIView {

	UIVisualEffectView* _backgroundView;
	UIImageView* _thumbnailView;
	STSResultDetailFooter* _footer;
	BOOL _isFullscreen;
	BOOL _useBackgroundBlur;
	id<STSResultDetailViewDelegate> _delegate;
	UIView* _customContentView;
	UIImage* _thumbnail;
	STSAnimatedImageInfo* _thumbnailInfo;
	CGSize _contentSize;

}

@property (assign,nonatomic,__weak) id<STSResultDetailViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) CGSize contentSize;                                           //@synthesize contentSize=_contentSize - In the implementation block
@property (nonatomic,retain) UIView * customContentView;                                   //@synthesize customContentView=_customContentView - In the implementation block
@property (nonatomic,readonly) UIImage * thumbnail;                                        //@synthesize thumbnail=_thumbnail - In the implementation block
@property (nonatomic,readonly) STSAnimatedImageInfo * thumbnailInfo;                       //@synthesize thumbnailInfo=_thumbnailInfo - In the implementation block
@property (assign,nonatomic) CGSize providerIconSize; 
@property (nonatomic,retain) UIImage * providerIcon; 
@property (nonatomic,copy) NSString * providerName; 
@property (assign,nonatomic) BOOL isFullscreen;                                            //@synthesize isFullscreen=_isFullscreen - In the implementation block
@property (assign,nonatomic) BOOL useBackgroundBlur;                                       //@synthesize useBackgroundBlur=_useBackgroundBlur - In the implementation block
-(BOOL)isFullscreen;
-(UIEdgeInsets)layoutMargins;
-(void)setCustomContentView:(UIView *)arg1 ;
-(NSString *)providerName;
-(UIView *)customContentView;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)contentSize;
-(void)setContentSize:(CGSize)arg1 ;
-(void)layoutSubviews;
-(void)setDelegate:(id<STSResultDetailViewDelegate>)arg1 ;
-(void)setProviderName:(NSString *)arg1 ;
-(UIImage *)thumbnail;
-(id<STSResultDetailViewDelegate>)delegate;
-(void)setIsFullscreen:(BOOL)arg1 ;
-(void)setUseBackgroundBlur:(BOOL)arg1 ;
-(STSAnimatedImageInfo *)thumbnailInfo;
-(CGSize)providerIconSize;
-(void)setProviderIconSize:(CGSize)arg1 ;
-(UIImage *)providerIcon;
-(void)setProviderIcon:(UIImage *)arg1 ;
-(void)updateWithThumbnail:(id)arg1 orThumbnailInfo:(id)arg2 ;
-(CGRect)contentFrameForBounds:(CGRect)arg1 traitCollection:(id)arg2 ;
-(BOOL)useBackgroundBlur;
-(void)_didTapProvider:(id)arg1 ;
-(void)_didTapSend:(id)arg1 ;
-(void)_calculateFramesForBounds:(CGRect)arg1 traitCollection:(id)arg2 andSetFrames:(BOOL)arg3 contentFrame:(CGRect*)arg4 ;
@end
