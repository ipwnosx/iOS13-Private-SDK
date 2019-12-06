//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class EDMailboxPersistence, EDMessagePersistence;
@protocol EDAccountsProvider, EMVIPManager;

@interface EDMessageQueryTransformer : NSObject
{
    id <EDAccountsProvider> _accountsProvider;
    EDMailboxPersistence *_mailboxPersistence;
    EDMessagePersistence *_messagePersistence;
    id <EMVIPManager> _vipManager;
}

@property(readonly, nonatomic) id <EMVIPManager> vipManager; // @synthesize vipManager=_vipManager;
@property(readonly, nonatomic) EDMessagePersistence *messagePersistence; // @synthesize messagePersistence=_messagePersistence;
@property(readonly, nonatomic) EDMailboxPersistence *mailboxPersistence; // @synthesize mailboxPersistence=_mailboxPersistence;
@property(readonly, nonatomic) id <EDAccountsProvider> accountsProvider; // @synthesize accountsProvider=_accountsProvider;
// - (void).cxx_destruct;
- (id)simplifySingleSubpredicate:(id)arg1;
- (id)simplifyNotPredicate:(id)arg1;
- (id)simplifyOrPredicate:(id)arg1;
- (id)simplifyAndPredicate:(id)arg1;
- (id)simplifyCompoundPredicate:(id)arg1;
- (id)transformComparisonPredicate:(id)arg1;
- (id)transformSubpredicates:(id)arg1;
- (id)transformCompoundPredicate:(id)arg1;
- (id)transformPredicate:(id)arg1;
- (id)initWithAccountsProvider:(id)arg1 mailboxPersistence:(id)arg2 messagePersistence:(id)arg3 vipManager:(id)arg4;

@end

