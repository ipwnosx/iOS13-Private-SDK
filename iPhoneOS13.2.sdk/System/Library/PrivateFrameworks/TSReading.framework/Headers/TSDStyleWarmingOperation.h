//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class TSKAccessController, TSSStyle;

@interface TSDStyleWarmingOperation : NSOperation
{
    TSSStyle *mStyle;
    int mProperty;
    TSKAccessController *mAccessController;
}

- (void)warm;
- (void)main;
- (id)initWithStyle:(id)arg1 property:(int)arg2 accessController:(id)arg3;

@end

