//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSArray, NSString;

@interface ASDPurchaseHistoryQuery : NSObject <NSSecureCoding>
{
    long long _accountID;
    NSArray *_bundleIDs;
    long long _isFirstParty;
    long long _isHidden;
    long long _isPreorder;
    NSString *_searchTerm;
    NSArray *_sortOptions;
    NSArray *_storeIDs;
}

+ (BOOL)supportsSecureCoding;
@property(copy) NSArray *storeIDs; // @synthesize storeIDs=_storeIDs;
@property(copy) NSArray *sortOptions; // @synthesize sortOptions=_sortOptions;
@property(copy) NSString *searchTerm; // @synthesize searchTerm=_searchTerm;
@property long long isPreorder; // @synthesize isPreorder=_isPreorder;
@property long long isHidden; // @synthesize isHidden=_isHidden;
@property long long isFirstParty; // @synthesize isFirstParty=_isFirstParty;
@property(copy) NSArray *bundleIDs; // @synthesize bundleIDs=_bundleIDs;
@property long long accountID; // @synthesize accountID=_accountID;
// - (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

