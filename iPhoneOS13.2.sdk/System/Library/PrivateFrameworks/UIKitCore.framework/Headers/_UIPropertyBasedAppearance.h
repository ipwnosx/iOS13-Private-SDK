//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/_UIAppearance.h>

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface _UIPropertyBasedAppearance : _UIAppearance
{
    NSDictionary *_propertiesToMatch;
}

+ (id)_appearanceMatchingProperties:(id)arg1 forClass:(Class)arg2 withContainerList:(id)arg3;
+ (id)_appearanceObjectKeyForProperties:(id)arg1;
@property(retain, nonatomic, setter=_setPropertiesToMatch:) NSDictionary *_propertiesToMatch; // @synthesize _propertiesToMatch;
- (BOOL)_isRecordingInvocations;
- (BOOL)_isValidAppearanceForCustomizableObject:(id)arg1;
- (void)dealloc;

@end

