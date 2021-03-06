/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:36:30 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ComplicationDisplay.framework/ComplicationDisplay
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CLKMonochromeComplicationView <NSObject>
@property (assign,nonatomic,__weak) id<CLKMonochromeFilterProvider> filterProvider; 
@required
-(void)setFilterProvider:(id)arg1;
-(void)transitionToMonochromeWithFraction:(double)arg1;
-(void)updateMonochromeColor;
-(id<CLKMonochromeFilterProvider>)filterProvider;

@end

