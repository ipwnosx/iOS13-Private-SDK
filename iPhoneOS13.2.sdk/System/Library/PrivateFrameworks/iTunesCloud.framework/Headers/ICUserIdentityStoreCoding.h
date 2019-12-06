//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class ICDelegateAccountStoreOptions, ICValueHistory;
@protocol ICUserIdentityStoreBackend;

@interface ICUserIdentityStoreCoding : NSObject <NSSecureCoding>
{
//     struct os_unfair_lock_s _lock;
    long long _identityStoreStyle;
    long long _uniqueIdentifier;
    ICValueHistory *_activeAccountHistory;
    ICValueHistory *_activeLockerAccountHistory;
    id <ICUserIdentityStoreBackend> _backend;
    ICDelegateAccountStoreOptions *_delegateAccountStoreOptions;
}

+ (BOOL)supportsSecureCoding;
@property(copy, nonatomic) ICDelegateAccountStoreOptions *delegateAccountStoreOptions; // @synthesize delegateAccountStoreOptions=_delegateAccountStoreOptions;
@property(copy, nonatomic) id <ICUserIdentityStoreBackend> backend; // @synthesize backend=_backend;
@property(copy, nonatomic) ICValueHistory *activeLockerAccountHistory; // @synthesize activeLockerAccountHistory=_activeLockerAccountHistory;
@property(copy, nonatomic) ICValueHistory *activeAccountHistory; // @synthesize activeAccountHistory=_activeAccountHistory;
@property(readonly, nonatomic) long long uniqueIdentifier; // @synthesize uniqueIdentifier=_uniqueIdentifier;
@property(readonly, nonatomic) long long identityStoreStyle; // @synthesize identityStoreStyle=_identityStoreStyle;
// - (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)lock:(CDUnknownBlockType)arg1;
- (id)initWithIdentityStoreStyle:(long long)arg1;
- (id)_initCommon;

@end

