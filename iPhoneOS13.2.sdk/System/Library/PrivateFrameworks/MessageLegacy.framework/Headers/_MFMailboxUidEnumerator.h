//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSMutableArray;

@interface _MFMailboxUidEnumerator : NSEnumerator
{
    NSMutableArray *_mailboxes;
    NSUInteger _index;
}

- (id)nextObject;
- (id)initWithMailbox:(id)arg1;
- (void)dealloc;

@end

