/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:38:23 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/TSUtility.framework/TSUtility
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSUtility/TSUtility-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface TSUIntegerKeyDictionary : NSObject <NSCopying, NSMutableCopying, NSSecureCoding> {

	CFDictionaryRef mDictionary;

}
+(BOOL)supportsSecureCoding;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithCapacity:(unsigned long long)arg1 ;
-(void)removeAllObjects;
-(void)dealloc;
-(void)setObject:(id)arg1 forKey:(long long)arg2 ;
-(id)allValues;
-(id)keyEnumerator;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)count;
-(void)removeObjectForKey:(long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)objectForKey:(long long)arg1 ;
-(id)description;
-(id)valueEnumerator;
-(CFDictionaryRef)p_cfDictionary;
@end

