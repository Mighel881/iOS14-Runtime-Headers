/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:46:31 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
@class NSFileHandle, NSDateFormatter;

@interface PLModelMigratorLog : NSObject {

	NSFileHandle* _fileHandle;
	NSDateFormatter* _dateFormatter;

}
+(id)openWriteFileAtURL:(id)arg1 ;
+(id)setup;
-(id)new;
-(id)buildFormatString:(const char*)arg1 ;
-(void)logFromCodeLocation:(SCD_Struct_PL39)arg1 subsystem:(id)arg2 level:(int)arg3 message:(id)arg4 ;
-(id)initWithFileHandle:(id)arg1 ;
-(id)init;
-(void)logFromCodeLocation:(SCD_Struct_PL39)arg1 subsystem:(id)arg2 level:(int)arg3 format:(const char*)arg4 ;
-(id)initWithLogFileURL:(id)arg1 ;
@end

