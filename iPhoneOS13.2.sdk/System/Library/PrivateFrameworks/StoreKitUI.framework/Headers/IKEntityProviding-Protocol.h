//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSIndexPath;
@protocol IKEntityValueProviding;

@protocol IKEntityProviding <NSObject>
- (id <IKEntityValueProviding>)entityValueProviderAtIndexPath:(NSIndexPath *)arg1;
- (NSUInteger)numberOfEntitiesInSection:(NSUInteger)arg1;

@optional
- (NSUInteger)numberOfSections;
@end

