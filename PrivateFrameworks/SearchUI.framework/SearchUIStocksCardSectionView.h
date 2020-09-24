/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:35:49 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SearchUI/SearchUI-Structs.h>
#import <SearchUI/SearchUICardSectionView.h>
#import <libobjc.A.dylib/ChartUpdaterDelegate.h>
#import <libobjc.A.dylib/NUIContainerViewDelegate.h>

@class ChartUpdater, StockGraphView, StockChartDisplayMode, TLKLabel, SearchUIDashedLineView, StockChartData, NUIContainerStackView, NSMutableArray, UIView, NUIContainerBoxView, SearchUIStockGraphSectionRowModel, NSString;

@interface SearchUIStocksCardSectionView : SearchUICardSectionView <ChartUpdaterDelegate, NUIContainerViewDelegate> {

	int _graphColor;
	ChartUpdater* _chartUpdater;
	StockGraphView* _stockGraphView;
	StockChartDisplayMode* _displayMode;
	TLKLabel* _highLabel;
	TLKLabel* _lowLabel;
	SearchUIDashedLineView* _previousCloseLine;
	StockChartData* _chartData;
	NUIContainerStackView* _stackView;
	NSMutableArray* _axisViews;
	UIView* _xAxisKeyline;
	NSMutableArray* _xLabelViews;

}

@property (retain) ChartUpdater * chartUpdater;                               //@synthesize chartUpdater=_chartUpdater - In the implementation block
@property (retain) StockGraphView * stockGraphView;                           //@synthesize stockGraphView=_stockGraphView - In the implementation block
@property (retain) StockChartDisplayMode * displayMode;                       //@synthesize displayMode=_displayMode - In the implementation block
@property (retain) TLKLabel * highLabel;                                      //@synthesize highLabel=_highLabel - In the implementation block
@property (retain) TLKLabel * lowLabel;                                       //@synthesize lowLabel=_lowLabel - In the implementation block
@property (retain) SearchUIDashedLineView * previousCloseLine;                //@synthesize previousCloseLine=_previousCloseLine - In the implementation block
@property (retain) StockChartData * chartData;                                //@synthesize chartData=_chartData - In the implementation block
@property (retain) NUIContainerStackView * stackView;                         //@synthesize stackView=_stackView - In the implementation block
@property (retain) NUIContainerBoxView * contentView; 
@property (retain) NSMutableArray * axisViews;                                //@synthesize axisViews=_axisViews - In the implementation block
@property (retain) UIView * xAxisKeyline;                                     //@synthesize xAxisKeyline=_xAxisKeyline - In the implementation block
@property (retain) NSMutableArray * xLabelViews;                              //@synthesize xLabelViews=_xLabelViews - In the implementation block
@property (retain) SearchUIStockGraphSectionRowModel * rowModel; 
@property (assign,nonatomic) int graphColor;                                  //@synthesize graphColor=_graphColor - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NUIContainerStackView *)stackView;
-(StockChartDisplayMode *)displayMode;
-(void)tlk_updateForAppearance:(id)arg1 ;
-(CGSize)systemLayoutSizeFittingSize:(CGSize)arg1 ;
-(StockChartData *)chartData;
-(void)setChartData:(StockChartData *)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setAxisViews:(NSMutableArray *)arg1 ;
-(void)setXLabelViews:(NSMutableArray *)arg1 ;
-(void)setChartUpdater:(ChartUpdater *)arg1 ;
-(int)graphColor;
-(StockGraphView *)stockGraphView;
-(SearchUIDashedLineView *)previousCloseLine;
-(void)setXAxisKeyline:(UIView *)arg1 ;
-(void)setHighLabel:(TLKLabel *)arg1 ;
-(void)setLowLabel:(TLKLabel *)arg1 ;
-(void)setHourLabels;
-(TLKLabel *)highLabel;
-(void)setGraphColor:(int)arg1 ;
-(void)layoutPriceLabels;
-(void)layoutAxesAndXLabels;
-(UIView *)xAxisKeyline;
-(CGRect)lineGraphFrame;
-(NSMutableArray *)axisViews;
-(NSMutableArray *)xLabelViews;
-(void)chartUpdater:(id)arg1 didReceiveStockChartData:(id)arg2 ;
-(void)chartUpdater:(id)arg1 didFailWithError:(id)arg2 ;
-(ChartUpdater *)chartUpdater;
-(void)setStockGraphView:(StockGraphView *)arg1 ;
-(void)setPreviousCloseLine:(SearchUIDashedLineView *)arg1 ;
-(CGSize)containerView:(id)arg1 systemLayoutSizeFittingSize:(CGSize)arg2 forArrangedSubview:(id)arg3 ;
-(CGRect)containerView:(id)arg1 layoutFrameForArrangedSubview:(id)arg2 withProposedFrame:(CGRect)arg3 ;
-(void)containerViewDidLayoutArrangedSubviews:(id)arg1 ;
-(id)initWithRowModel:(id)arg1 feedbackDelegate:(id)arg2 ;
-(id)setupContentView;
-(void)setDisplayMode:(StockChartDisplayMode *)arg1 ;
-(TLKLabel *)lowLabel;
-(void)setStackView:(NUIContainerStackView *)arg1 ;
@end
