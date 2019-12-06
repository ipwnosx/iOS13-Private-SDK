//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ScreenTimeUI/STGroupSpecifierProvider.h>

@class PSSpecifier, STUsageItem;

__attribute__((visibility("hidden")))
@interface STDrillInItemInfoGroupSpecifierProvider : STGroupSpecifierProvider
{
    STUsageItem *_usageItem;
    PSSpecifier *_appIconSpecifier;
    PSSpecifier *_ageRatingSpecifier;
    PSSpecifier *_developerSpecifier;
}

@property(readonly, nonatomic) PSSpecifier *developerSpecifier; // @synthesize developerSpecifier=_developerSpecifier;
@property(readonly, nonatomic) PSSpecifier *ageRatingSpecifier; // @synthesize ageRatingSpecifier=_ageRatingSpecifier;
@property(readonly, nonatomic) PSSpecifier *appIconSpecifier; // @synthesize appIconSpecifier=_appIconSpecifier;
@property(readonly, nonatomic) STUsageItem *usageItem; // @synthesize usageItem=_usageItem;
// - (void).cxx_destruct;
- (void)_didFetchAppInfo:(id)arg1;
- (id)developer:(id)arg1;
- (id)ageRating:(id)arg1;
- (id)category:(id)arg1;
- (id)usageItem:(id)arg1;
- (id)initWithUsageItem:(id)arg1;

@end

