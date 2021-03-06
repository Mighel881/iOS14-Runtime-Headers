/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:51:12 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Metal/Metal-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray, NSDictionary;

@interface MTLLinkedFunctions : NSObject <NSCopying>

@property (nonatomic,copy) NSArray * functions; 
@property (nonatomic,copy) NSArray * binaryFunctions; 
@property (nonatomic,copy) NSDictionary * groups; 
+(id)alloc;
+(id)allocWithZone:(NSZone*)arg1 ;
+(id)linkedFunctions;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)reset;
@end

