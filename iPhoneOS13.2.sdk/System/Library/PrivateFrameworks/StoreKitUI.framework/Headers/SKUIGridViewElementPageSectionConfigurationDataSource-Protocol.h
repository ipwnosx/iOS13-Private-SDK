//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSIndexPath, SKUIGridViewElementPageSectionConfiguration, SKUIViewElement;

@protocol SKUIGridViewElementPageSectionConfigurationDataSource <NSObject>
- (SKUIViewElement *)gridViewElementPageSectionConfiguration:(SKUIGridViewElementPageSectionConfiguration *)arg1 viewElementForIndexPath:(NSIndexPath *)arg2;

@optional
- (void)gridViewElementPageSectionConfiguration:(SKUIGridViewElementPageSectionConfiguration *)arg1 configurePosition:(inout long long )arg2 forItemAtIndexPath:(NSIndexPath *)arg3;
@end

