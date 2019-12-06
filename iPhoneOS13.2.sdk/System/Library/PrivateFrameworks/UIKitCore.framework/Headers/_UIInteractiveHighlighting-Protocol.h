//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@protocol UIInteraction;

@protocol _UIInteractiveHighlighting <NSObject>
- (void)_highlightForInteraction:(id <UIInteraction>)arg1 fractionComplete:(double)arg2 ended:(BOOL)arg3;

@optional
- (BOOL)_highlightsAlongsideDefaultEffect;
- (long long)_preferredHighlightAnimationStyleForInteraction:(id <UIInteraction>)arg1;
- (void)_highlightDidEndForInteraction:(id <UIInteraction>)arg1;
- (void)_prepareHighlightForInteraction:(id <UIInteraction>)arg1;
@end

