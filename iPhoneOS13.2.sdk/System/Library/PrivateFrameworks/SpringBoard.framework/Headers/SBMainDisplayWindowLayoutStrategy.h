//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoard/SBWindowLayoutStrategy-Protocol.h>

@interface SBMainDisplayWindowLayoutStrategy : NSObject <SBWindowLayoutStrategy>
{
    BOOL _clip;
}

+ (id)noClipStrategy;
+ (id)clipStrategy;
+ (id)_strategyWithClipping:(BOOL)arg1;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (BOOL)shouldClipForWindow:(id)arg1;
- (CGRect)frameWithInterfaceOrientation:(long long)arg1;
- (id)_init;

@end

