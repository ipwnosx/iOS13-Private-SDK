//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol PHAJobCoalescerDelegate;

@interface PHAJobCoalescer : NSObject
{
    id <PHAJobCoalescerDelegate> _delegate;
}

@property(nonatomic) __weak id <PHAJobCoalescerDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (void)addJob:(id)arg1;
- (id)init;

@end

