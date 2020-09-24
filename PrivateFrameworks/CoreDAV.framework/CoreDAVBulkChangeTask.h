/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:38:14 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreDAV/CoreDAVTask.h>

@class NSString, NSDictionary, NSData, NSMutableSet, NSSet;

@interface CoreDAVBulkChangeTask : CoreDAVTask {

	NSString* _appSpecificNamespace;
	NSString* _appSpecificDataProp;
	NSDictionary* _uuidsToAddActions;
	NSDictionary* _hrefsToModDeleteActions;
	NSString* _checkCTag;
	BOOL _simple;
	BOOL _returnChangedData;
	NSData* _pushedData;
	BOOL _validCTag;
	NSString* _nextCTag;
	NSMutableSet* _bulkChangeResponses;
	NSString* _requestDataContentType;

}

@property (nonatomic,readonly) NSDictionary * uuidsToAddActions;                    //@synthesize uuidsToAddActions=_uuidsToAddActions - In the implementation block
@property (nonatomic,readonly) NSDictionary * hrefsToModDeleteActions;              //@synthesize hrefsToModDeleteActions=_hrefsToModDeleteActions - In the implementation block
@property (nonatomic,readonly) NSString * nextCTag;                                 //@synthesize nextCTag=_nextCTag - In the implementation block
@property (nonatomic,readonly) NSSet * bulkChangeResponses;                         //@synthesize bulkChangeResponses=_bulkChangeResponses - In the implementation block
-(NSDictionary *)uuidsToAddActions;
-(NSDictionary *)hrefsToModDeleteActions;
-(id)requestBody;
-(id)httpMethod;
-(id)additionalHeaderValues;
-(void)finishCoreDAVTaskWithError:(id)arg1 ;
-(id)copyDefaultParserForContentType:(id)arg1 ;
-(id)initWithURL:(id)arg1 checkCTag:(id)arg2 simple:(BOOL)arg3 returnChangedData:(BOOL)arg4 uuidsToAddActions:(id)arg5 hrefsToModDeleteActions:(id)arg6 ;
-(NSString *)nextCTag;
-(void)fillOutDataWithUUIDsToAddActions:(id)arg1 hrefsToModDeleteActions:(id)arg2 ;
-(NSSet *)bulkChangeResponses;
@end
