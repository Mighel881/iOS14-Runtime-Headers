/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:46:09 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface EDProtection : NSObject <NSCopying> {

	BOOL mHidden;
	BOOL mLocked;

}
+(id)protectionWithHidden:(BOOL)arg1 locked:(BOOL)arg2 ;
-(BOOL)isLocked;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(BOOL)isHidden;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)initWithHidden:(BOOL)arg1 locked:(BOOL)arg2 ;
-(BOOL)isEqualToProtection:(id)arg1 ;
@end

