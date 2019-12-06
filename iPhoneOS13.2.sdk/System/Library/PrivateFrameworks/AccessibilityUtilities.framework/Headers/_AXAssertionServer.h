//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface _AXAssertionServer : NSObject
{
    id /* CDUnknownBlockType */ _assertionWasAcquiredHandler;
    id /* CDUnknownBlockType */ _assertionWasReleasedHandler;
    NSMutableDictionary *_heldAssertionMap;
}

@property(retain, nonatomic) NSMutableDictionary *heldAssertionMap; // @synthesize heldAssertionMap=_heldAssertionMap;
@property(copy, nonatomic) id /* CDUnknownBlockType */ assertionWasReleasedHandler; // @synthesize assertionWasReleasedHandler=_assertionWasReleasedHandler;
@property(copy, nonatomic) id /* CDUnknownBlockType */ assertionWasAcquiredHandler; // @synthesize assertionWasAcquiredHandler=_assertionWasAcquiredHandler;
// - (void).cxx_destruct;
- (id)clientsHoldingAssertionOfType:(id)arg1;
- (void)removeHeldAssertionOfType:(id)arg1 byClient:(id)arg2;
- (void)addHeldAssertionOfType:(id)arg1 byClient:(id)arg2;
- (id)description;
- (id)init;

@end

