/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:41:58 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class HFCharacteristicValueDisplayMetadata, HFCharacteristicBatchReadResponse, NSDictionary;

@interface HFServiceLikeItemUpdateResponse : NSObject {

	HFCharacteristicValueDisplayMetadata* _displayMetadata;
	HFCharacteristicBatchReadResponse* _readResponse;
	NSDictionary* _standardResults;

}

@property (nonatomic,readonly) HFCharacteristicValueDisplayMetadata * displayMetadata;              //@synthesize displayMetadata=_displayMetadata - In the implementation block
@property (nonatomic,readonly) HFCharacteristicBatchReadResponse * readResponse;                    //@synthesize readResponse=_readResponse - In the implementation block
@property (nonatomic,readonly) NSDictionary * standardResults;                                      //@synthesize standardResults=_standardResults - In the implementation block
-(id)initWithDisplayMetadata:(id)arg1 readResponse:(id)arg2 standardResults:(id)arg3 ;
-(HFCharacteristicBatchReadResponse *)readResponse;
-(NSDictionary *)standardResults;
-(HFCharacteristicValueDisplayMetadata *)displayMetadata;
@end

