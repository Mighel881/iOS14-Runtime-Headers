/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:50:41 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface VNANFDDetectorCompoundRequestConfigurationGroups : NSObject {

	NSMutableDictionary* _regionOfInterestConfigurations;

}
+(id)createCompoundConfigurationHashKeyForRequest:(id)arg1 compoundRequestRevision:(unsigned long long)arg2 ;
-(id)allConfigurations;
-(id)init;
-(unsigned long long)count;
-(id)configurationForRequest:(id)arg1 ;
@end

