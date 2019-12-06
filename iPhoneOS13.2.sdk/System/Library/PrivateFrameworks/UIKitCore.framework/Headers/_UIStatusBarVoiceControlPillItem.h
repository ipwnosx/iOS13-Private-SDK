//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/_UIStatusBarVoiceControlItem.h>

@class _UIStatusBarPillView;

__attribute__((visibility("hidden")))
@interface _UIStatusBarVoiceControlPillItem : _UIStatusBarVoiceControlItem
{
    _UIStatusBarPillView *_pillView;
    CGSize _pillSize;
}

@property(retain, nonatomic) _UIStatusBarPillView *pillView; // @synthesize pillView=_pillView;
@property(nonatomic) CGSize pillSize; // @synthesize pillSize=_pillSize;
// - (void).cxx_destruct;
- (id)viewForIdentifier:(id)arg1;
- (void)_create_pillView;
- (BOOL)_pulsingForVoiceControlType:(long long)arg1;
- (id)_backgroundColorForVoiceControlType:(long long)arg1 styleAttributes:(id)arg2;
- (double)imageOpacityForVoiceControlType:(long long)arg1;
- (id)applyUpdate:(id)arg1 toDisplayItem:(id)arg2;
- (id)createDisplayItemForIdentifier:(id)arg1;

@end

