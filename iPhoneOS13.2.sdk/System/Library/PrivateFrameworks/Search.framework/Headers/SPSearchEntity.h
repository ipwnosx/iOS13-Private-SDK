//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSString;

@interface SPSearchEntity : NSObject <NSSecureCoding>
{
    BOOL _hasWords;
    NSString *_bundleIdentifier;
}

+ (id)allocWithZone:(_NSZone )arg1;
+ (BOOL)supportsSecureCoding;
@property BOOL hasWords; // @synthesize hasWords=_hasWords;
@property(retain) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
// - (void).cxx_destruct;
- (id)initWithContactIdentifier:(id)arg1;
- (id)initWithBundleIdentifier:(id)arg1 appName:(id)arg2;
- (id)initWithQueryString:(id)arg1 tokenText:(id)arg2;
@property(readonly) NSString *tokenText;
@property(readonly) NSString *queryString;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
@property(readonly) BOOL isScopedAppSearch;
@property(readonly) BOOL isPeopleSearch;

@end

