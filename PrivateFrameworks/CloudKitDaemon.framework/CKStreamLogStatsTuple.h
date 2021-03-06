/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:37:55 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface CKStreamLogStatsTuple : NSObject {

	NSString* _fileAndLine;
	unsigned long long _count;
	unsigned long long _size;

}

@property (nonatomic,retain) NSString * fileAndLine;                //@synthesize fileAndLine=_fileAndLine - In the implementation block
@property (assign,nonatomic) unsigned long long count;              //@synthesize count=_count - In the implementation block
@property (assign,nonatomic) unsigned long long size;               //@synthesize size=_size - In the implementation block
-(void)setSize:(unsigned long long)arg1 ;
-(void)setCount:(unsigned long long)arg1 ;
-(unsigned long long)count;
-(unsigned long long)size;
-(NSString *)fileAndLine;
-(void)setFileAndLine:(NSString *)arg1 ;
@end

