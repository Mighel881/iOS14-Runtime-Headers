/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:38:27 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NewsAnalyticsUpload.framework/NewsAnalyticsUpload
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NDAnalyticsPayloadAssemblerConfigProvider;
@interface NDAnalyticsPayloadAssembler : NSObject {

	id<NDAnalyticsPayloadAssemblerConfigProvider> _configProvider;
	unsigned long long _maxPayloadSize;

}

@property (nonatomic,retain) id<NDAnalyticsPayloadAssemblerConfigProvider> configProvider;              //@synthesize configProvider=_configProvider - In the implementation block
@property (assign,nonatomic) unsigned long long maxPayloadSize;                                         //@synthesize maxPayloadSize=_maxPayloadSize - In the implementation block
-(id<NDAnalyticsPayloadAssemblerConfigProvider>)configProvider;
-(void)assemblePayloadsWithEntries:(id)arg1 lastUploadDatesByContentType:(id)arg2 droppedEnvelopeReasonsToUpload:(id)arg3 envelopeSizeByEntry:(id)arg4 completion:(/*^block*/id)arg5 ;
-(id)initWithConfigProvider:(id)arg1 maxPayloadSize:(unsigned long long)arg2 ;
-(id)init;
-(void)determinePayloadDeliveryWindowForEntries:(id)arg1 withLastUploadDatesByContentType:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)setConfigProvider:(id<NDAnalyticsPayloadAssemblerConfigProvider>)arg1 ;
-(void)_fetchAnalyticsEnvelopeContentTypeConfigsWithCompletion:(/*^block*/id)arg1 ;
-(void)setMaxPayloadSize:(unsigned long long)arg1 ;
-(unsigned long long)maxPayloadSize;
@end

