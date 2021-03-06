/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:50:10 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthKit/HealthKit-Structs.h>
#import <libobjc.A.dylib/_HKStreamingDestination.h>

@protocol OS_dispatch_queue;
@class HKHealthWrapCodablePayloadHeader, NSUUID, _HKCompressionEngine, HKHealthWrapEncryptor, NSURL, NSOutputStream, NSObject, NSError, HKHealthWrapMessageConfiguration;

@interface HKHealthWrapMessage : NSObject <_HKStreamingDestination> {

	HKHealthWrapCodablePayloadHeader* _payloadHeader;
	NSUUID* _studyUUID;
	SecCertificateRef _certificate;
	_HKCompressionEngine* _compressionEngine;
	HKHealthWrapEncryptor* _encryptor;
	NSURL* _outputURL;
	NSOutputStream* _outputStream;
	NSObject*<OS_dispatch_queue> _encryptQueue;
	BOOL _compressionEnabled;
	BOOL _lastSuccess;
	NSError* _lastError;
	HKHealthWrapMessageConfiguration* _configuration;

}

@property (nonatomic,readonly) HKHealthWrapMessageConfiguration * configuration;              //@synthesize configuration=_configuration - In the implementation block
+(id)newOutputFileURL;
+(id)newOutputFileURLInDirectory:(id)arg1 ;
-(id)initWithSenderUUID:(id)arg1 studyUUID:(id)arg2 channel:(id)arg3 payloadType:(id)arg4 startDate:(id)arg5 endDate:(id)arg6 payloadIdentifier:(id)arg7 applicationData:(id)arg8 certificate:(SecCertificateRef)arg9 ;
-(void)_cleanup;
-(id)_codableKeyValuePairsFromDictionary:(id)arg1 ;
-(BOOL)startWithOutputFileURL:(id)arg1 error:(id*)arg2 ;
-(BOOL)_run:(/*^block*/id)arg1 error:(id*)arg2 ;
-(void)_writeDataToCompressor:(id)arg1 ;
-(BOOL)appendData:(id)arg1 error:(id*)arg2 ;
-(void)receiveSinkContent:(id)arg1 ;
-(void)sinkContentFinished;
-(BOOL)appendDataFromFileURL:(id)arg1 error:(id*)arg2 ;
-(void)dealloc;
-(BOOL)startWithError:(id*)arg1 ;
-(void)reset;
-(id)initWithConfiguration:(id)arg1 ;
-(HKHealthWrapMessageConfiguration *)configuration;
-(void)_finalize;
-(id)finalizeWithError:(id*)arg1 ;
@end

