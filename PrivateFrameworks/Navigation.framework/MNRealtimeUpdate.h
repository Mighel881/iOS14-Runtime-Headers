/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:40:25 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSUUID, NSDate, NSError;

@interface MNRealtimeUpdate : NSObject <NSSecureCoding> {

	NSUUID* _routeID;
	NSDate* _lastUpdated;
	NSError* _error;

}

@property (nonatomic,readonly) NSUUID * routeID;                  //@synthesize routeID=_routeID - In the implementation block
@property (nonatomic,readonly) NSDate * lastUpdated;              //@synthesize lastUpdated=_lastUpdated - In the implementation block
@property (nonatomic,readonly) NSError * error;                   //@synthesize error=_error - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSUUID *)routeID;
-(NSError *)error;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSDate *)lastUpdated;
@end

