//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@interface PKPassthroughView : UIView
{
    BOOL _inHitTest;
    BOOL _hitTestEnabled;
    BOOL _portalled;
    BOOL _inPortalHitTest;
    PKPassthroughView *_portal;
}

@property(nonatomic) BOOL inPortalHitTest; // @synthesize inPortalHitTest=_inPortalHitTest;
@property(nonatomic, getter=isPortalled) BOOL portalled; // @synthesize portalled=_portalled;
@property(nonatomic) __weak PKPassthroughView *portal; // @synthesize portal=_portal;
@property(nonatomic, getter=isHitTestEnabled) BOOL hitTestEnabled; // @synthesize hitTestEnabled=_hitTestEnabled;
// - (void).cxx_destruct;
- (id)hitTest:(CGPoint)arg1 withEvent:(id)arg2;
- (id)initWithFrame:(CGRect)arg1;

@end

