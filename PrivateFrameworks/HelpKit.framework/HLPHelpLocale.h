/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:36:41 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HelpKit.framework/HelpKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSArray;

@interface HLPHelpLocale : NSObject {

	NSString* _path;
	NSArray* _isoCodes;

}

@property (nonatomic,copy) NSString * path;                 //@synthesize path=_path - In the implementation block
@property (nonatomic,copy) NSArray * isoCodes;              //@synthesize isoCodes=_isoCodes - In the implementation block
-(void)setPath:(NSString *)arg1 ;
-(NSString *)path;
-(id)debugDescription;
-(id)initWithDictionary:(id)arg1 ;
-(NSArray *)isoCodes;
-(void)setIsoCodes:(NSArray *)arg1 ;
@end

