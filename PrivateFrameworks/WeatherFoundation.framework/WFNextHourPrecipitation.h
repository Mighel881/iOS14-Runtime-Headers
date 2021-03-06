/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:37:48 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/WeatherFoundation.framework/WeatherFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WeatherFoundation/WeatherFoundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDate, NSArray, WFNextHourPrecipitationDescription;

@interface WFNextHourPrecipitation : NSObject <NSCopying> {

	NSDate* _readDate;
	NSDate* _startDate;
	NSDate* _expirationDate;
	NSArray* _minutes;
	NSArray* _precipitationDescriptions;
	NSArray* _conditions;

}

@property (nonatomic,copy,readonly) NSDate * readDate;                                               //@synthesize readDate=_readDate - In the implementation block
@property (nonatomic,copy,readonly) NSDate * startDate;                                              //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,copy,readonly) NSDate * expirationDate;                                         //@synthesize expirationDate=_expirationDate - In the implementation block
@property (nonatomic,copy,readonly) NSArray * minutes;                                               //@synthesize minutes=_minutes - In the implementation block
@property (nonatomic,copy,readonly) NSArray * precipitationDescriptions;                             //@synthesize precipitationDescriptions=_precipitationDescriptions - In the implementation block
@property (nonatomic,copy,readonly) NSArray * conditions;                                            //@synthesize conditions=_conditions - In the implementation block
@property (nonatomic,readonly) BOOL isRelevant; 
@property (nonatomic,readonly) WFNextHourPrecipitationDescription * currentDescription; 
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(NSArray *)minutes;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSArray *)conditions;
-(NSDate *)readDate;
-(NSDate *)expirationDate;
-(BOOL)isEqual:(id)arg1 ;
-(NSDate *)startDate;
-(unsigned long long)hash;
-(id)initWithReadDate:(id)arg1 startDate:(id)arg2 expirationDate:(id)arg3 minutes:(id)arg4 conditions:(id)arg5 descriptions:(id)arg6 ;
-(BOOL)isRelevant;
-(WFNextHourPrecipitationDescription *)currentDescription;
-(NSArray *)precipitationDescriptions;
-(id)description;
@end

