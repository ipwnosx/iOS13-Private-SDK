//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, PXNewMagazineRectArray;

@interface PXNewMagazineLayoutCoordinator : NSObject
{
    PXNewMagazineRectArray *_fallbackLayout;
    double _currentBestScore;
    BOOL _stopIfAnyGoodLayout;
    BOOL _stop;
    NSArray *_paddingInputs;
    double _tileAspectRatio;
    NSMutableArray *_qualifiedLayouts;
    PXNewMagazineRectArray *_currentLayout;
    NSUInteger _currentIndex;
}

@property(nonatomic) BOOL stop; // @synthesize stop=_stop;
@property(nonatomic) NSUInteger currentIndex; // @synthesize currentIndex=_currentIndex;
@property(retain, nonatomic) PXNewMagazineRectArray *currentLayout; // @synthesize currentLayout=_currentLayout;
@property(retain, nonatomic) NSMutableArray *qualifiedLayouts; // @synthesize qualifiedLayouts=_qualifiedLayouts;
@property(readonly, nonatomic) BOOL stopIfAnyGoodLayout; // @synthesize stopIfAnyGoodLayout=_stopIfAnyGoodLayout;
@property(readonly, nonatomic) double tileAspectRatio; // @synthesize tileAspectRatio=_tileAspectRatio;
@property(readonly, nonatomic) NSArray *paddingInputs; // @synthesize paddingInputs=_paddingInputs;
// - (void).cxx_destruct;
@property(readonly, nonatomic) PXNewMagazineRectArray *currentBestLayout;
@property(readonly, nonatomic) NSUInteger currentLayoutsCount;
- (double)scoreOfLayout:(id)arg1;
- (void)validateCurrentLayoutAsFallback;
- (BOOL)validateCurrentLayout;
- (id)initWithPaddingInputs:(id)arg1 tileGrid:(id)arg2 tileAspectRatio:(double)arg3 stopIfAnyGoodLayout:(BOOL)arg4;

@end

