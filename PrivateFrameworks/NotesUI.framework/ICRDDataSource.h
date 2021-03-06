/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:38:44 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class UICollectionView, UICollectionViewDiffableDataSource, NSArray;

@interface ICRDDataSource : NSObject {

	BOOL _isAddingOrRemovingPassword;
	UICollectionView* _collectionView;
	UICollectionViewDiffableDataSource* _collectionViewDiffableDataSource;
	NSArray* _sectionControllers;
	/*^block*/id _willExpandItemHandler;
	/*^block*/id _willCollapseItemHandler;
	id _firstRelevantItemIdentifier;

}

@property (nonatomic,retain) NSArray * sectionControllers;                                                         //@synthesize sectionControllers=_sectionControllers - In the implementation block
@property (assign,nonatomic) BOOL isAddingOrRemovingPassword;                                                      //@synthesize isAddingOrRemovingPassword=_isAddingOrRemovingPassword - In the implementation block
@property (nonatomic,readonly) UICollectionView * collectionView;                                                  //@synthesize collectionView=_collectionView - In the implementation block
@property (nonatomic,readonly) UICollectionViewDiffableDataSource * collectionViewDiffableDataSource;              //@synthesize collectionViewDiffableDataSource=_collectionViewDiffableDataSource - In the implementation block
@property (nonatomic,copy) id willExpandItemHandler;                                                               //@synthesize willExpandItemHandler=_willExpandItemHandler - In the implementation block
@property (nonatomic,copy) id willCollapseItemHandler;                                                             //@synthesize willCollapseItemHandler=_willCollapseItemHandler - In the implementation block
@property (nonatomic,readonly) id firstRelevantItemIdentifier;                                                     //@synthesize firstRelevantItemIdentifier=_firstRelevantItemIdentifier - In the implementation block
-(NSArray *)sectionControllers;
-(UICollectionView *)collectionView;
-(id)initWithCollectionView:(id)arg1 cellProvider:(/*^block*/id)arg2 ;
-(void)setSectionControllers:(NSArray *)arg1 ;
-(void)setWillCollapseItemHandler:(id)arg1 ;
-(void)dealloc;
-(void)willEnterForeground:(id)arg1 ;
-(id)willExpandItemHandler;
-(id)willCollapseItemHandler;
-(void)setWillExpandItemHandler:(id)arg1 ;
-(id)firstRelevantItemIdentifier;
-(id)nextRelevantItemIdentifierAfter:(id)arg1 ;
-(void)reindexDataAnimated:(BOOL)arg1 ;
-(UICollectionViewDiffableDataSource *)collectionViewDiffableDataSource;
-(BOOL)isAddingOrRemovingPassword;
-(void)reloadDataAnimated:(BOOL)arg1 ;
-(void)noteDidAddOrRemovePassword:(id)arg1 ;
-(void)reloadDataAnimated:(BOOL)arg1 dataIndexedBlock:(/*^block*/id)arg2 dataRenderedBlock:(/*^block*/id)arg3 ;
-(void)reindexDataAnimated:(BOOL)arg1 dataIndexedBlock:(/*^block*/id)arg2 dataRenderedBlock:(/*^block*/id)arg3 ;
-(void)noteWillAddOrRemovePassword:(id)arg1 ;
-(void)setIsAddingOrRemovingPassword:(BOOL)arg1 ;
-(id)associatedCellsForManagedObjectIDs:(id)arg1 ;
@end

