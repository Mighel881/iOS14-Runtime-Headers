/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:36:50 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/DocumentCamera.framework/DocumentCamera
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class DCDocumentCameraViewServiceSessionRequest, ICDocCamImageCache;

@interface DCDocumentCameraViewServiceSession : NSObject <NSSecureCoding> {

	int _viewServicePid;
	DCDocumentCameraViewServiceSessionRequest* _sessionRequest;
	ICDocCamImageCache* _docCamImageCache;

}

@property (nonatomic,readonly) DCDocumentCameraViewServiceSessionRequest * sessionRequest;              //@synthesize sessionRequest=_sessionRequest - In the implementation block
@property (nonatomic,readonly) int viewServicePid;                                                      //@synthesize viewServicePid=_viewServicePid - In the implementation block
@property (nonatomic,readonly) ICDocCamImageCache * docCamImageCache;                                   //@synthesize docCamImageCache=_docCamImageCache - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setup;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(DCDocumentCameraViewServiceSessionRequest *)sessionRequest;
-(int)viewServicePid;
-(id)initWithSessionRequest:(id)arg1 ;
-(ICDocCamImageCache *)docCamImageCache;
@end
