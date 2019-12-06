//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSNumber, NSString;

@interface WLKAppProxy : NSObject <NSSecureCoding>
{
    BOOL _isEntitled;
    BOOL _isBetaApp;
    BOOL _isSystemApp;
    BOOL _supportsTVApp;
    NSString *_bundleIdentifier;
    NSString *_version;
    NSString *_subscriptionInfo;
    NSNumber *_itemID;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, copy, nonatomic) NSNumber *itemID; // @synthesize itemID=_itemID;
@property(readonly, copy, nonatomic) NSString *subscriptionInfo; // @synthesize subscriptionInfo=_subscriptionInfo;
@property(readonly, nonatomic) BOOL supportsTVApp; // @synthesize supportsTVApp=_supportsTVApp;
@property(readonly, nonatomic) BOOL isSystemApp; // @synthesize isSystemApp=_isSystemApp;
@property(readonly, nonatomic) BOOL isBetaApp; // @synthesize isBetaApp=_isBetaApp;
@property(readonly, nonatomic) BOOL isEntitled; // @synthesize isEntitled=_isEntitled;
@property(readonly, copy, nonatomic) NSString *version; // @synthesize version=_version;
@property(readonly, copy, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
// - (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;
@property(readonly, nonatomic) BOOL isTVApp;
- (id)dictionaryRepresentation;
- (id)initWithDictionary:(id)arg1;

@end

