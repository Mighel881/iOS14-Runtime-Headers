/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:50:43 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSSQLEntity, NSMutableArray, NSMutableDictionary, NSNumber, NSMutableSet;

@interface _NSSQLTableMigrationDescription : NSObject {

	NSSQLEntity* _rootEntity;
	NSSQLEntity* _sourceRootEntity;
	int _migrationType;
	NSMutableArray* _addedEntityMigrations;
	NSMutableArray* _removedEntityMigrations;
	NSMutableArray* _copiedEntityMigrations;
	NSMutableArray* _transformedEntityMigrations;
	NSMutableDictionary* _migrationByEntity;
	NSMutableArray* _addedManyToManys;
	NSMutableArray* _removedManyToManys;
	NSMutableArray* _transformedManyToManys;
	NSMutableDictionary* _tempTableNames;
	NSNumber* _hasComplexSchemaTransformations;
	NSMutableSet* _addedColumnSet;
	NSMutableSet* _renamedTableSet;
	NSMutableSet* _renamedColumnSet;
	NSMutableSet* _renamedMTMSet;
	NSMutableSet* _raisedColumnSet;
	NSMutableSet* _droppedEntitySet;
	NSMutableSet* _collapsedEntitySet;
	NSMutableSet* _columnsUpgradedToMandatory;
	NSMutableSet* _delayedDropColumnSet;

}

@property (nonatomic,readonly) NSSQLEntity * rootEntity;              //@synthesize rootEntity=_rootEntity - In the implementation block
-(void)dealloc;
-(NSSQLEntity *)rootEntity;
-(id)description;
@end
