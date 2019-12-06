//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CLKDevice, NSArray;

@interface NTKInfinityDataSource : NSObject
{
    CLKDevice *_device;
    NSArray *_listings;
    long long _numberOfTotalActions;
    long long _numberOfTotalMagicMoments;
}

+ (id)spotlightColor;
+ (id)alienColor;
+ (id)hammColor;
+ (id)rexColor;
+ (id)supportingCastColor;
+ (id)bullseyeColor;
+ (id)hangGliderColor;
+ (id)ballColor;
+ (id)jessieColor;
+ (id)woodyColor;
+ (id)buzzColor;
@property(nonatomic) long long numberOfTotalMagicMoments; // @synthesize numberOfTotalMagicMoments=_numberOfTotalMagicMoments;
@property(nonatomic) long long numberOfTotalActions; // @synthesize numberOfTotalActions=_numberOfTotalActions;
// - (void).cxx_destruct;
- (void)_countListings;
- (void)_loadCharacters;
- (id)listingsOfTypes:(id)arg1 withAttributes:(id)arg2 recentlyUsed:(id)arg3;
- (id)listingsForCharacter:(NSUInteger)arg1 ofTypes:(id)arg2 withAttributes:(id)arg3 recentlyUsed:(id)arg4;
- (id)listingsForCharacter:(NSUInteger)arg1;
- (id)initForDevice:(id)arg1;

@end

