//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <EmailFoundation/EFQueueingStrategy-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _EFPriorityQueueStrategy : NSObject <EFQueueingStrategy>
{
    id /* CDUnknownBlockType */ _comparator;
}

@property(readonly, nonatomic) id /* CDUnknownBlockType */ comparator; // @synthesize comparator=_comparator;
// - (void).cxx_destruct;
- (NSUInteger)_indexForObject:(id)arg1 buffer:(id)arg2;
- (NSUInteger)_insertionIndexForObject:(id)arg1 buffer:(id)arg2;
- (void)dequeueObject:(id)arg1 buffer:(id)arg2;
- (void)enqueueObject:(id)arg1 replaceIfExists:(BOOL)arg2 buffer:(id)arg3;
@property(readonly, nonatomic) NSString *descriptionType;
- (id)initWithComparator:(CDUnknownBlockType)arg1;

@end

