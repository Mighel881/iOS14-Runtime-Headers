/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:46:09 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class EDString, EDReference;

@interface EDHyperlink : NSObject {

	EDString* mPath;
	EDString* mDosPath;
	EDString* mDescriptionText;
	EDString* mTextMark;
	EDString* mToolTip;
	EDReference* mReference;
	int mType;

}
+(id)hyperlink;
-(void)setPath:(id)arg1 ;
-(id)path;
-(id)descriptionText;
-(void)setDescriptionText:(id)arg1 ;
-(int)type;
-(id)reference;
-(void)setType:(int)arg1 ;
-(id)toolTip;
-(void)setReference:(id)arg1 ;
-(id)dosPath;
-(id)description;
-(void)setDosPath:(id)arg1 ;
-(void)setTextMark:(id)arg1 ;
-(void)setToolTip:(id)arg1 ;
-(id)textMark;
@end

