//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSString;

@interface IDSURI : NSObject <NSCopying, NSSecureCoding>
{
    NSString *_prefixedURI;
}

+ (BOOL)supportsSecureCoding;
+ (id)URIWithPrefixedURI:(id)arg1;
@property(retain, nonatomic) NSString *prefixedURI; // @synthesize prefixedURI=_prefixedURI;
// - (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)description;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToURI:(id)arg1;
@property(readonly, nonatomic) NSString *unprefixedURI;
- (id)initWithUnprefixedURI:(id)arg1;
- (id)initWithPrefixedURI:(id)arg1;

@end

