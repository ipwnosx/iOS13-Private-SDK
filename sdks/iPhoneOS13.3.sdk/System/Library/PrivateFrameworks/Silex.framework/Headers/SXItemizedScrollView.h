//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIScrollView.h>


@class NSArray, NSIndexSet, NSMutableDictionary, UIView;
@protocol SXItemizedScrollViewDataSource;

@interface SXItemizedScrollView : UIScrollView <UIScrollViewDelegate>
{
    BOOL _contentTooSmall;
    BOOL _gotActiveViewIndexChange;
    id <SXItemizedScrollViewDataSource> _dataSource;
    NSUInteger _activeViewIndex;
    NSArray *_frames;
    NSIndexSet *_visibleIndices;
    NSMutableDictionary *_visibleViewsByIndex;
    NSRange _visibleRange;
    CGSize _framesAreValidForSize;
}

@property(retain, nonatomic) NSMutableDictionary *visibleViewsByIndex; // @synthesize visibleViewsByIndex=_visibleViewsByIndex;
@property(nonatomic) BOOL gotActiveViewIndexChange; // @synthesize gotActiveViewIndexChange=_gotActiveViewIndexChange;
@property(nonatomic) BOOL contentTooSmall; // @synthesize contentTooSmall=_contentTooSmall;
@property(retain, nonatomic) NSIndexSet *visibleIndices; // @synthesize visibleIndices=_visibleIndices;
@property(retain, nonatomic) NSArray *frames; // @synthesize frames=_frames;
@property(nonatomic) CGSize framesAreValidForSize; // @synthesize framesAreValidForSize=_framesAreValidForSize;
@property(readonly, nonatomic) NSUInteger activeViewIndex; // @synthesize activeViewIndex=_activeViewIndex;
@property(readonly, nonatomic) NSRange visibleRange; // @synthesize visibleRange=_visibleRange;
@property(nonatomic) __weak id <SXItemizedScrollViewDataSource> dataSource; // @synthesize dataSource=_dataSource;
// - (void).cxx_destruct;
- (void)scrollToPrevious;
- (void)scrollToNext;
- (void)viewManagementForRange:(NSRange)arg1;
- (void)rebuildFramesArray;
- (void)determineNewVisibilityRange;
- (CGRect)frameForViewAtIndex:(NSUInteger)arg1;
@property(readonly, nonatomic) UIView *activeView;
- (void)setActiveViewIndex:(NSUInteger)arg1 animated:(BOOL)arg2;
- (void)reindexate;
- (void)forceCorrectFrames;
- (void)setFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(CGRect)arg1;
- (id)initWithCoder:(id)arg1;
- (void)commonInit;

@end

