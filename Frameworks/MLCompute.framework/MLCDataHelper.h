/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:50:14 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/MLCompute.framework/MLCompute
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface MLCDataHelper : NSObject
+(id)createDataWithFloatValue:(float)arg1 count:(unsigned long long)arg2 ;
+(void)fillData:(id)arg1 withFloatValue:(float)arg2 ;
+(BOOL)convertFp32toFp16:(unsigned long long)arg1 fp32Values:(float*)arg2 fp16Values:( *)arg3 ;
+(BOOL)convertFp16toFp32:(unsigned long long)arg1 fp16Values:( *)arg2 fp32Values:(float*)arg3 ;
@end

