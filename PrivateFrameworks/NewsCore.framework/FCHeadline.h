/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:36:13 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsCore/NewsCore-Structs.h>
#import <libobjc.A.dylib/FCHeadlineProviding.h>
#import <libobjc.A.dylib/FCFeedElement.h>

@protocol FCChannelProviding, FCNativeAdProviding, FCHeadlineStocksFields;
@class NSString, FCHeadlineThumbnail, FCHeadlineExperimentalTitleMetadata, NSArray, NSDate, NSURL, NSSet, FCFeedPersonalizedItemScoreProfile, FCTopStoriesStyleConfiguration, FCCoverArt, COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohortList, COMAPPLEFELDSPARPROTOCOLLIVERPOOLConversionStats, NSData, FCIssue, FCArticleAudioTrack, COMAPPLEFELDSPARPROTOCOLVersionedPersonalizationVector;

@interface FCHeadline : NSObject <FCHeadlineProviding, FCFeedElement> {

	BOOL _hasThumbnail;
	BOOL _featureCandidate;
	BOOL _sponsored;
	BOOL _deleted;
	BOOL _isDraft;
	BOOL _isLocalDraft;
	BOOL _usesImageOnTopLayout;
	BOOL _needsRapidUpdates;
	BOOL _showMinimalChrome;
	BOOL _boundToContext;
	BOOL _hiddenFromFeeds;
	BOOL _pressRelease;
	BOOL _hiddenFromAutoFavorites;
	BOOL _paid;
	BOOL _showSubscriptionRequiredText;
	BOOL _canBePurchased;
	BOOL _webEmbedsEnabled;
	BOOL _displayAsNativeAd;
	BOOL _issueOnly;
	BOOL _showBundleSoftPaywall;
	BOOL _useTransparentNavigationBar;
	BOOL _hasAudioTrack;
	BOOL _bundlePaid;
	FCHeadlineThumbnail* _thumbnailLQ;
	FCHeadlineThumbnail* _thumbnail;
	FCHeadlineThumbnail* _thumbnailMedium;
	FCHeadlineThumbnail* _thumbnailHQ;
	FCHeadlineThumbnail* _thumbnailUltraHQ;
	FCHeadlineThumbnail* _thumbnailWidgetLQ;
	FCHeadlineThumbnail* _thumbnailWidget;
	FCHeadlineThumbnail* _thumbnailWidgetHQ;
	NSString* _title;
	FCHeadlineExperimentalTitleMetadata* _experimentalTitleMetadata;
	NSString* _articleID;
	NSString* _referencedArticleID;
	NSString* _clusterID;
	NSString* _primaryAudience;
	NSString* _shortExcerpt;
	NSArray* _topics;
	NSArray* _topicIDs;
	NSDate* _publishDate;
	long long _publisherArticleVersion;
	long long _backendArticleVersion;
	id<FCChannelProviding> _sourceChannel;
	NSString* _sourceName;
	NSURL* _contentURL;
	NSDate* _lastModifiedDate;
	NSDate* _lastFetchedDate;
	unsigned long long _contentType;
	NSURL* _videoURL;
	double _videoDuration;
	NSArray* _iAdCategories;
	NSArray* _iAdKeywords;
	NSArray* _iAdSectionIDs;
	NSArray* _blockedStorefrontIDs;
	NSArray* _allowedStorefrontIDs;
	NSString* _surfacedBySectionID;
	NSString* _surfacedByChannelID;
	NSString* _surfacedByTopicID;
	NSString* _surfacedByBinID;
	NSSet* _surfacedByTagIDs;
	NSString* _accessoryText;
	NSString* _callToActionText;
	NSString* _localDraftPath;
	FCFeedPersonalizedItemScoreProfile* _scoreProfile;
	double _personalizedScore;
	unsigned long long _topStoryType;
	NSArray* _relatedArticleIDs;
	NSArray* _moreFromPublisherArticleIDs;
	unsigned long long _storyType;
	FCTopStoriesStyleConfiguration* _storyStyle;
	long long _minimumNewsVersion;
	FCCoverArt* _coverArt;
	NSString* _videoCallToActionTitle;
	NSURL* _videoCallToActionURL;
	unsigned long long _feedOrder;
	double _globalUserFeedback;
	unsigned long long _halfLife;
	NSDate* _displayDate;
	COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohortList* _globalCohorts;
	COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohortList* _publisherCohorts;
	COMAPPLEFELDSPARPROTOCOLLIVERPOOLConversionStats* _globalConversionStats;
	COMAPPLEFELDSPARPROTOCOLLIVERPOOLConversionStats* _publisherConversionStats;
	NSString* _articleRecirculationConfigJSON;
	NSArray* _publisherSpecifiedArticleIDs;
	NSString* _language;
	NSString* _sponsoredBy;
	id<FCNativeAdProviding> _associatedAd;
	unsigned long long _role;
	id<FCHeadlineStocksFields> _stocksFields;
	NSData* _backingArticleRecordData;
	FCIssue* _masterIssue;
	long long _bodyTextLength;
	FCArticleAudioTrack* _narrativeTrack;
	FCArticleAudioTrack* _narrativeTrackSample;
	NSString* _narrativeTrackTextRanges;
	COMAPPLEFELDSPARPROTOCOLVersionedPersonalizationVector* _personalizationVector;
	COMAPPLEFELDSPARPROTOCOLVersionedPersonalizationVector* _personalizationVectorAlt;
	NSString* _identifier;
	NSURL* _headlineURL;
	NSString* _titleCompact;
	NSString* _excerpt;
	CGRect _thumbnailFocalFrame;

}

@property (nonatomic,copy) NSString * articleID;                                                                               //@synthesize articleID=_articleID - In the implementation block
@property (nonatomic,copy) NSString * clusterID;                                                                               //@synthesize clusterID=_clusterID - In the implementation block
@property (nonatomic,copy) NSString * identifier;                                                                              //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSURL * headlineURL;                                                                                //@synthesize headlineURL=_headlineURL - In the implementation block
@property (nonatomic,copy) NSString * title;                                                                                   //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * titleCompact;                                                                            //@synthesize titleCompact=_titleCompact - In the implementation block
@property (nonatomic,copy) id<FCChannelProviding> sourceChannel;                                                               //@synthesize sourceChannel=_sourceChannel - In the implementation block
@property (nonatomic,copy) NSString * sourceName;                                                                              //@synthesize sourceName=_sourceName - In the implementation block
@property (nonatomic,copy) NSDate * publishDate;                                                                               //@synthesize publishDate=_publishDate - In the implementation block
@property (assign,nonatomic) unsigned long long contentType;                                                                   //@synthesize contentType=_contentType - In the implementation block
@property (assign,getter=isSponsored,nonatomic) BOOL sponsored;                                                                //@synthesize sponsored=_sponsored - In the implementation block
@property (assign,getter=isDisplayingAsNativeAd,nonatomic) BOOL displayAsNativeAd;                                             //@synthesize displayAsNativeAd=_displayAsNativeAd - In the implementation block
@property (nonatomic,copy) NSString * sponsoredBy;                                                                             //@synthesize sponsoredBy=_sponsoredBy - In the implementation block
@property (assign,getter=isPaid,nonatomic) BOOL paid;                                                                          //@synthesize paid=_paid - In the implementation block
@property (assign,getter=isBundlePaid,nonatomic) BOOL bundlePaid;                                                              //@synthesize bundlePaid=_bundlePaid - In the implementation block
@property (nonatomic,copy) NSString * accessoryText;                                                                           //@synthesize accessoryText=_accessoryText - In the implementation block
@property (nonatomic,copy) NSString * callToActionText;                                                                        //@synthesize callToActionText=_callToActionText - In the implementation block
@property (nonatomic,retain) id<FCNativeAdProviding> associatedAd;                                                             //@synthesize associatedAd=_associatedAd - In the implementation block
@property (assign,nonatomic) CGRect thumbnailFocalFrame;                                                                       //@synthesize thumbnailFocalFrame=_thumbnailFocalFrame - In the implementation block
@property (assign,nonatomic) BOOL hasThumbnail;                                                                                //@synthesize hasThumbnail=_hasThumbnail - In the implementation block
@property (nonatomic,retain) FCHeadlineThumbnail * thumbnailLQ;                                                                //@synthesize thumbnailLQ=_thumbnailLQ - In the implementation block
@property (nonatomic,retain) FCHeadlineThumbnail * thumbnail;                                                                  //@synthesize thumbnail=_thumbnail - In the implementation block
@property (nonatomic,retain) FCHeadlineThumbnail * thumbnailMedium;                                                            //@synthesize thumbnailMedium=_thumbnailMedium - In the implementation block
@property (nonatomic,retain) FCHeadlineThumbnail * thumbnailHQ;                                                                //@synthesize thumbnailHQ=_thumbnailHQ - In the implementation block
@property (nonatomic,retain) FCHeadlineThumbnail * thumbnailUltraHQ;                                                           //@synthesize thumbnailUltraHQ=_thumbnailUltraHQ - In the implementation block
@property (nonatomic,copy) NSString * excerpt;                                                                                 //@synthesize excerpt=_excerpt - In the implementation block
@property (nonatomic,copy) NSString * shortExcerpt;                                                                            //@synthesize shortExcerpt=_shortExcerpt - In the implementation block
@property (nonatomic,copy) NSArray * topicIDs;                                                                                 //@synthesize topicIDs=_topicIDs - In the implementation block
@property (assign,getter=isDeleted,nonatomic) BOOL deleted;                                                                    //@synthesize deleted=_deleted - In the implementation block
@property (nonatomic,copy) NSString * surfacedBySectionID;                                                                     //@synthesize surfacedBySectionID=_surfacedBySectionID - In the implementation block
@property (nonatomic,copy) NSString * surfacedByChannelID;                                                                     //@synthesize surfacedByChannelID=_surfacedByChannelID - In the implementation block
@property (nonatomic,copy) NSString * surfacedByTopicID;                                                                       //@synthesize surfacedByTopicID=_surfacedByTopicID - In the implementation block
@property (nonatomic,copy) NSString * surfacedByBinID;                                                                         //@synthesize surfacedByBinID=_surfacedByBinID - In the implementation block
@property (nonatomic,copy) NSSet * surfacedByTagIDs;                                                                           //@synthesize surfacedByTagIDs=_surfacedByTagIDs - In the implementation block
@property (assign,nonatomic) unsigned long long feedOrder;                                                                     //@synthesize feedOrder=_feedOrder - In the implementation block
@property (assign,nonatomic) double globalUserFeedback;                                                                        //@synthesize globalUserFeedback=_globalUserFeedback - In the implementation block
@property (assign,nonatomic) unsigned long long halfLife;                                                                      //@synthesize halfLife=_halfLife - In the implementation block
@property (nonatomic,retain) FCFeedPersonalizedItemScoreProfile * scoreProfile;                                                //@synthesize scoreProfile=_scoreProfile - In the implementation block
@property (assign,nonatomic) double tileProminenceScore;                                                                       //@synthesize personalizedScore=_personalizedScore - In the implementation block
@property (assign,nonatomic) BOOL usesImageOnTopLayout;                                                                        //@synthesize usesImageOnTopLayout=_usesImageOnTopLayout - In the implementation block
@property (assign,nonatomic) unsigned long long topStoryType;                                                                  //@synthesize topStoryType=_topStoryType - In the implementation block
@property (assign,nonatomic) unsigned long long role;                                                                          //@synthesize role=_role - In the implementation block
@property (assign,nonatomic) BOOL showSubscriptionRequiredText;                                                                //@synthesize showSubscriptionRequiredText=_showSubscriptionRequiredText - In the implementation block
@property (nonatomic,copy) NSDate * displayDate;                                                                               //@synthesize displayDate=_displayDate - In the implementation block
@property (assign,nonatomic) unsigned long long storyType;                                                                     //@synthesize storyType=_storyType - In the implementation block
@property (nonatomic,retain) FCTopStoriesStyleConfiguration * storyStyle;                                                      //@synthesize storyStyle=_storyStyle - In the implementation block
@property (nonatomic,copy,readonly) NSString * versionIdentifier; 
@property (nonatomic,copy,readonly) NSString * referencedArticleID;                                                            //@synthesize referencedArticleID=_referencedArticleID - In the implementation block
@property (nonatomic,copy,readonly) NSString * primaryAudience;                                                                //@synthesize primaryAudience=_primaryAudience - In the implementation block
@property (nonatomic,readonly) long long backendArticleVersion;                                                                //@synthesize backendArticleVersion=_backendArticleVersion - In the implementation block
@property (nonatomic,readonly) FCHeadlineThumbnail * thumbnailWidgetLQ;                                                        //@synthesize thumbnailWidgetLQ=_thumbnailWidgetLQ - In the implementation block
@property (nonatomic,readonly) FCHeadlineThumbnail * thumbnailWidget;                                                          //@synthesize thumbnailWidget=_thumbnailWidget - In the implementation block
@property (nonatomic,readonly) FCHeadlineThumbnail * thumbnailWidgetHQ;                                                        //@synthesize thumbnailWidgetHQ=_thumbnailWidgetHQ - In the implementation block
@property (nonatomic,copy,readonly) NSURL * contentURL;                                                                        //@synthesize contentURL=_contentURL - In the implementation block
@property (nonatomic,copy,readonly) NSDate * lastModifiedDate;                                                                 //@synthesize lastModifiedDate=_lastModifiedDate - In the implementation block
@property (nonatomic,copy,readonly) NSDate * lastFetchedDate;                                                                  //@synthesize lastFetchedDate=_lastFetchedDate - In the implementation block
@property (nonatomic,copy,readonly) NSArray * topics;                                                                          //@synthesize topics=_topics - In the implementation block
@property (nonatomic,readonly) NSURL * videoURL;                                                                               //@synthesize videoURL=_videoURL - In the implementation block
@property (nonatomic,readonly) double videoDuration;                                                                           //@synthesize videoDuration=_videoDuration - In the implementation block
@property (getter=isFeatureCandidate,nonatomic,readonly) BOOL featureCandidate;                                                //@synthesize featureCandidate=_featureCandidate - In the implementation block
@property (nonatomic,copy,readonly) NSArray * iAdCategories;                                                                   //@synthesize iAdCategories=_iAdCategories - In the implementation block
@property (nonatomic,copy,readonly) NSArray * iAdKeywords;                                                                     //@synthesize iAdKeywords=_iAdKeywords - In the implementation block
@property (nonatomic,copy,readonly) NSArray * iAdSectionIDs;                                                                   //@synthesize iAdSectionIDs=_iAdSectionIDs - In the implementation block
@property (nonatomic,copy,readonly) NSArray * blockedStorefrontIDs;                                                            //@synthesize blockedStorefrontIDs=_blockedStorefrontIDs - In the implementation block
@property (nonatomic,copy,readonly) NSArray * allowedStorefrontIDs;                                                            //@synthesize allowedStorefrontIDs=_allowedStorefrontIDs - In the implementation block
@property (nonatomic,readonly) BOOL isDraft;                                                                                   //@synthesize isDraft=_isDraft - In the implementation block
@property (nonatomic,copy,readonly) NSString * localDraftPath;                                                                 //@synthesize localDraftPath=_localDraftPath - In the implementation block
@property (nonatomic,copy,readonly) NSArray * relatedArticleIDs;                                                               //@synthesize relatedArticleIDs=_relatedArticleIDs - In the implementation block
@property (nonatomic,copy,readonly) NSArray * moreFromPublisherArticleIDs;                                                     //@synthesize moreFromPublisherArticleIDs=_moreFromPublisherArticleIDs - In the implementation block
@property (nonatomic,readonly) long long minimumNewsVersion;                                                                   //@synthesize minimumNewsVersion=_minimumNewsVersion - In the implementation block
@property (nonatomic,readonly) FCCoverArt * coverArt;                                                                          //@synthesize coverArt=_coverArt - In the implementation block
@property (nonatomic,copy,readonly) NSString * videoCallToActionTitle;                                                         //@synthesize videoCallToActionTitle=_videoCallToActionTitle - In the implementation block
@property (nonatomic,copy,readonly) NSURL * videoCallToActionURL;                                                              //@synthesize videoCallToActionURL=_videoCallToActionURL - In the implementation block
@property (nonatomic,copy,readonly) NSString * language;                                                                       //@synthesize language=_language - In the implementation block
@property (nonatomic,readonly) BOOL needsRapidUpdates;                                                                         //@synthesize needsRapidUpdates=_needsRapidUpdates - In the implementation block
@property (nonatomic,readonly) BOOL showMinimalChrome;                                                                         //@synthesize showMinimalChrome=_showMinimalChrome - In the implementation block
@property (getter=isPressRelease,nonatomic,readonly) BOOL pressRelease;                                                        //@synthesize pressRelease=_pressRelease - In the implementation block
@property (getter=isHiddenFromAutoFavorites,nonatomic,readonly) BOOL hiddenFromAutoFavorites;                                  //@synthesize hiddenFromAutoFavorites=_hiddenFromAutoFavorites - In the implementation block
@property (getter=isBoundToContext,nonatomic,readonly) BOOL boundToContext;                                                    //@synthesize boundToContext=_boundToContext - In the implementation block
@property (getter=isHiddenFromFeeds,nonatomic,readonly) BOOL hiddenFromFeeds;                                                  //@synthesize hiddenFromFeeds=_hiddenFromFeeds - In the implementation block
@property (nonatomic,readonly) BOOL isTopStory; 
@property (nonatomic,readonly) BOOL isBlockedExplicitContent; 
@property (nonatomic,readonly) BOOL showPublisherLogo; 
@property (nonatomic,readonly) NSString * articleRecirculationConfigJSON;                                                      //@synthesize articleRecirculationConfigJSON=_articleRecirculationConfigJSON - In the implementation block
@property (nonatomic,readonly) NSArray * publisherSpecifiedArticleIDs;                                                         //@synthesize publisherSpecifiedArticleIDs=_publisherSpecifiedArticleIDs - In the implementation block
@property (nonatomic,readonly) BOOL isFullTrackAvailableToAll; 
@property (nonatomic,readonly) id<FCHeadlineStocksFields> stocksFields;                                                        //@synthesize stocksFields=_stocksFields - In the implementation block
@property (nonatomic,readonly) NSData * backingArticleRecordData;                                                              //@synthesize backingArticleRecordData=_backingArticleRecordData - In the implementation block
@property (nonatomic,copy,readonly) FCHeadlineExperimentalTitleMetadata * experimentalTitleMetadata;                           //@synthesize experimentalTitleMetadata=_experimentalTitleMetadata - In the implementation block
@property (nonatomic,readonly) BOOL webEmbedsEnabled;                                                                          //@synthesize webEmbedsEnabled=_webEmbedsEnabled - In the implementation block
@property (nonatomic,copy,readonly) FCIssue * masterIssue;                                                                     //@synthesize masterIssue=_masterIssue - In the implementation block
@property (getter=isIssueOnly,nonatomic,readonly) BOOL issueOnly;                                                              //@synthesize issueOnly=_issueOnly - In the implementation block
@property (nonatomic,readonly) BOOL showBundleSoftPaywall;                                                                     //@synthesize showBundleSoftPaywall=_showBundleSoftPaywall - In the implementation block
@property (nonatomic,copy,readonly) NSArray * linkedArticleIDs; 
@property (nonatomic,copy,readonly) NSArray * linkedIssueIDs; 
@property (nonatomic,readonly) BOOL isLocalDraft;                                                                              //@synthesize isLocalDraft=_isLocalDraft - In the implementation block
@property (nonatomic,readonly) BOOL useTransparentNavigationBar;                                                               //@synthesize useTransparentNavigationBar=_useTransparentNavigationBar - In the implementation block
@property (nonatomic,readonly) FCArticleAudioTrack * narrativeTrack;                                                           //@synthesize narrativeTrack=_narrativeTrack - In the implementation block
@property (nonatomic,readonly) FCArticleAudioTrack * narrativeTrackSample;                                                     //@synthesize narrativeTrackSample=_narrativeTrackSample - In the implementation block
@property (nonatomic,readonly) NSString * narrativeTrackTextRanges;                                                            //@synthesize narrativeTrackTextRanges=_narrativeTrackTextRanges - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) long long feedElementType; 
@property (nonatomic,copy,readonly) NSString * feedID; 
@property (nonatomic,readonly) unsigned long long order; 
@property (nonatomic,copy,readonly) NSString * sourceChannelID; 
@property (nonatomic,readonly) unsigned long long publishDateMilliseconds; 
@property (nonatomic,readonly) unsigned long long feedHalfLifeMilliseconds; 
@property (getter=isFromBlockedStorefront,nonatomic,readonly) BOOL fromBlockedStorefront; 
@property (getter=isExplicitContent,nonatomic,readonly) BOOL explicitContent; 
@property (nonatomic,readonly) long long publisherArticleVersion;                                                              //@synthesize publisherArticleVersion=_publisherArticleVersion - In the implementation block
@property (nonatomic,readonly) BOOL canBePurchased;                                                                            //@synthesize canBePurchased=_canBePurchased - In the implementation block
@property (nonatomic,copy,readonly) NSString * sourceFeedID; 
@property (nonatomic,copy,readonly) NSString * itemID; 
@property (nonatomic,copy,readonly) NSString * publisherID; 
@property (nonatomic,readonly) BOOL hasGlobalUserFeedback; 
@property (getter=isANF,nonatomic,readonly) BOOL anf; 
@property (nonatomic,readonly) BOOL hasVideo; 
@property (nonatomic,readonly) COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohortList * globalCohorts;                                    //@synthesize globalCohorts=_globalCohorts - In the implementation block
@property (nonatomic,readonly) COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohortList * publisherCohorts;                                 //@synthesize publisherCohorts=_publisherCohorts - In the implementation block
@property (nonatomic,readonly) COMAPPLEFELDSPARPROTOCOLLIVERPOOLConversionStats * globalConversionStats;                       //@synthesize globalConversionStats=_globalConversionStats - In the implementation block
@property (nonatomic,readonly) COMAPPLEFELDSPARPROTOCOLLIVERPOOLConversionStats * publisherConversionStats;                    //@synthesize publisherConversionStats=_publisherConversionStats - In the implementation block
@property (nonatomic,readonly) long long bodyTextLength;                                                                       //@synthesize bodyTextLength=_bodyTextLength - In the implementation block
@property (nonatomic,readonly) BOOL isFeatured; 
@property (nonatomic,readonly) BOOL hasAudioTrack;                                                                             //@synthesize hasAudioTrack=_hasAudioTrack - In the implementation block
@property (nonatomic,readonly) COMAPPLEFELDSPARPROTOCOLVersionedPersonalizationVector * personalizationVector;                 //@synthesize personalizationVector=_personalizationVector - In the implementation block
@property (nonatomic,readonly) COMAPPLEFELDSPARPROTOCOLVersionedPersonalizationVector * personalizationVectorAlt;              //@synthesize personalizationVectorAlt=_personalizationVectorAlt - In the implementation block
+(id)emptyHeadlineWithIdentifier:(id)arg1 ;
+(id)emptyHeadline;
-(void)setDisplayAsNativeAd:(BOOL)arg1 ;
-(BOOL)hasAudioTrack;
-(FCHeadlineThumbnail *)thumbnailUltraHQ;
-(id<FCHeadlineStocksFields>)stocksFields;
-(NSString *)identifier;
-(NSString *)primaryAudience;
-(NSString *)narrativeTrackTextRanges;
-(void)setPaid:(BOOL)arg1 ;
-(BOOL)isPaid;
-(BOOL)isFromBlockedStorefront;
-(NSString *)sourceChannelID;
-(unsigned long long)contentType;
-(unsigned long long)articleContentType;
-(NSString *)publisherID;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)order;
-(BOOL)isFeatureCandidate;
-(FCHeadlineThumbnail *)thumbnailWidgetLQ;
-(id<FCChannelProviding>)sourceChannel;
-(NSString *)itemID;
-(long long)publisherArticleVersion;
-(NSURL *)videoURL;
-(BOOL)hasThumbnail;
-(void)setSponsored:(BOOL)arg1 ;
-(unsigned long long)publishDateMilliseconds;
-(long long)feedElementType;
-(NSArray *)iAdCategories;
-(NSString *)surfacedByTopicID;
-(void)setBundlePaid:(BOOL)arg1 ;
-(NSArray *)allowedStorefrontIDs;
-(void)applyHeadlineMetadata:(id)arg1 configuration:(id)arg2 ;
-(COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohortList *)publisherCohorts;
-(void)setTitleCompact:(NSString *)arg1 ;
-(NSString *)articleID;
-(BOOL)showMinimalChrome;
-(BOOL)hasVideo;
-(NSString *)localDraftPath;
-(BOOL)isTopStory;
-(NSString *)language;
-(BOOL)showPublisherLogo;
-(void)setPublishDate:(NSDate *)arg1 ;
-(FCHeadlineThumbnail *)thumbnailLQ;
-(NSArray *)moreFromPublisherArticleIDs;
-(void)setIdentifier:(NSString *)arg1 ;
-(void)setHalfLife:(unsigned long long)arg1 ;
-(void)setFeedOrder:(unsigned long long)arg1 ;
-(BOOL)webEmbedsEnabled;
-(NSString *)title;
-(NSSet *)surfacedByTagIDs;
-(BOOL)showSubscriptionRequiredText;
-(unsigned long long)role;
-(NSString *)sourceFeedID;
-(NSString *)callToActionText;
-(void)setGlobalUserFeedback:(double)arg1 ;
-(void)setShortExcerpt:(NSString *)arg1 ;
-(NSString *)sponsoredBy;
-(NSString *)surfacedBySectionID;
-(void)overrideShortExcerpt:(id)arg1 ;
-(void)setHeadlineURL:(NSURL *)arg1 ;
-(COMAPPLEFELDSPARPROTOCOLLIVERPOOLConversionStats *)publisherConversionStats;
-(COMAPPLEFELDSPARPROTOCOLVersionedPersonalizationVector *)personalizationVectorAlt;
-(void)setShowSubscriptionRequiredText:(BOOL)arg1 ;
-(NSURL *)contentURL;
-(BOOL)isExplicitContent;
-(unsigned long long)feedOrder;
-(void)setTopicIDs:(NSArray *)arg1 ;
-(NSURL *)headlineURL;
-(NSString *)videoCallToActionTitle;
-(void)setRole:(unsigned long long)arg1 ;
-(long long)minimumNewsVersion;
-(void)enumerateTopicConversionStatsWithBlock:(/*^block*/id)arg1 ;
-(BOOL)isLocalDraft;
-(void)setSurfacedByTopicID:(NSString *)arg1 ;
-(void)setUsesImageOnTopLayout:(BOOL)arg1 ;
-(BOOL)isDisplayingAsNativeAd;
-(BOOL)canBePurchased;
-(NSArray *)topicIDs;
-(void)setScoreProfile:(FCFeedPersonalizedItemScoreProfile *)arg1 ;
-(NSArray *)iAdSectionIDs;
-(BOOL)isPressRelease;
-(id)contentManifestWithContext:(id)arg1 ;
-(NSString *)titleCompact;
-(void)setSurfacedByChannelID:(NSString *)arg1 ;
-(FCCoverArt *)coverArt;
-(void)setThumbnailHQ:(FCHeadlineThumbnail *)arg1 ;
-(void)setAccessoryText:(NSString *)arg1 ;
-(BOOL)needsRapidUpdates;
-(FCFeedPersonalizedItemScoreProfile *)scoreProfile;
-(id)init;
-(NSString *)excerpt;
-(BOOL)isBlockedExplicitContent;
-(void)setSponsoredBy:(NSString *)arg1 ;
-(void)setSurfacedByTagIDs:(NSSet *)arg1 ;
-(NSString *)versionIdentifier;
-(FCHeadlineExperimentalTitleMetadata *)experimentalTitleMetadata;
-(void)enumerateTopicCohortsWithBlock:(/*^block*/id)arg1 ;
-(NSString *)articleRecirculationConfigJSON;
-(FCHeadlineThumbnail *)thumbnailWidgetHQ;
-(COMAPPLEFELDSPARPROTOCOLLIVERPOOLConversionStats *)globalConversionStats;
-(COMAPPLEFELDSPARPROTOCOLVersionedPersonalizationVector *)personalizationVector;
-(NSArray *)blockedStorefrontIDs;
-(NSString *)referencedArticleID;
-(void)setSurfacedByBinID:(NSString *)arg1 ;
-(void)setThumbnail:(FCHeadlineThumbnail *)arg1 ;
-(NSString *)surfacedByChannelID;
-(BOOL)isDraft;
-(FCArticleAudioTrack *)narrativeTrackSample;
-(void)setSurfacedBySectionID:(NSString *)arg1 ;
-(BOOL)usesImageOnTopLayout;
-(BOOL)isEqual:(id)arg1 ;
-(NSURL *)videoCallToActionURL;
-(long long)bodyTextLength;
-(CGRect)thumbnailFocalFrame;
-(void)setContentType:(unsigned long long)arg1 ;
-(FCHeadlineThumbnail *)thumbnailMedium;
-(double)globalUserFeedback;
-(void)setSourceName:(NSString *)arg1 ;
-(BOOL)showBundleSoftPaywall;
-(NSString *)surfacedByBinID;
-(unsigned long long)halfLife;
-(FCHeadlineThumbnail *)thumbnailWidget;
-(void)setCallToActionText:(NSString *)arg1 ;
-(BOOL)hasGlobalUserFeedback;
-(FCHeadlineThumbnail *)thumbnail;
-(NSArray *)iAdKeywords;
-(unsigned long long)topStoryType;
-(FCArticleAudioTrack *)narrativeTrack;
-(void)setStoryType:(unsigned long long)arg1 ;
-(BOOL)isSponsored;
-(NSDate *)publishDate;
-(void)setThumbnailLQ:(FCHeadlineThumbnail *)arg1 ;
-(void)setExcerpt:(NSString *)arg1 ;
-(void)overrideTitle:(id)arg1 ;
-(unsigned long long)storyType;
-(NSString *)shortExcerpt;
-(void)setTopStoryType:(unsigned long long)arg1 ;
-(BOOL)isGap;
-(NSString *)accessoryText;
-(NSArray *)publisherSpecifiedArticleIDs;
-(NSString *)sourceName;
-(BOOL)isANF;
-(void)setTileProminenceScore:(double)arg1 ;
-(long long)backendArticleVersion;
-(void)assignStoryType:(unsigned long long)arg1 withConfiguration:(id)arg2 ;
-(void)setDisplayDate:(NSDate *)arg1 ;
-(void)setAssociatedAd:(id<FCNativeAdProviding>)arg1 ;
-(void)setThumbnailMedium:(FCHeadlineThumbnail *)arg1 ;
-(void)setStoryStyle:(FCTopStoriesStyleConfiguration *)arg1 ;
-(void)setThumbnailUltraHQ:(FCHeadlineThumbnail *)arg1 ;
-(NSDate *)lastFetchedDate;
-(FCHeadlineThumbnail *)thumbnailHQ;
-(void)setClusterID:(NSString *)arg1 ;
-(unsigned long long)hash;
-(BOOL)isBundlePaid;
-(FCIssue *)masterIssue;
-(COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohortList *)globalCohorts;
-(void)overrideDisplayDate:(id)arg1 ;
-(id<FCNativeAdProviding>)associatedAd;
-(BOOL)isDeleted;
-(void)setArticleID:(NSString *)arg1 ;
-(BOOL)isIssueOnly;
-(NSArray *)relatedArticleIDs;
-(BOOL)useTransparentNavigationBar;
-(void)setDeleted:(BOOL)arg1 ;
-(NSString *)clusterID;
-(NSArray *)topics;
-(FCTopStoriesStyleConfiguration *)storyStyle;
-(void)setTitle:(NSString *)arg1 ;
-(unsigned long long)feedHalfLifeMilliseconds;
-(NSDate *)displayDate;
-(NSDate *)lastModifiedDate;
-(double)videoDuration;
-(void)setSourceChannel:(id<FCChannelProviding>)arg1 ;
-(NSString *)description;
-(NSString *)feedID;
-(double)tileProminenceScore;
-(BOOL)isFullTrackAvailableToAll;
-(BOOL)isHiddenFromAutoFavorites;
-(NSData *)backingArticleRecordData;
-(BOOL)isHiddenFromFeeds;
-(BOOL)isBoundToContext;
-(void)setThumbnailFocalFrame:(CGRect)arg1 ;
-(void)setHasThumbnail:(BOOL)arg1 ;
@end

