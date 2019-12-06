//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class SBIconPageIndicatorImageSetResult, _UILegibilitySettings;

@interface SBIconPageIndicatorImageSetCache : NSObject
{
    _UILegibilitySettings *_legibilitySettings;
    SBIconPageIndicatorImageSetResult *_indicatorImageSetResults;
    SBIconPageIndicatorImageSetResult *_searchImageSetResults;
    SBIconPageIndicatorImageSetResult *_cameraImageSetResults;
}

@property(retain, nonatomic) _UILegibilitySettings *legibilitySettings; // @synthesize legibilitySettings=_legibilitySettings;
// - (void).cxx_destruct;
- (id)_emptyPageIndicatorSet;
- (id)cameraIndicatorImageSetForLegibilitySettings:(id)arg1;
- (id)searchIndicatorImageSetForLegibilitySettings:(id)arg1;
- (id)pageIndicatorImageSetForLegibilitySettings:(id)arg1;

@end

