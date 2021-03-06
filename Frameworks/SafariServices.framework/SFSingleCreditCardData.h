/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:51:07 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SafariShared/WBSSingleCreditCardData.h>

@class NSString;

@interface SFSingleCreditCardData : WBSSingleCreditCardData {

	NSString* _headerText;
	NSString* _displayText;

}

@property (nonatomic,copy,readonly) NSString * headerText;               //@synthesize headerText=_headerText - In the implementation block
@property (nonatomic,copy,readonly) NSString * displayText;              //@synthesize displayText=_displayText - In the implementation block
-(NSString *)displayText;
-(NSString *)headerText;
-(id)initWithHeaderText:(id)arg1 displayText:(id)arg2 type:(long long)arg3 value:(id)arg4 ;
@end

