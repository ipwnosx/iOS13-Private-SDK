//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface NNMKMailboxSelectionChanges : NSObject
{
    NSArray *_mailboxesToUpdate;
    NSArray *_mailboxesToReSync;
    NSArray *_mailboxesToDisableSync;
}

@property(retain, nonatomic) NSArray *mailboxesToDisableSync; // @synthesize mailboxesToDisableSync=_mailboxesToDisableSync;
@property(retain, nonatomic) NSArray *mailboxesToReSync; // @synthesize mailboxesToReSync=_mailboxesToReSync;
@property(retain, nonatomic) NSArray *mailboxesToUpdate; // @synthesize mailboxesToUpdate=_mailboxesToUpdate;
// - (void).cxx_destruct;

@end

