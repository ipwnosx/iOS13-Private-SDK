//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSArray, VUIMediaLibraryManager;
@protocol VUIHomeShareMediaLibraryManagerDelegate;

@protocol VUIHomeShareMediaLibraryManager <NSObject>
@property(readonly, copy, nonatomic) NSArray *homeShareMediaLibraries;
@property(nonatomic) __weak id <VUIHomeShareMediaLibraryManagerDelegate> delegate;
- (void)endDiscoveringMediaLibraries;
- (void)beginDiscoveringMediaLibraries;
- (id)initWithManager:(VUIMediaLibraryManager *)arg1;
@end

