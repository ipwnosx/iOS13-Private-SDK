//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class UIViewController;
@protocol AAUIServerHook;

@protocol AAUIServerHookDelegate <NSObject>
- (void)dismissObjectModelsAnimated:(BOOL)arg1 completion:(void (^)(void))arg2;
- (UIViewController *)presentationContextForHook:(id <AAUIServerHook>)arg1;
@end

