//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSOrderedSet, NSString;

@interface MXMSampleTag : NSObject <NSSecureCoding, NSCopying>
{
    NSOrderedSet *_taxonomy;
    MXMSampleTag *_parent;
}

+ (BOOL)supportsSecureCoding;
+ (id)ancestery;
@property(readonly, copy, nonatomic) MXMSampleTag *parent; // @synthesize parent=_parent;
// - (void).cxx_destruct;
- (id)description;
- (NSUInteger)hash;
- (BOOL)isEqualToTag:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualTo:(id)arg1;
- (BOOL)containsTag:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)copy;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithTaxonomy:(id)arg1;
- (id)initWithComponents:(id)arg1;
- (id)initWithDNString:(id)arg1;
@property(readonly, copy, nonatomic) NSString *domainNameString;

@end

