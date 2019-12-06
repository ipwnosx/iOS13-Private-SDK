//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SearchUI/SearchUICardSectionView.h>

#import <SearchUI/ChartUpdaterDelegate-Protocol.h>
#import <SearchUI/NUIContainerViewDelegate-Protocol.h>

@class ChartUpdater, NSMutableArray, NUIContainerStackView, SearchUIDashedLineView, StockChartData, StockChartDisplayMode, StockGraphView, TLKLabel, UIView;

@interface SearchUIStocksCardSectionView : SearchUICardSectionView <ChartUpdaterDelegate, NUIContainerViewDelegate>
{
    int _graphColor;
    ChartUpdater *_chartUpdater;
    StockGraphView *_stockGraphView;
    StockChartDisplayMode *_displayMode;
    TLKLabel *_highLabel;
    TLKLabel *_lowLabel;
    SearchUIDashedLineView *_previousCloseLine;
    StockChartData *_chartData;
    NUIContainerStackView *_stackView;
    NSMutableArray *_axisViews;
    UIView *_xAxisKeyline;
    NSMutableArray *_xLabelViews;
}

@property(nonatomic) int graphColor; // @synthesize graphColor=_graphColor;
@property(retain) NSMutableArray *xLabelViews; // @synthesize xLabelViews=_xLabelViews;
@property(retain) UIView *xAxisKeyline; // @synthesize xAxisKeyline=_xAxisKeyline;
@property(retain) NSMutableArray *axisViews; // @synthesize axisViews=_axisViews;
@property(retain) NUIContainerStackView *stackView; // @synthesize stackView=_stackView;
@property(retain) StockChartData *chartData; // @synthesize chartData=_chartData;
@property(retain) SearchUIDashedLineView *previousCloseLine; // @synthesize previousCloseLine=_previousCloseLine;
@property(retain) TLKLabel *lowLabel; // @synthesize lowLabel=_lowLabel;
@property(retain) TLKLabel *highLabel; // @synthesize highLabel=_highLabel;
@property(retain) StockChartDisplayMode *displayMode; // @synthesize displayMode=_displayMode;
@property(retain) StockGraphView *stockGraphView; // @synthesize stockGraphView=_stockGraphView;
@property(retain) ChartUpdater *chartUpdater; // @synthesize chartUpdater=_chartUpdater;
// - (void).cxx_destruct;
- (void)layoutAxesAndXLabels;
- (void)layoutPriceLabels;
- (CGRect)lineGraphFrame;
- (void)containerViewDidLayoutArrangedSubviews:(id)arg1;
- (CGRect)containerView:(id)arg1 layoutFrameForArrangedSubview:(id)arg2 withProposedFrame:(CGRect)arg3;
- (CGSize)containerView:(id)arg1 systemLayoutSizeFittingSize:(CGSize)arg2 forArrangedSubview:(id)arg3;
- (void)chartUpdater:(id)arg1 didFailWithError:(id)arg2;
- (void)setHourLabels;
- (void)chartUpdater:(id)arg1 didReceiveStockChartData:(id)arg2;
- (CGSize)systemLayoutSizeFittingSize:(CGSize)arg1;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (id)setupContentView;
- (void)tlk_updateForAppearance:(id)arg1;
- (id)initWithRowModel:(id)arg1 feedbackDelegate:(id)arg2;

@end

