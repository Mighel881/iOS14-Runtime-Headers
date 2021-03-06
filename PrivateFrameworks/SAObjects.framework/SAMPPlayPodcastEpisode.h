/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:43:08 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SADomainCommand.h>

@class NSString, NSArray, SAMPPodcast;

@interface SAMPPlayPodcastEpisode : SADomainCommand

@property (nonatomic,copy) NSString * assetInfo; 
@property (nonatomic,copy) NSArray * hashedRouteUIDs; 
@property (nonatomic,retain) SAMPPodcast * podcastEpisode; 
@property (nonatomic,copy) NSString * requesterSharedUserId; 
@property (nonatomic,copy) NSString * sharedUserIdFromPlayableITunesAccount; 
@property (assign,nonatomic) BOOL startPlaying; 
+(id)playPodcastEpisode;
+(id)playPodcastEpisodeWithDictionary:(id)arg1 context:(id)arg2 ;
-(void)af_addEntriesToAnalyticsContext:(id)arg1 ;
-(id)encodedClassName;
-(NSString *)assetInfo;
-(id)groupIdentifier;
-(BOOL)startPlaying;
-(NSString *)sharedUserIdFromPlayableITunesAccount;
-(void)setSharedUserIdFromPlayableITunesAccount:(NSString *)arg1 ;
-(void)setStartPlaying:(BOOL)arg1 ;
-(BOOL)requiresResponse;
-(void)setAssetInfo:(NSString *)arg1 ;
-(NSString *)requesterSharedUserId;
-(BOOL)mutatingCommand;
-(NSArray *)hashedRouteUIDs;
-(void)setHashedRouteUIDs:(NSArray *)arg1 ;
-(void)setRequesterSharedUserId:(NSString *)arg1 ;
-(SAMPPodcast *)podcastEpisode;
-(void)setPodcastEpisode:(SAMPPodcast *)arg1 ;
@end

