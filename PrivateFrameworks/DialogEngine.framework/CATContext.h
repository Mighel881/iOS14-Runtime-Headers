/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:37:42 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/DialogEngine.framework/DialogEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface CATContext : NSObject {

	BOOL _isMultiUserEnabled;
	BOOL _requiresUserGrounding;
	unsigned _randomSeed;
	NSString* _siriLocale;
	NSString* _siriVoiceGender;
	long long _currentTime;

}

@property (nonatomic,retain) NSString * siriLocale;                   //@synthesize siriLocale=_siriLocale - In the implementation block
@property (nonatomic,retain) NSString * siriVoiceGender;              //@synthesize siriVoiceGender=_siriVoiceGender - In the implementation block
@property (assign) BOOL isMultiUserEnabled;                           //@synthesize isMultiUserEnabled=_isMultiUserEnabled - In the implementation block
@property (assign) BOOL requiresUserGrounding;                        //@synthesize requiresUserGrounding=_requiresUserGrounding - In the implementation block
@property (assign) unsigned randomSeed;                               //@synthesize randomSeed=_randomSeed - In the implementation block
@property (assign) long long currentTime;                             //@synthesize currentTime=_currentTime - In the implementation block
-(void)setCurrentTime:(long long)arg1 ;
-(void)setSiriLocale:(NSString *)arg1 ;
-(NSString *)siriLocale;
-(id)toDictionary;
-(unsigned)randomSeed;
-(void)setRandomSeed:(unsigned)arg1 ;
-(void)setSiriVoiceGender:(NSString *)arg1 ;
-(void)setIsMultiUserEnabled:(BOOL)arg1 ;
-(void)setRequiresUserGrounding:(BOOL)arg1 ;
-(NSString *)siriVoiceGender;
-(BOOL)requiresUserGrounding;
-(id)initWithInputLocale:(id)arg1 outputVoiceLocale:(id)arg2 ;
-(id)init;
-(BOOL)isMultiUserEnabled;
-(long long)currentTime;
@end
