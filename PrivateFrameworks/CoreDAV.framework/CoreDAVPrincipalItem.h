/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:38:13 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreDAV/CoreDAVItem.h>

@class CoreDAVHrefItem, CoreDAVItemWithNoChildren, CoreDAVItem;

@interface CoreDAVPrincipalItem : CoreDAVItem {

	CoreDAVHrefItem* _href;
	CoreDAVItemWithNoChildren* _all;
	CoreDAVItemWithNoChildren* _authenticated;
	CoreDAVItemWithNoChildren* _unauthenticated;
	CoreDAVItem* _property;
	CoreDAVItemWithNoChildren* _selfItem;

}

@property (nonatomic,retain) CoreDAVHrefItem * href;                                   //@synthesize href=_href - In the implementation block
@property (nonatomic,retain) CoreDAVItemWithNoChildren * all;                          //@synthesize all=_all - In the implementation block
@property (nonatomic,retain) CoreDAVItemWithNoChildren * authenticated;                //@synthesize authenticated=_authenticated - In the implementation block
@property (nonatomic,retain) CoreDAVItemWithNoChildren * unauthenticated;              //@synthesize unauthenticated=_unauthenticated - In the implementation block
@property (nonatomic,retain) CoreDAVItem * property;                                   //@synthesize property=_property - In the implementation block
@property (nonatomic,retain) CoreDAVItemWithNoChildren * selfItem;                     //@synthesize selfItem=_selfItem - In the implementation block
+(id)copyParseRules;
-(CoreDAVItem *)property;
-(CoreDAVItemWithNoChildren *)all;
-(CoreDAVHrefItem *)href;
-(void)setProperty:(CoreDAVItem *)arg1 ;
-(void)setAuthenticated:(CoreDAVItemWithNoChildren *)arg1 ;
-(void)setHref:(CoreDAVHrefItem *)arg1 ;
-(CoreDAVItemWithNoChildren *)authenticated;
-(void)setAll:(CoreDAVItemWithNoChildren *)arg1 ;
-(void)write:(id)arg1 ;
-(id)hashString;
-(id)init;
-(id)description;
-(CoreDAVItemWithNoChildren *)unauthenticated;
-(void)setUnauthenticated:(CoreDAVItemWithNoChildren *)arg1 ;
-(void)setSelfItem:(CoreDAVItemWithNoChildren *)arg1 ;
-(CoreDAVItemWithNoChildren *)selfItem;
-(id)initTypeIsAll;
-(id)initTypeIsHREFWithURL:(id)arg1 ;
-(id)initTypeIsProperty:(id)arg1 ;
-(id)initTypeIsAuthenticated;
-(id)initTypeIsUnauthenticated;
-(id)initTypeIsSelf;
@end

