//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class BSTransaction;

@interface _BSTransactionChildRelationship : NSObject
{
    BSTransaction *_childTransaction;
    NSUInteger _schedulingPolicy;
}

@property(readonly, nonatomic) NSUInteger schedulingPolicy; // @synthesize schedulingPolicy=_schedulingPolicy;
@property(readonly, nonatomic) BSTransaction *childTransaction; // @synthesize childTransaction=_childTransaction;
// - (void).cxx_destruct;
- (id)initWithChildTransaction:(id)arg1 schedulingPolicy:(NSUInteger)arg2;

@end

