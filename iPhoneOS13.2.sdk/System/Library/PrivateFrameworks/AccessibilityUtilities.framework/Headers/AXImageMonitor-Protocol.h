//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSSet;
@protocol AXImageMonitorObserver;

@protocol AXImageMonitor <NSObject>
- (void)removeImageMonitorObserver:(id <AXImageMonitorObserver>)arg1;
- (void)addImageMonitorObserver:(id <AXImageMonitorObserver>)arg1;
- (NSSet *)loadedImagePaths;
- (void)enumerateLoadedImagePaths:(void (^)(NSString *))arg1;
@end

