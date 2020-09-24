/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:45:29 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol TUICandidateViewState <NSObject>
@property (nonatomic,readonly) id<TUICandidateViewStyle> style; 
@property (nonatomic,readonly) id<TUICandidateViewStyle> disambiguationStyle; 
@property (nonatomic,readonly) long long primaryGridRowType; 
@property (nonatomic,readonly) long long disambiguationGridRowType; 
@property (nonatomic,readonly) long long disambiguationGridPosition; 
@property (nonatomic,readonly) long long sortControlPosition; 
@property (nonatomic,readonly) long long inlineTextViewPosition; 
@property (nonatomic,readonly) long long arrowButtonPosition; 
@property (nonatomic,readonly) long long arrowButtonDirection; 
@property (nonatomic,readonly) BOOL hasBackdrop; 
@property (nonatomic,readonly) BOOL candidateNumberEnabled; 
@property (nonatomic,readonly) double yOffset; 
@property (nonatomic,readonly) double additionalHeight; 
@property (nonatomic,readonly) CGPoint arrowButtonOffset; 
@property (nonatomic,readonly) unsigned long long borders; 
@required
-(double)yOffset;
-(unsigned long long)borders;
-(double)additionalHeight;
-(long long)arrowButtonDirection;
-(long long)arrowButtonPosition;
-(id<TUICandidateViewStyle>)disambiguationStyle;
-(long long)sortControlPosition;
-(long long)disambiguationGridPosition;
-(long long)primaryGridRowType;
-(id<TUICandidateViewStyle>)style;
-(BOOL)hasBackdrop;
-(CGPoint)arrowButtonOffset;
-(long long)disambiguationGridRowType;
-(long long)inlineTextViewPosition;
-(BOOL)candidateNumberEnabled;

@end
