//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class BRCPrivateClientZone, NSMutableArray;

__attribute__((visibility("hidden")))
@interface BRCPCSChainEnumerator : NSEnumerator
{
    NSUInteger _maxPathDepth;
    BRCPrivateClientZone *_clientZone;
    NSMutableArray *_stack;
    BOOL _failed;
}

// - (void).cxx_destruct;
- (BOOL)failed;
- (id)nextObject;
- (id)initWithPCSChainInfo:(id)arg1 clientZone:(id)arg2;

@end

