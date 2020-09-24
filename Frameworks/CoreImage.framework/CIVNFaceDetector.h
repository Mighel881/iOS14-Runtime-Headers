/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:50:30 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreImage/CIDetector.h>

@class CIContext;

@interface CIVNFaceDetector : CIDetector {

	CIContext* context;

}

@property (retain,readonly) CIContext * context; 
-(void)dealloc;
-(id)featuresInImage:(id)arg1 options:(id)arg2 ;
-(id)initWithContext:(id)arg1 options:(id)arg2 ;
-(CIContext *)context;
@end
