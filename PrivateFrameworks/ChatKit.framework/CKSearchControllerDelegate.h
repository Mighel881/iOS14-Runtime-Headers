/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:38:35 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CKSearchControllerDelegate <NSObject>
@optional
-(id)searchControllerChatGUIDsForDetailsSearch:(id)arg1;

@required
-(void)searchController:(id)arg1 requestsPresentationOfAlertController:(id)arg2 atRect:(CGRect)arg3;
-(double)containerWidthForController:(id)arg1;
-(void)searchController:(id)arg1 requestsPresentationOfShareController:(id)arg2 atRect:(CGRect)arg3;
-(id)searchController:(id)arg1 conversationForChatGUID:(id)arg2;
-(void)searchControllerContentsDidChange:(id)arg1;
-(void)deleteTransferGUID:(id)arg1;
-(void)searchController:(id)arg1 requestsItemDeletionAtIndexPath:(id)arg2;
-(void)deleteMessageItem:(id)arg1;
-(id)containerTraitCollectionForController:(id)arg1;
-(UIEdgeInsets*)parentMarginInsetsForSearchController:(id)arg1;

@end
