//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSUProgress.h>

@class TSUBasicProgressStorage;

__attribute__((visibility("hidden")))
@interface TSUBasicProgress : TSUProgress
{
    TSUBasicProgressStorage *_storage;
}

// - (void).cxx_destruct;
@property(getter=isIndeterminate) BOOL indeterminate;
- (double)maxValue;
@property double value;
- (id)initForSubclass;
- (id)initWithMaxValue:(double)arg1;

@end

