/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:37:17 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SilexWeb.framework/SilexWeb
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SWDatastoreFactory.h>

@protocol SWDatastoreFactory <NSObject>
@required
-(id)createDatastoreFromMessage:(id)arg1;

@end


@protocol SWLogger;
@class NSString;

@interface SWDatastoreFactory : NSObject <SWDatastoreFactory> {

	id<SWLogger> _logger;

}

@property (nonatomic,readonly) id<SWLogger> logger;                 //@synthesize logger=_logger - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<SWLogger>)logger;
-(id)initWithLogger:(id)arg1 ;
-(id)createDatastoreFromMessage:(id)arg1 ;
@end

