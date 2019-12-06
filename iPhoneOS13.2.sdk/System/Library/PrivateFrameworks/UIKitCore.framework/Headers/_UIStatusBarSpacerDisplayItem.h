//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/_UIStatusBarDisplayItem.h>

@class NSArray, UILayoutGuide;

__attribute__((visibility("hidden")))
@interface _UIStatusBarSpacerDisplayItem : _UIStatusBarDisplayItem
{
    UILayoutGuide *_layoutGuide;
    NSArray *_constraints;
    CGSize _size;
}

@property(nonatomic) CGSize size; // @synthesize size=_size;
@property(retain, nonatomic) NSArray *constraints; // @synthesize constraints=_constraints;
@property(retain, nonatomic) UILayoutGuide *layoutGuide; // @synthesize layoutGuide=_layoutGuide;
// - (void).cxx_destruct;
- (void)_applyConstraintsIfNeeded;
- (void)setContainerView:(id)arg1;
- (void)applyUpdate:(id)arg1;
- (id)initWithIdentifier:(id)arg1 item:(id)arg2;

@end

