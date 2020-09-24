/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:36:43 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/TeaUI.framework/TeaUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/TSProcessedImageRequestType.h>

@class NSDictionary, NSString;

@interface TeaUI.ProcessedImageRequest : _UKNOWN_SUPERCLASS_ <TSProcessedImageRequestType> {

	 assetHandles;
	 cacheIdentifier;
	 size;
	 imageRenderingMode;

}

@property (readonly,nonatomic) NSDictionary * assetHandles; 
@property (readonly,nonatomic) NSString * cacheIdentifier; 
-(NSString *)cacheIdentifier;
-(NSDictionary *)assetHandles;
@end
