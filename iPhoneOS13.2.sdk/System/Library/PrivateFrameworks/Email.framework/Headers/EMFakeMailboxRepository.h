//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Email/EMMailboxRepository.h>

@class EMFakeRepositoryValidityTracker;

@interface EMFakeMailboxRepository : EMMailboxRepository
{
    EMFakeRepositoryValidityTracker *_validityTracker;
}

// - (void).cxx_destruct;
- (id)performMailboxChangeAction:(id)arg1;
- (void)performQuery:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)verifyExpectations;
- (void)expectChangeActionWithValidationBlock:(CDUnknownBlockType)arg1;
- (id)init;

@end

