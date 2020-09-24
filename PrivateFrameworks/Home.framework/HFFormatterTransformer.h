/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:41:59 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Home/Home-Structs.h>
#import <Foundation/NSFormatter.h>

@class NSFormatter;

@interface HFFormatterTransformer : NSFormatter {

	NSFormatter* _sourceFormatter;
	/*^block*/id _transformBlock;

}

@property (nonatomic,copy) NSFormatter * sourceFormatter;              //@synthesize sourceFormatter=_sourceFormatter - In the implementation block
@property (nonatomic,copy) id transformBlock;                          //@synthesize transformBlock=_transformBlock - In the implementation block
-(id)stringForObjectValue:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)transformBlock;
-(void)setTransformBlock:(id)arg1 ;
-(id)init;
-(void)setSourceFormatter:(NSFormatter *)arg1 ;
-(id)initWithSourceFormatter:(id)arg1 transformBlock:(/*^block*/id)arg2 ;
-(NSFormatter *)sourceFormatter;
@end
