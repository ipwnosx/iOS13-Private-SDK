//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/_UITraitStorage.h>


@class _UICoreUICatalogColorWrapper;

__attribute__((visibility("hidden")))
@interface _UIColorAttributeTraitStorage : _UITraitStorage <NSCoding>
{
    _UICoreUICatalogColorWrapper *_namedColor;
}

// - (void).cxx_destruct;
- (id)_propertyDescriptionString;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)applyRecordsMatchingTraitCollection:(id)arg1;
- (id)initWithObject:(id)arg1 keyPath:(id)arg2 color:(id)arg3;

@end

