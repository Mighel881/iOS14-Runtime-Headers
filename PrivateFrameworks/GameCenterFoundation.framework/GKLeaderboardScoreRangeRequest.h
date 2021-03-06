/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:38:07 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GameCenterFoundation/GameCenterFoundation-Structs.h>
#import <GameCenterFoundation/GKLeaderboardScoreRequest.h>

@interface GKLeaderboardScoreRangeRequest : GKLeaderboardScoreRequest {

	NSRange _range;

}

@property (assign,nonatomic) NSRange range;              //@synthesize range=_range - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSRange)range;
-(BOOL)isEqual:(id)arg1 ;
-(void)setRange:(NSRange)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
@end

