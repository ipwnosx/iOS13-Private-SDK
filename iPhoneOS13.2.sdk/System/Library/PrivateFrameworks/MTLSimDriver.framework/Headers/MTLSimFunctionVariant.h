//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Metal/MTLFunctionVariant.h>

@class MTLSimFunction;

__attribute__((visibility("hidden")))
@interface MTLSimFunctionVariant : MTLFunctionVariant
{
    MTLSimFunction *_function;
}

- (void)dealloc;
- (id)initWithFunction:(id)arg1 compilerOutput:(id)arg2;
@property(readonly) MTLSimFunction *function;

@end

