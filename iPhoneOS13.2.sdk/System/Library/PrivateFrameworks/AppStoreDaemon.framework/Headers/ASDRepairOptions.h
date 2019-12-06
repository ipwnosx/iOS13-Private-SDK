//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSDictionary, NSNumber, NSString;

@interface ASDRepairOptions : NSObject <NSCopying, NSSecureCoding>
{
    BOOL _forceRevoke;
    BOOL _forceUpsell;
    int _fairplayStatus;
    NSString *_bundleID;
    NSString *_bundlePath;
    NSNumber *_accountDSID;
    long long _claimStyle;
    NSUInteger _exitReason;
    NSDictionary *_relaunchOptions;
}

+ (BOOL)supportsSecureCoding;
@property(nonatomic) BOOL forceUpsell; // @synthesize forceUpsell=_forceUpsell;
@property(nonatomic) BOOL forceRevoke; // @synthesize forceRevoke=_forceRevoke;
@property(copy, nonatomic) NSDictionary *relaunchOptions; // @synthesize relaunchOptions=_relaunchOptions;
@property(nonatomic) int fairplayStatus; // @synthesize fairplayStatus=_fairplayStatus;
@property(nonatomic) NSUInteger exitReason; // @synthesize exitReason=_exitReason;
@property(readonly, nonatomic) long long claimStyle; // @synthesize claimStyle=_claimStyle;
@property(readonly, nonatomic) NSNumber *accountDSID; // @synthesize accountDSID=_accountDSID;
@property(readonly, nonatomic) NSString *bundlePath; // @synthesize bundlePath=_bundlePath;
@property(readonly, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
// - (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)initWithBundleID:(id)arg1 accountIdentifier:(id)arg2 claimStyle:(long long)arg3;
- (id)initWithBundlePath:(id)arg1;
- (id)initWithBundleID:(id)arg1;

@end

