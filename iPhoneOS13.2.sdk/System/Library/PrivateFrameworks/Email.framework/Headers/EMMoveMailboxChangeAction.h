//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Email/EMMailboxChangeAction.h>

@class EMMailboxObjectID;

@interface EMMoveMailboxChangeAction : EMMailboxChangeAction
{
    EMMailboxObjectID *_parentMailboxID;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, copy, nonatomic) EMMailboxObjectID *parentMailboxID; // @synthesize parentMailboxID=_parentMailboxID;
// - (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithMailboxObjectID:(id)arg1 newParentMailboxID:(id)arg2;
- (id)initWithMailbox:(id)arg1 newParent:(id)arg2;

@end

