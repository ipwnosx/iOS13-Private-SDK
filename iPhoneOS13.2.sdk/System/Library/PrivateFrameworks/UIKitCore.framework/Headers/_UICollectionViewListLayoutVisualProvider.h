//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSSet;

__attribute__((visibility("hidden")))
@interface _UICollectionViewListLayoutVisualProvider : NSObject
{
    long long _appearanceStyle;
}

+ (id)visualProviderForAppearanceStyle:(long long)arg1;
- (void)configureDefaultGradientMaskOnLayout:(id)arg1;
@property(readonly, nonatomic) NSSet *defaultFloatingElementKinds;
- (id)initWithAppearanceStyle:(long long)arg1;

@end

