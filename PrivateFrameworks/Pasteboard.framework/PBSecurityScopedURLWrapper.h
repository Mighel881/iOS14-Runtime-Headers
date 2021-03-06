/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:36:47 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/Pasteboard.framework/Pasteboard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSData, NSURL, FPItem;

@interface PBSecurityScopedURLWrapper : NSObject <NSSecureCoding> {

	NSData* _scope;
	BOOL _readonly;
	BOOL _backedByFileProvider;
	NSURL* _url;
	FPItem* _fpItem;
	NSURL* _deleteAfterUseURL;

}

@property (nonatomic,readonly) NSURL * url;                                                          //@synthesize url=_url - In the implementation block
@property (getter=isReadonly,nonatomic,readonly) BOOL readonly;                                      //@synthesize readonly=_readonly - In the implementation block
@property (getter=isBackedByFileProvider,nonatomic,readonly) BOOL backedByFileProvider;              //@synthesize backedByFileProvider=_backedByFileProvider - In the implementation block
@property (nonatomic,readonly) FPItem * fpItem;                                                      //@synthesize fpItem=_fpItem - In the implementation block
@property (nonatomic,retain) NSURL * deleteAfterUseURL;                                              //@synthesize deleteAfterUseURL=_deleteAfterUseURL - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithURL:(id)arg1 ;
-(id)initWithURL:(id)arg1 readonly:(BOOL)arg2 extensionClass:(id)arg3 ;
-(id)nsURLWrapper;
-(id)initWithFPItem:(id)arg1 ;
-(FPItem *)fpItem;
-(BOOL)isBackedByFileProvider;
-(id)initWithURL:(id)arg1 readonly:(BOOL)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSURL *)url;
-(id)description;
-(BOOL)isReadonly;
-(id)initWithNSURLWrapper:(id)arg1 ;
-(void)_deleteTemporaryFilesWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)initWithURL:(id)arg1 issueExtension:(BOOL)arg2 readonly:(BOOL)arg3 extensionClass:(id)arg4 ;
-(id)initWithURLWithoutIssuingExtension:(id)arg1 ;
-(void)deleteTemporaryFilesWithCompletionHandler:(/*^block*/id)arg1 ;
-(NSURL *)deleteAfterUseURL;
-(void)setDeleteAfterUseURL:(NSURL *)arg1 ;
@end

