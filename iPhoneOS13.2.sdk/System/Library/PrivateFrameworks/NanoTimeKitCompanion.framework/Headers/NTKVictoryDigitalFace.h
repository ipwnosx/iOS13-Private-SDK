//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKFace.h>

@interface NTKVictoryDigitalFace : NTKFace
{
}

+ (id)_localizedNameOverrideForCustomEditMode:(long long)arg1 forDevice:(id)arg2;
+ (id)_initialDefaultComplicationForSlot:(id)arg1 forDevice:(id)arg2;
+ (id)_orderedComplicationSlots;
+ (id)_complicationSlotDescriptors;
- (Class)_optionClassForCustomEditMode:(long long)arg1;
- (id)_optionAtIndex:(NSUInteger)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3;
- (NSUInteger)_numberOfOptionsForCustomEditMode:(long long)arg1 slot:(id)arg2;
- (NSUInteger)_indexOfOption:(id)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3;
- (long long)_customEditModeForUniqueConfiguration;
- (id)_defaultOptionForCustomEditMode:(long long)arg1 slot:(id)arg2;
- (id)_customEditModes;
- (id)_localizedNameForComplicationSlot:(id)arg1;
- (long long)_editModeForOldEncodingIndex:(long long)arg1;

@end

