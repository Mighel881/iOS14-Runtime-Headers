/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:39:52 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NotesShared/ICAttachmentModel.h>

@class NSString, NSDate;

@interface ICAttachmentAudioModel : ICAttachmentModel {

	BOOL _recordedInNotes;
	NSString* _title;
	NSDate* _creationDate;

}

@property (assign,nonatomic) BOOL recordedInNotes;              //@synthesize recordedInNotes=_recordedInNotes - In the implementation block
@property (nonatomic,copy) NSString * title;                    //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSDate * creationDate;               //@synthesize creationDate=_creationDate - In the implementation block
+(id)contentInfoTextWithAttachmentCount:(unsigned long long)arg1 ;
-(/*^block*/id)genericBrickThumbnailCreator;
-(/*^block*/id)genericListThumbnailCreator;
-(void)updateFileBasedAttributes;
-(NSString *)title;
-(void)setCreationDate:(NSDate *)arg1 ;
-(BOOL)recordedInNotes;
-(void)setRecordedInNotes:(BOOL)arg1 ;
-(id)initWithAttachment:(id)arg1 ;
-(NSDate *)creationDate;
-(void)setTitle:(NSString *)arg1 ;
@end
