/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:40:26 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CalendarDaemon.framework/CalendarDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@interface CADFilter : NSObject <NSSecureCoding>
+(BOOL)supportsSecureCoding;
-(BOOL)ekPredicateFilterMatches:(id)arg1 ;
-(BOOL)validate;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)applicableToEntityType:(int)arg1 ;
-(id)extendWhereClause:(id)arg1 usingOperation:(long long)arg2 withValues:(id)arg3 andTypes:(id)arg4 ;
@end
