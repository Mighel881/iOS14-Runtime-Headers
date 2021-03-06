/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:50:48 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Photos/PHObject.h>

@class NSDate, NSString, NSManagedObjectID, NSSortDescriptor, NSArray;

@interface PHCollection : PHObject {

	BOOL _trashed;
	BOOL _customSortAscending;
	unsigned _customSortKey;
	unsigned long long _estimatedPhotosCount;
	unsigned long long _estimatedVideosCount;
	NSDate* _creationDate;
	NSString* _localizedSubtitle;

}

@property (nonatomic,readonly) NSManagedObjectID * parentFolderID; 
@property (nonatomic,copy,readonly) NSString * effectiveCustomSortKey; 
@property (nonatomic,copy,readonly) NSSortDescriptor * defaultSortDescriptor; 
@property (nonatomic,readonly) BOOL isAlbumContentSort; 
@property (nonatomic,readonly) BOOL isAlbumContentTitleSort; 
@property (nonatomic,readonly) BOOL isUserSmartAlbum; 
@property (nonatomic,readonly) unsigned long long estimatedPhotosCount;                               //@synthesize estimatedPhotosCount=_estimatedPhotosCount - In the implementation block
@property (nonatomic,readonly) unsigned long long estimatedVideosCount;                               //@synthesize estimatedVideosCount=_estimatedVideosCount - In the implementation block
@property (nonatomic,readonly) BOOL hasLocalizedTitle; 
@property (nonatomic,readonly) BOOL hasLocationInfo; 
@property (nonatomic,readonly) NSDate * creationDate;                                                 //@synthesize creationDate=_creationDate - In the implementation block
@property (nonatomic,readonly) NSString * localizedSubtitle;                                          //@synthesize localizedSubtitle=_localizedSubtitle - In the implementation block
@property (getter=isTrashed,nonatomic,readonly) BOOL trashed;                                         //@synthesize trashed=_trashed - In the implementation block
@property (nonatomic,readonly) BOOL customSortAscending;                                              //@synthesize customSortAscending=_customSortAscending - In the implementation block
@property (nonatomic,readonly) unsigned customSortKey;                                                //@synthesize customSortKey=_customSortKey - In the implementation block
@property (nonatomic,copy,readonly) NSArray * effectiveCustomSortDescriptors; 
@property (nonatomic,copy,readonly) id<PHCollectionPresentationHints> presentationHints; 
@property (nonatomic,readonly) BOOL startsAtEnd; 
@property (nonatomic,readonly) BOOL canContainAssets; 
@property (nonatomic,readonly) BOOL canContainCollections; 
@property (nonatomic,readonly) NSString * localizedTitle; 
+(id)managedEntityName;
+(id)fetchCollectionsInCollectionList:(id)arg1 options:(id)arg2 ;
+(id)fetchTopLevelUserCollectionsWithOptions:(id)arg1 ;
+(id)fetchMomentsForAssetsWithLocalIdentifiers:(id)arg1 options:(id)arg2 ;
+(id)fetchMomentsForAssetsWithOIDs:(id)arg1 options:(id)arg2 ;
+(id)fetchMomentsForFacesWithLocalIdentifiers:(id)arg1 options:(id)arg2 ;
+(id)fetchMomentsForPersonsWithLocalIdentifiers:(id)arg1 options:(id)arg2 ;
+(id)fetchFilteredAssetCollections:(id)arg1 containingAssetsMatchingPredicate:(id)arg2 ;
+(BOOL)managedObjectSupportsTrashedState;
+(id)transformValueExpression:(id)arg1 forKeyPath:(id)arg2 ;
+(id)entityKeyMap;
+(id)fetchType;
-(BOOL)collectionHasFixedOrder;
-(BOOL)hasLocalizedTitle;
-(NSString *)localizedSubtitle;
-(unsigned long long)collectionFixedOrderPriority;
-(BOOL)isUserSmartAlbum;
-(NSManagedObjectID *)parentFolderID;
-(NSString *)effectiveCustomSortKey;
-(BOOL)isAlbumContentSort;
-(BOOL)isAlbumContentTitleSort;
-(BOOL)canContainAssets;
-(unsigned long long)ancestryIndexOfCollectionList:(id)arg1 context:(id)arg2 ;
-(NSArray *)effectiveCustomSortDescriptors;
-(id)_effectiveSortDescriptorsFromCustomSortKey:(id)arg1 ;
-(BOOL)startsAtEnd;
-(NSString *)localizedTitle;
-(unsigned long long)estimatedVideosCount;
-(BOOL)canContainCollections;
-(BOOL)canPerformEditOperation:(long long)arg1 ;
-(id)initWithFetchDictionary:(id)arg1 propertyHint:(unsigned long long)arg2 photoLibrary:(id)arg3 ;
-(BOOL)isTrashed;
-(NSDate *)creationDate;
-(NSSortDescriptor *)defaultSortDescriptor;
-(id<PHCollectionPresentationHints>)presentationHints;
-(id)objectReference;
-(BOOL)isDeleted;
-(unsigned)customSortKey;
-(BOOL)customSortAscending;
-(id)description;
-(unsigned long long)estimatedPhotosCount;
-(BOOL)hasLocationInfo;
@end

