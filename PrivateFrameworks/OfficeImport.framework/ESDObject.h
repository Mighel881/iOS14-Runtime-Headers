/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:46:07 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@class ESDContainer;

@interface ESDObject : NSObject {

	EshObject* mEshObject;
	ESDContainer* mParent;
	BOOL mIsChart;

}
-(id)parent;
-(void)dealloc;
-(BOOL)isChart;
-(int)shapeID;
-(id)initWithType:(unsigned short)arg1 ;
-(EshObject*)eshObject;
-(EshGroup*)eshGroup;
-(EshShape*)eshShape;
-(id)initWithEshObject:(EshObject*)arg1 ;
-(id)initFromReader:(OcReader*)arg1 type:(unsigned short)arg2 version:(unsigned short)arg3 ;
-(void)writeToWriter:(OcWriter*)arg1 ;
-(void)setChart:(BOOL)arg1 ;
-(id)initForExcelBinaryWithType:(unsigned short)arg1 version:(unsigned short)arg2 state:(id)arg3 ;
-(id)initPBWithType:(unsigned short)arg1 version:(unsigned short)arg2 state:(id)arg3 ;
@end

