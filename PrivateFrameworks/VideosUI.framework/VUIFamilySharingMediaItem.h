/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:42:46 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideosUI/VUIMediaItem.h>

@class NSString, VUIExtrasInfo, VUIFamilySharingRelationships, VUIVideosPlayable, VUIFamilySharingEntity, VUIFamilySharingMediaItemAssetController;

@interface VUIFamilySharingMediaItem : VUIMediaItem {

	NSString* _artworkURL;
	NSString* _previewArtworkURL;
	VUIExtrasInfo* _iTunesExtrasInfo;
	VUIFamilySharingRelationships* _relationships;
	VUIVideosPlayable* _videosPlayable;
	NSString* _buyParams;
	NSString* _personalizedBuyParams;
	VUIFamilySharingEntity* _entity;
	VUIFamilySharingMediaItemAssetController* _assetController;

}

@property (nonatomic,retain) VUIFamilySharingEntity * entity;                                         //@synthesize entity=_entity - In the implementation block
@property (nonatomic,retain) VUIFamilySharingMediaItemAssetController * assetController;              //@synthesize assetController=_assetController - In the implementation block
@property (nonatomic,retain) NSString * artworkURL;                                                   //@synthesize artworkURL=_artworkURL - In the implementation block
@property (nonatomic,retain) NSString * previewArtworkURL;                                            //@synthesize previewArtworkURL=_previewArtworkURL - In the implementation block
@property (nonatomic,retain) VUIExtrasInfo * iTunesExtrasInfo;                                        //@synthesize iTunesExtrasInfo=_iTunesExtrasInfo - In the implementation block
@property (nonatomic,retain) VUIFamilySharingRelationships * relationships;                           //@synthesize relationships=_relationships - In the implementation block
@property (nonatomic,retain) VUIVideosPlayable * videosPlayable;                                      //@synthesize videosPlayable=_videosPlayable - In the implementation block
@property (nonatomic,retain) NSString * buyParams;                                                    //@synthesize buyParams=_buyParams - In the implementation block
@property (nonatomic,retain) NSString * personalizedBuyParams;                                        //@synthesize personalizedBuyParams=_personalizedBuyParams - In the implementation block
-(id)episodeNumber;
-(id)bookmark;
-(id)seasonNumber;
-(NSString *)artworkURL;
-(void)setArtworkURL:(NSString *)arg1 ;
-(id)releaseDate;
-(void)setEntity:(VUIFamilySharingEntity *)arg1 ;
-(VUIFamilySharingEntity *)entity;
-(id)releaseYear;
-(id)showTitle;
-(VUIFamilySharingRelationships *)relationships;
-(id)duration;
-(id)contentDescription;
-(id)title;
-(NSString *)buyParams;
-(id)genreTitle;
-(void)setBuyParams:(NSString *)arg1 ;
-(id)contentRating;
-(void)setRelationships:(VUIFamilySharingRelationships *)arg1 ;
-(id)storeID;
-(void)setPreviewArtworkURL:(NSString *)arg1 ;
-(id)initWithAMSEntity:(id)arg1 requestedProperties:(id)arg2 ;
-(VUIFamilySharingMediaItemAssetController *)assetController;
-(void)setAssetController:(VUIFamilySharingMediaItemAssetController *)arg1 ;
-(id)extrasURL;
-(id)seasonCanonicalID;
-(id)showCanonicalID;
-(id)seasonIdentifier;
-(void)setPersonalizedBuyParams:(NSString *)arg1 ;
-(NSString *)personalizedBuyParams;
-(id)_itunesExtrasDictionary;
-(NSString *)previewArtworkURL;
-(id)_bestRedownloadOffer;
-(id)_bestOffer;
-(VUIExtrasInfo *)iTunesExtrasInfo;
-(VUIVideosPlayable *)videosPlayable;
-(id)showIdentifier;
-(void)setITunesExtrasInfo:(VUIExtrasInfo *)arg1 ;
-(void)setVideosPlayable:(VUIVideosPlayable *)arg1 ;
@end

