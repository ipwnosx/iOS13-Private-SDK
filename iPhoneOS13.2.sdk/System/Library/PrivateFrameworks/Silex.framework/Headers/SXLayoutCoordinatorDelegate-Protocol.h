//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class SXLayoutBlueprint, SXLayoutOptions, SXLayoutParameters;
@protocol SXLayoutCoordinator;

@protocol SXLayoutCoordinatorDelegate <NSObject>

@optional
- (void)layoutCoordinator:(id <SXLayoutCoordinator>)arg1 didIntegrateBlueprint:(SXLayoutBlueprint *)arg2;
- (void)layoutCoordinator:(id <SXLayoutCoordinator>)arg1 willIntegrateBlueprint:(SXLayoutBlueprint *)arg2;
- (void)layoutCoordinator:(id <SXLayoutCoordinator>)arg1 cancelledLayoutWithOptions:(SXLayoutOptions *)arg2;
- (void)layoutCoordinator:(id <SXLayoutCoordinator>)arg1 willLayoutWithParameters:(SXLayoutParameters *)arg2;
@end

