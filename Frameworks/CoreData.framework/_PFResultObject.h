/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:50:41 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/CoreData-Structs.h>
#import <CoreFoundation/NSDictionary.h>

@class _PFResultArray;

@interface _PFResultObject : NSDictionary {

	_PFResultArray* _parent_buffer;
	int _cd_rc;
	unsigned _count;
	unsigned long long _sql_entity_id;
	unsigned long long _primary_key;

}
+(Class)classForKeyedUnarchiver;
-(id)initWithObjects:(const id*)arg1 forKeys:(const id*)arg2 count:(unsigned long long)arg3 ;
-(id)valueAtIndex:(unsigned long long)arg1 ;
-(Class)classForCoder;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_PF4*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(oneway void)release;
-(void)dealloc;
-(id)keyEnumerator;
-(unsigned long long)retainCount;
-(unsigned long long)count;
-(void)_setParentBuffer:(id)arg1 ;
-(id)retain;
-(id)objectForKey:(id)arg1 ;
@end

