//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreData/NSManagedObject.h>

@interface TDCatalogGlobals : NSManagedObject
{
    NSUInteger _defaultBlendMode;
    BOOL _allowsVibrancy;
    BOOL _supportsWhitePointAdjustments;
    BOOL _supportsBrightnessAdjustments;
    BOOL _allowsSystemTintColors;
    BOOL _allowsCustomTintColors;
    BOOL _supportsMultipleAppearancesForEffects;
}

- (id)dictionaryForArchiving;
@property(nonatomic) BOOL supportsMultipleAppearancesForEffects;
@property(nonatomic) BOOL allowsCustomTintColors;
@property(nonatomic) BOOL allowsSystemTintColors;
@property(nonatomic) BOOL supportsBrightnessAdjustments;
@property(nonatomic) BOOL supportsWhitePointAdjustments;
@property(nonatomic) BOOL allowsVibrancy;
@property(nonatomic) NSUInteger defaultBlendMode;

@end

