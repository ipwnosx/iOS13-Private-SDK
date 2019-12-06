//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSMutableDictionary, NSSet;

@interface MXMSampleFilter : NSObject <NSCopying, NSSecureCoding>
{
    NSSet *_tagFilters;
    NSMutableDictionary *_attributetFilters;
}

+ (BOOL)supportsSecureCoding;
+ (id)filterWithAttributeFilter:(id)arg1 tagFilter:(id)arg2;
+ (id)filterWithAttributeFilters:(id)arg1;
+ (id)filterWithAttributeFilter:(id)arg1;
+ (id)filterWithTagFilters:(id)arg1;
+ (id)filterWithTagFilter:(id)arg1;
@property(retain, nonatomic) NSMutableDictionary *attributetFilters; // @synthesize attributetFilters=_attributetFilters;
@property(retain, nonatomic) NSSet *tagFilters; // @synthesize tagFilters=_tagFilters;
// - (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)copy;
- (BOOL)matchesSamplesWithTag:(id)arg1;
- (BOOL)matchesSamplesWithAttributes:(id)arg1;
- (BOOL)matchesSamplesWithAttribute:(id)arg1;
- (BOOL)matchesSampleSet:(id)arg1;
- (BOOL)matchesSample:(id)arg1;
@property(readonly, nonatomic, getter=finite) BOOL isFinite;
- (id)attributeFilterWithName:(id)arg1;
- (id)initWithAttributeFilters:(id)arg1 tagFilters:(id)arg2;
- (id)initWithAttributeFilter:(id)arg1 tagFilter:(id)arg2;
- (id)initWithAttributeFilters:(id)arg1;
- (id)initWithAttributeFilter:(id)arg1;
- (id)initWithTagFilters:(id)arg1;
- (id)initWithTagFilter:(id)arg1;

@end

