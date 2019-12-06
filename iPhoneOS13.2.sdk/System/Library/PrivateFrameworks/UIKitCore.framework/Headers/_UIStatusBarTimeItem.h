//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/_UIStatusBarItem.h>

@class _UIStatusBarStringView;

__attribute__((visibility("hidden")))
@interface _UIStatusBarTimeItem : _UIStatusBarItem
{
    _UIStatusBarStringView *_timeView;
    _UIStatusBarStringView *_shortTimeView;
    _UIStatusBarStringView *_pillTimeView;
    _UIStatusBarStringView *_dateView;
}

+ (id)dateDisplayIdentifier;
+ (id)pillTimeDisplayIdentifier;
+ (id)shortTimeDisplayIdentifier;
+ (id)timeDisplayIdentifier;
@property(retain, nonatomic) _UIStatusBarStringView *dateView; // @synthesize dateView=_dateView;
@property(retain, nonatomic) _UIStatusBarStringView *pillTimeView; // @synthesize pillTimeView=_pillTimeView;
@property(retain, nonatomic) _UIStatusBarStringView *shortTimeView; // @synthesize shortTimeView=_shortTimeView;
@property(retain, nonatomic) _UIStatusBarStringView *timeView; // @synthesize timeView=_timeView;
// - (void).cxx_destruct;
- (id)viewForIdentifier:(id)arg1;
- (void)_create_dateView;
- (void)_create_pillTimeView;
- (void)_create_shortTimeView;
- (void)_create_timeView;
- (id)applyUpdate:(id)arg1 toDisplayItem:(id)arg2;
- (id)dependentEntryKeys;

@end

