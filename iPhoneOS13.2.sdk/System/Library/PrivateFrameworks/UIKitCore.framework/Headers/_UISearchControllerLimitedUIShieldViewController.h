//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "UIViewController.h"

@class _UISearchControllerLimitedAccessView;

__attribute__((visibility("hidden")))
@interface _UISearchControllerLimitedUIShieldViewController : UIViewController
{
    id /* CDUnknownBlockType */ _dismissAction;
    _UISearchControllerLimitedAccessView *_limitedAccessView;
}

@property(retain, nonatomic) _UISearchControllerLimitedAccessView *limitedAccessView; // @synthesize limitedAccessView=_limitedAccessView;
@property(copy, nonatomic) id /* CDUnknownBlockType */ dismissAction; // @synthesize dismissAction=_dismissAction;
// - (void).cxx_destruct;
- (void)_backButtonPressed:(id)arg1;
- (void)viewDidLoad;
- (void)dealloc;

@end

