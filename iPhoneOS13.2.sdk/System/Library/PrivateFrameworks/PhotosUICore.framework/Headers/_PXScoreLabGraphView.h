//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, NSObject, NSPredicate;
@protocol OS_dispatch_queue, _PXScoreLabGraphViewDelegate;

@interface _PXScoreLabGraphView : UIView
{
    double _leftMargin;
    double _rightMargin;
    double _topMargin;
    double _bottomMargin;
    double _graphWidth;
    double _graphHeight;
    double _minXValue;
    double _maxXValue;
    double _minYValue;
    double _maxYValue;
    double _baseMinXValue;
    double _baseMaxXValue;
    double _baseMinYValue;
    double _baseMaxYValue;
    double _minXValueAtBeginningOfGesture;
    double _maxXValueAtBeginningOfGesture;
    double _minYValueAtBeginningOfGesture;
    double _maxYValueAtBeginningOfGesture;
    struct CGPoint _locationAtBeginningOfGesture;
    NSArray *_allXValues;
    NSArray *_allYValues;
    double _Ex;
    double _Ex2;
    double _Ey;
    double _Ey2;
    double _Exy;
    unsigned long long _numberOfIgnoredAssets;
    NSObject<OS_dispatch_queue> *_serialQueue;
    id /* block */ _xScoreValueGetter;
    id /* block */ _yScoreValueGetter;
    unsigned long long _graphType;
    NSPredicate *_assetPredicate;
    id <_PXScoreLabGraphViewDelegate> _delegate;
}

@property __weak id <_PXScoreLabGraphViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain) NSPredicate *assetPredicate; // @synthesize assetPredicate=_assetPredicate;
@property unsigned long long graphType; // @synthesize graphType=_graphType;
@property(copy) id /* block */ yScoreValueGetter; // @synthesize yScoreValueGetter=_yScoreValueGetter;
@property(copy) id /* block */ xScoreValueGetter; // @synthesize xScoreValueGetter=_xScoreValueGetter;
- (void)drawCorrelationInContext:(struct CGContext *)arg1;
- (void)drawDistributionInContext:(struct CGContext *)arg1;
- (void)drawTextPanelWithNumberOfAssets:(long long)arg1 numberOfIgnoredAssets:(unsigned long long)arg2 rho:(double)arg3 inContext:(struct CGContext *)arg4;
- (void)drawYMean:(double)arg1 andStddev:(double)arg2 inContext:(struct CGContext *)arg3;
- (void)drawXMean:(double)arg1 andStddev:(double)arg2 inContext:(struct CGContext *)arg3;
- (void)drawAxisInContext:(struct CGContext *)arg1 minXValue:(double)arg2 maxXValue:(double)arg3 minYValue:(double)arg4 maxYValue:(double)arg5;
- (void)drawRect:(struct CGRect)arg1;
- (void)loadCorrelationData;
- (void)loadDistributionData;
- (void)reloadData;
- (void)enumerateAssetsUsingBlock:(id /* block */)arg1;
- (void)pinched:(id)arg1;
- (void)panned:(id)arg1;
- (void)updateGestureWithLocation:(struct CGPoint)arg1 scale:(double)arg2;
- (void)cancelGesture;
- (void)startGestureAtLocation:(struct CGPoint)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
