//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <OfficeImport/EDCollection.h>

#import <OfficeImport/OADColorPalette-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface EDColorsCollection : EDCollection <OADColorPalette>
{
    NSUInteger mDefaultColorsCount;
}

+ (int)oadSchemeColorIdFromThemeIndex:(int)arg1;
+ (unsigned int)xlColorIndexFromTCSystemColorIDEnum:(int)arg1;
+ (int)systemColorIdFromIndex:(NSUInteger)arg1;
+ (BOOL)isSystemColorId:(NSUInteger)arg1;
@property(readonly, copy) NSString *description;
- (void)addPalette:(const unsigned int )arg1 paletteSize:(unsigned int)arg2 paletteX:(const unsigned int )arg3 paletteXSize:(unsigned int)arg4;
- (const unsigned int )defaultPalette;
- (void)addColors:(const unsigned int )arg1 count:(unsigned int)arg2 defaultColors:(const unsigned int )arg3 defaultCount:(unsigned int)arg4;
- (void)addDefaultPalette;
- (NSUInteger)addOrEquivalentColorExcludingDefaults:(id)arg1;
- (id)colorWithIndex:(NSUInteger)arg1;
- (NSUInteger)defaultColorsCount;
- (id)initWithDefaultSetup:(BOOL)arg1;
- (void)setupDefaults;

@end

