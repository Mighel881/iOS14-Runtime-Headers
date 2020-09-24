/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:44:21 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFOperation.h>

@protocol HMIHomePersonManagerDataSource;
@class NSSet;

@interface HMIRemoveFaceCropsOperation : HMFOperation {

	id<HMIHomePersonManagerDataSource> _dataSource;
	NSSet* _faceCropUUIDs;

}

@property (readonly) id<HMIHomePersonManagerDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (readonly) NSSet * faceCropUUIDs;                                      //@synthesize faceCropUUIDs=_faceCropUUIDs - In the implementation block
+(id)logCategory;
-(id<HMIHomePersonManagerDataSource>)dataSource;
-(void)main;
-(id)initWithDataSource:(id)arg1 faceCropUUIDs:(id)arg2 ;
-(NSSet *)faceCropUUIDs;
@end
