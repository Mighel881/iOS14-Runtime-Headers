/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:38:23 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/TSUtility.framework/TSUtility
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_data, OS_dispatch_queue;
@class NSMutableArray, NSMutableSet, TSUZipWriterEntry, NSObject, NSError;

@interface TSUZipWriter : NSObject {

	NSMutableArray* _entries;
	NSMutableSet* _entryNames;
	TSUZipWriterEntry* _currentEntry;
	BOOL _calculateSize;
	BOOL _calculateCRC;
	unsigned short _entryTime;
	unsigned short _entryDate;
	long long _currentOffset;
	NSObject*<OS_dispatch_data> _localFileHeaderData;
	NSMutableArray* _entryDatas;
	unsigned long long _entryDataSize;
	NSObject*<OS_dispatch_queue> _writeQueue;
	long long _writtenOffset;
	NSError* _error;

}

@property (nonatomic,readonly) id<TSURandomWriteChannel> writeChannel; 
@property (nonatomic,readonly) unsigned long long archiveLength; 
-(void)enumerateEntriesUsingBlock:(/*^block*/id)arg1 ;
-(id)init;
-(void)addData:(id)arg1 ;
-(void)writeData:(id)arg1 ;
-(void)finishEntry;
-(id)localFileHeaderDataForEntry:(id)arg1 ;
-(void)flushEntryData;
-(void)handleWriteError:(id)arg1 ;
-(void)writeData:(id)arg1 offset:(long long)arg2 ;
-(void)writeCentralDirectory;
-(void)closeWithQueue:(id)arg1 completion:(/*^block*/id)arg2 ;
-(unsigned long long)archiveLength;
-(id<TSURandomWriteChannel>)writeChannel;
-(void)writeEntryWithName:(id)arg1 fromReadChannel:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)initEntryTime;
-(void)beginEntryWithName:(id)arg1 size:(unsigned long long)arg2 CRC:(unsigned)arg3 ;
-(void)beginEntryWithNameImpl:(id)arg1 size:(unsigned long long)arg2 CRC:(unsigned)arg3 ;
-(void)addDataImpl:(id)arg1 ;
-(void)writeEntryWithName:(id)arg1 size:(unsigned long long)arg2 CRC:(unsigned)arg3 fromReadChannel:(id)arg4 completion:(/*^block*/id)arg5 ;
-(id)centralFileHeaderDataForEntry:(id)arg1 ;
-(id)endOfCentralDirectoryDataWithOffset:(long long)arg1 size:(long long)arg2 ;
-(void)beginEntryWithName:(id)arg1 ;
@end

