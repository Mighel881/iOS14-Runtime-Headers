/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:40:34 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NeutrinoCore/NeutrinoCore-Structs.h>
#import <NeutrinoCore/NUBufferImageAdapter.h>
#import <libobjc.A.dylib/NUMutableBufferImage.h>

@protocol NUMutableBufferProvider;
@class NUImageLayout, NUPixelFormat, NUColorSpace, NURegion, NSString;

@interface NUMutableBufferImageAdapter : NUBufferImageAdapter <NUMutableBufferImage> {

	id<NUMutableBufferProvider> _mutableBufferProvider;

}

@property (readonly) NUImageLayout * layout; 
@property (readonly) NUPixelFormat * format; 
@property (readonly) NUColorSpace * colorSpace; 
@property (readonly) SCD_Struct_NU7 size; 
@property (copy,readonly) NURegion * validRegion; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)writeBufferRegion:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(id)initWithBufferProvider:(id)arg1 colorSpace:(id)arg2 validRegion:(id)arg3 ;
-(BOOL)copySurfaceStorage:(id)arg1 fromRect:(SCD_Struct_NU8)arg2 toPoint:(SCD_Struct_NU7)arg3 device:(id)arg4 ;
-(BOOL)copyBufferStorage:(id)arg1 fromRect:(SCD_Struct_NU8)arg2 toPoint:(SCD_Struct_NU7)arg3 ;
-(id)initWithMutableBuffer:(id)arg1 colorSpace:(id)arg2 validRegion:(id)arg3 ;
-(id)initWithMutableBufferProvider:(id)arg1 colorSpace:(id)arg2 validRegion:(id)arg3 ;
@end
