//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/_UIStatusBarDataEntry.h>

@interface _UIStatusBarDataBoolEntry : _UIStatusBarDataEntry
{
    BOOL _boolValue;
}

+ (BOOL)supportsSecureCoding;
+ (id)entryWithBoolValue:(BOOL)arg1;
@property(nonatomic) BOOL boolValue; // @synthesize boolValue=_boolValue;
- (id)_ui_descriptionBuilder;
- (BOOL)isEqual:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (NSUInteger)hash;
// - (id)initFromData:(const CDStruct_0942cde0 )arg1 type:(int)arg2 boolValue:(BOOL)arg3;

@end

