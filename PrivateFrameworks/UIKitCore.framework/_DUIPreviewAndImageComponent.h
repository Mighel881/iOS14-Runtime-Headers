/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:45:23 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class _DUIPreview, _DUIImageComponent;

@interface _DUIPreviewAndImageComponent : NSObject <NSSecureCoding> {

	_DUIPreview* _preview;
	_DUIImageComponent* _imageComponent;
	unsigned long long _index;

}

@property (nonatomic,retain) _DUIPreview * preview;                            //@synthesize preview=_preview - In the implementation block
@property (nonatomic,retain) _DUIImageComponent * imageComponent;              //@synthesize imageComponent=_imageComponent - In the implementation block
@property (assign,nonatomic) unsigned long long index;                         //@synthesize index=_index - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setIndex:(unsigned long long)arg1 ;
-(_DUIPreview *)preview;
-(unsigned long long)index;
-(void)setPreview:(_DUIPreview *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setImageComponent:(_DUIImageComponent *)arg1 ;
-(_DUIImageComponent *)imageComponent;
@end
