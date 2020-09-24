/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:41:27 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CameraUI/CameraUI-Structs.h>
#import <CameraUI/CAMCaptureCommand.h>

@interface CAMSetVideoOrientationCommand : CAMCaptureCommand {

	long long __captureOrientation;

}

@property (nonatomic,readonly) long long _captureOrientation;              //@synthesize _captureOrientation=__captureOrientation - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)_videoOrientationForCaptureOrientation:(long long)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)executeWithContext:(id)arg1 ;
-(long long)_captureOrientation;
-(id)initWithCaptureOrientation:(long long)arg1 ;
@end
