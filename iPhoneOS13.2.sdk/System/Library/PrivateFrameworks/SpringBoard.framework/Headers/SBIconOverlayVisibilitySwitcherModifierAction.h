//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoard/SBSwitcherModifierAction.h>

@class SBAppLayout;

@interface SBIconOverlayVisibilitySwitcherModifierAction : SBSwitcherModifierAction
{
    BOOL _visible;
    SBAppLayout *_appLayout;
}

@property(readonly, nonatomic, getter=isVisible) BOOL visible; // @synthesize visible=_visible;
@property(readonly, nonatomic) SBAppLayout *appLayout; // @synthesize appLayout=_appLayout;
// - (void).cxx_destruct;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)initWithAppLayout:(id)arg1 visible:(BOOL)arg2;
- (long long)type;

@end

