//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class ACAccountStore, CNCache;

@interface CNManagedAccountsCache : NSObject
{
    CNCache *_accountsCache;
    ACAccountStore *_accountStore;
}

+ (id)sharedCache;
@property(retain, nonatomic) ACAccountStore *accountStore; // @synthesize accountStore=_accountStore;
@property(retain, nonatomic) CNCache *accountsCache; // @synthesize accountsCache=_accountsCache;
// - (void).cxx_destruct;
- (void)clearCache;
- (id)accountsForIdentifiers:(id)arg1;
- (id)accountForIdentifier:(id)arg1;
- (id)init;

@end

