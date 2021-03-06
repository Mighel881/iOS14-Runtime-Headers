/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:50:22 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/CoreSpotlight.framework/CoreSpotlight
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, NSString;

@interface _MDHTMLParsing : NSObject {

	unsigned short* uniChars;
	unsigned long long uniCharLen;
	unsigned long long uniCharSize;
	unsigned char newLineBuffer[8];
	unsigned long long newLineLength;
	NSMutableDictionary* attributes;
	NSString* metaName;
	NSString* metaHttpEquiv;
	NSString* metaContent;
	unsigned long long sourceEncoding;
	unsigned sourceCFEncoding;
	unsigned long long indexingLimit;
	const char* titleStart;
	unsigned titleLength;
	BOOL inHead;
	BOOL inTitle;
	BOOL inScript;
	BOOL inStyle;

}
+(void)initialize;
-(void)dealloc;
-(void)appendUnichars:(const unsigned short*)arg1 length:(unsigned long long)arg2 ;
-(id)initWithEncoding:(unsigned long long)arg1 ;
-(void)appendText:(const char*)arg1 length:(unsigned long long)arg2 ;
-(void)appendNewline;
@end

