//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface PFTimeIntervalCoalescer : NSObject
{
    _Atomic long long _sequenceNumber;
    long long _fireSequenceNumber;
}

- (void)dispatch_after:(NSUInteger)arg1 queue:(id)arg2 block:(CDUnknownBlockType)arg3;

@end

