/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:38:50 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ClassroomKit/ClassroomKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol CRKASMLocation;
@class CRKASMCourseUpdateProperties;

@interface CRKASMCourseCreateProperties : NSObject <NSCopying> {

	id<CRKASMLocation> _location;
	CRKASMCourseUpdateProperties* _updateProperties;

}

@property (nonatomic,retain) id<CRKASMLocation> location;                                //@synthesize location=_location - In the implementation block
@property (nonatomic,copy) CRKASMCourseUpdateProperties * updateProperties;              //@synthesize updateProperties=_updateProperties - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(id<CRKASMLocation>)location;
-(void)setLocation:(id<CRKASMLocation>)arg1 ;
-(CRKASMCourseUpdateProperties *)updateProperties;
-(BOOL)areFulfilledByCourse:(id)arg1 ;
-(void)setUpdateProperties:(CRKASMCourseUpdateProperties *)arg1 ;
@end

