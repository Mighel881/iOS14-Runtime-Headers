/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:38:15 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/Translation.framework/Translation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Translation/Translation-Structs.h>
#import <Translation/FTMultiUserStreamingRequest.h>

@class FTMultiUserStartSpeechRequest, FTUpdateAudioInfo, FTSetRequestOrigin, FTSetSpeechContext, FTSetSpeechProfile, FTSetEndpointerState, FTAudioPacket, FTFinishAudio, FTResetServerEndpointer, FTSetAlternateRecognitionSausage;

@interface FTMutableMultiUserStreamingRequest : FTMultiUserStreamingRequest

@property (assign,nonatomic) long long content_type; 
@property (nonatomic,copy) FTMultiUserStartSpeechRequest * contentAsFTMultiUserStartSpeechRequest; 
@property (nonatomic,copy) FTUpdateAudioInfo * contentAsFTUpdateAudioInfo; 
@property (nonatomic,copy) FTSetRequestOrigin * contentAsFTSetRequestOrigin; 
@property (nonatomic,copy) FTSetSpeechContext * contentAsFTSetSpeechContext; 
@property (nonatomic,copy) FTSetSpeechProfile * contentAsFTSetSpeechProfile; 
@property (nonatomic,copy) FTSetEndpointerState * contentAsFTSetEndpointerState; 
@property (nonatomic,copy) FTAudioPacket * contentAsFTAudioPacket; 
@property (nonatomic,copy) FTFinishAudio * contentAsFTFinishAudio; 
@property (nonatomic,copy) FTResetServerEndpointer * contentAsFTResetServerEndpointer; 
@property (nonatomic,copy) FTSetAlternateRecognitionSausage * contentAsFTSetAlternateRecognitionSausage; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(FTAudioPacket *)contentAsFTAudioPacket;
-(void)setContentAsFTAudioPacket:(FTAudioPacket *)arg1 ;
-(FTFinishAudio *)contentAsFTFinishAudio;
-(void)setContentAsFTFinishAudio:(FTFinishAudio *)arg1 ;
-(long long)content_type;
-(FTUpdateAudioInfo *)contentAsFTUpdateAudioInfo;
-(void)setContentAsFTUpdateAudioInfo:(FTUpdateAudioInfo *)arg1 ;
-(FTSetRequestOrigin *)contentAsFTSetRequestOrigin;
-(void)setContentAsFTSetRequestOrigin:(FTSetRequestOrigin *)arg1 ;
-(FTSetSpeechContext *)contentAsFTSetSpeechContext;
-(void)setContentAsFTSetSpeechContext:(FTSetSpeechContext *)arg1 ;
-(FTSetSpeechProfile *)contentAsFTSetSpeechProfile;
-(void)setContentAsFTSetSpeechProfile:(FTSetSpeechProfile *)arg1 ;
-(FTSetEndpointerState *)contentAsFTSetEndpointerState;
-(void)setContentAsFTSetEndpointerState:(FTSetEndpointerState *)arg1 ;
-(FTResetServerEndpointer *)contentAsFTResetServerEndpointer;
-(void)setContentAsFTResetServerEndpointer:(FTResetServerEndpointer *)arg1 ;
-(FTSetAlternateRecognitionSausage *)contentAsFTSetAlternateRecognitionSausage;
-(void)setContentAsFTSetAlternateRecognitionSausage:(FTSetAlternateRecognitionSausage *)arg1 ;
-(void)setContent_type:(long long)arg1 ;
-(id)init;
-(FTMultiUserStartSpeechRequest *)contentAsFTMultiUserStartSpeechRequest;
-(void)setContentAsFTMultiUserStartSpeechRequest:(FTMultiUserStartSpeechRequest *)arg1 ;
@end
