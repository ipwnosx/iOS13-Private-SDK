//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSHashTable;

@interface PKView : UIView
{
//     struct os_unfair_lock_s _observersLock;
    NSHashTable *_observers;
}

// - (void).cxx_destruct;
- (void)removeWindowObserver:(id)arg1;
- (void)addWindowObserver:(id)arg1;
- (void)didMoveToWindow;
- (id)initWithFrame:(CGRect)arg1;
- (id)init;

@end

