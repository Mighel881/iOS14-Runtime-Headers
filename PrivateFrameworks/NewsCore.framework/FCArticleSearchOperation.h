/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:36:14 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsCore/FCOperation.h>

@class NSString, FCCloudContext, FCArticleStreamingResults, NSError, FCArticleSearchOperationFeedbackResult;

@interface FCArticleSearchOperation : FCOperation {

	NSString* _query;
	NSString* _keyboardInputMode;
	double _scale;
	unsigned long long _resultsLimit;
	FCCloudContext* _cloudContext;
	/*^block*/id _articleSearchCompletion;
	unsigned long long _parsecQueryID;
	FCArticleStreamingResults* _results;
	NSError* _searchError;
	FCArticleSearchOperationFeedbackResult* _feedbackResult;

}

@property (nonatomic,retain) FCArticleStreamingResults * results;                                  //@synthesize results=_results - In the implementation block
@property (nonatomic,retain) NSError * searchError;                                                //@synthesize searchError=_searchError - In the implementation block
@property (nonatomic,retain) FCArticleSearchOperationFeedbackResult * feedbackResult;              //@synthesize feedbackResult=_feedbackResult - In the implementation block
@property (nonatomic,copy) NSString * query;                                                       //@synthesize query=_query - In the implementation block
@property (assign,nonatomic) NSString * keyboardInputMode;                                         //@synthesize keyboardInputMode=_keyboardInputMode - In the implementation block
@property (assign,nonatomic) double scale;                                                         //@synthesize scale=_scale - In the implementation block
@property (assign,nonatomic) unsigned long long resultsLimit;                                      //@synthesize resultsLimit=_resultsLimit - In the implementation block
@property (nonatomic,retain) FCCloudContext * cloudContext;                                        //@synthesize cloudContext=_cloudContext - In the implementation block
@property (copy) id articleSearchCompletion;                                                       //@synthesize articleSearchCompletion=_articleSearchCompletion - In the implementation block
@property (assign,nonatomic) unsigned long long parsecQueryID;                                     //@synthesize parsecQueryID=_parsecQueryID - In the implementation block
-(void)setQuery:(NSString *)arg1 ;
-(NSString *)query;
-(void)operationWillFinishWithError:(id)arg1 ;
-(void)performOperation;
-(FCArticleStreamingResults *)results;
-(BOOL)validateOperation;
-(void)setResults:(FCArticleStreamingResults *)arg1 ;
-(double)scale;
-(void)setScale:(double)arg1 ;
-(FCCloudContext *)cloudContext;
-(void)setResultsLimit:(unsigned long long)arg1 ;
-(id)articleSearchCompletion;
-(void)setSearchError:(NSError *)arg1 ;
-(void)_performSearchQuery:(/*^block*/id)arg1 ;
-(id)initWithParsecQueryID:(unsigned long long)arg1 ;
-(void)setArticleSearchCompletion:(id)arg1 ;
-(NSError *)searchError;
-(FCArticleSearchOperationFeedbackResult *)feedbackResult;
-(void)setFeedbackResult:(FCArticleSearchOperationFeedbackResult *)arg1 ;
-(void)setCloudContext:(FCCloudContext *)arg1 ;
-(unsigned long long)resultsLimit;
-(unsigned long long)parsecQueryID;
-(NSString *)keyboardInputMode;
-(void)setKeyboardInputMode:(NSString *)arg1 ;
-(void)setParsecQueryID:(unsigned long long)arg1 ;
@end
