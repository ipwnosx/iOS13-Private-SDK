//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSMutableArray, NSString, PKAccount;
@protocol NPKAccountPassManagerDelegate, OS_dispatch_queue;

@interface NPKAccountPassManager : NSObject
{
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSObject<OS_dispatch_queue> *_delegateCallbackQueue;
    id <NPKAccountPassManagerDelegate> _delegate;
    NSString *_accountIdentifier;
    PKAccount *_account;
    NSDate *_lastAccountUpdateDate;
    NSMutableArray *_accountDetails;
}

@property(retain, nonatomic) NSMutableArray *accountDetails; // @synthesize accountDetails=_accountDetails;
@property(retain, nonatomic) NSDate *lastAccountUpdateDate; // @synthesize lastAccountUpdateDate=_lastAccountUpdateDate;
@property(retain, nonatomic) PKAccount *account; // @synthesize account=_account;
@property(readonly, nonatomic) NSString *accountIdentifier; // @synthesize accountIdentifier=_accountIdentifier;
// - (void).cxx_destruct;
- (void)_updateAccountDetailsWithAccount:(id)arg1;
- (void)_updateAccount;
- (void)handleAccountsChangedNotification:(id)arg1;
- (id)accountPassDetails;
- (void)forceAccountRefresh;
- (void)refreshAccountIfNecessary;
@property(nonatomic) __weak id <NPKAccountPassManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (id)initForAccountIdentifier:(id)arg1;

@end

