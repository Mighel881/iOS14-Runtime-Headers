/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:39:23 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/MetricMeasurement.framework/MetricMeasurement
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MetricMeasurement/MetricMeasurement-Structs.h>
#import <MetricMeasurement/MXMProbe.h>

@class MXMMutableSampleData, NSThread;

@interface MXMSystemProbe : MXMProbe {

	MXMMutableSampleData* _data;
	NSThread* _updateThread;

}
+(id)probe;
-(id)init;
-(void)_buildData:(id)arg1 timestamp:(unsigned long long)arg2 processorCount:(unsigned)arg3 ;
-(void)_buildData:(id)arg1 timestamp:(unsigned long long)arg2 cpuLoad:(processor_cpu_load_info*)arg3 ;
-(void)_buildData:(id)arg1 timestamp:(unsigned long long)arg2 cpuInfo:(processor_basic_info*)arg3 ;
-(void)_buildData:(id)arg1 timestamp:(unsigned long long)arg2 loadInfo:(processor_set_load_info*)arg3 ;
-(void)_buildData:(id)arg1 timestamp:(unsigned long long)arg2 hostInfo:(vm_statistics64*)arg3 ;
-(void)_prepareData;
-(void)_beginUpdates;
-(void)_stopUpdates;
-(void)_pollSystemLoop;
-(void)_gatherConstantSystemProperties;
-(void)_pollSystemMainBody;
-(void)_pollSystemHostProcessorInfoWithData:(id)arg1 ;
-(void)_pollProcessorLoadInformationWithData:(id)arg1 ;
-(void)_pollSystemLoadInformationWithData:(id)arg1 ;
-(void)_pollSystemThermalsWithData:(id)arg1 ;
-(void)_pollSystemBatteryWithData:(id)arg1 ;
@end
