/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:37:27 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface _FBMapResult : NSObject {

	id _result;
	BOOL _created;
	BOOL _filtered;

}

@property (nonatomic,retain) id result;                  //@synthesize result=_result - In the implementation block
@property (assign,nonatomic) BOOL created;               //@synthesize created=_created - In the implementation block
@property (assign,nonatomic) BOOL filtered;              //@synthesize filtered=_filtered - In the implementation block
-(BOOL)filtered;
-(BOOL)created;
-(void)setFiltered:(BOOL)arg1 ;
-(id)result;
-(void)setResult:(id)arg1 ;
-(void)setCreated:(BOOL)arg1 ;
@end

