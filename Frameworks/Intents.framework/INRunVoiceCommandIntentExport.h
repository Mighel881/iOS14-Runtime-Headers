/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:47:15 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class INSpeakableString, INVoiceCommandDeviceInformation, INIntentExecutionResult, NSString;


@protocol INRunVoiceCommandIntentExport <NSObject,JSExport>
@property (nonatomic,copy) INSpeakableString * voiceCommand; 
@property (nonatomic,copy) INVoiceCommandDeviceInformation * originDevice; 
@property (nonatomic,copy) INIntentExecutionResult * executionResult; 
@property (nonatomic,copy) NSString * previousIntentIdentifier; 
@required
-(INIntentExecutionResult *)executionResult;
-(void)setExecutionResult:(id)arg1;
-(INVoiceCommandDeviceInformation *)originDevice;
-(void)setOriginDevice:(id)arg1;
-(INSpeakableString *)voiceCommand;
-(NSString *)previousIntentIdentifier;
-(void)setPreviousIntentIdentifier:(id)arg1;
-(void)setVoiceCommand:(id)arg1;
-(id)init;

@end
