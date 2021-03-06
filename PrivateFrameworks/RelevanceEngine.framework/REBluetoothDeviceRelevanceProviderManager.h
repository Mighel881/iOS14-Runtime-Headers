/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:36:23 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RelevanceEngine/RERelevanceProviderManager.h>
#import <libobjc.A.dylib/REPredictorObserver.h>
#import <libobjc.A.dylib/REBluetoothDeviceRelevanceProviderManagerProperties.h>

@class NSString;

@interface REBluetoothDeviceRelevanceProviderManager : RERelevanceProviderManager <REPredictorObserver, REBluetoothDeviceRelevanceProviderManagerProperties> {

	BOOL _connectedToCar;
	BOOL _connectedToSpeaker;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL connectedToCar; 
@property (nonatomic,readonly) BOOL connectedToSpeaker; 
+(id)_features;
+(Class)_relevanceProviderClass;
+(BOOL)_wantsSeperateRelevanceQueue;
-(void)pause;
-(id)initWithQueue:(id)arg1 ;
-(void)resume;
-(BOOL)connectedToCar;
-(id)_valueForProvider:(id)arg1 feature:(id)arg2 ;
-(void)_prepareForUpdate;
-(void)predictorDidUpdate:(id)arg1 ;
-(BOOL)connectedToSpeaker;
@end

