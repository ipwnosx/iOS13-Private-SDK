//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSArray, NSString;

@interface LKClassGroup : NSObject <NSSecureCoding>
{
    NSString *_classGroupName;
    NSArray *_classes;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, copy, nonatomic) NSArray *classes; // @synthesize classes=_classes;
@property(readonly, copy, nonatomic) NSString *classGroupName; // @synthesize classGroupName=_classGroupName;
// - (void).cxx_destruct;
- (id)initWithClassGroupDictionary:(id)arg1 classesDictionaryByClassID:(id)arg2;
- (id)initWithGroupName:(id)arg1 classes:(id)arg2;
- (BOOL)isEqualToLKClassGroup:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

