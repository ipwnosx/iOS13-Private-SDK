//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class MXMDisplayDescriptor, NSArray, NSObject;
@protocol MXMDisplayProbePlatformDelegate, OS_dispatch_queue;

@protocol MXMDisplayProbePlatform <NSObject>
+ (NSArray *)_allDescriptors;
@property(nonatomic) __weak id <MXMDisplayProbePlatformDelegate> delegate;
- (void)_stop;
- (void)_start;
- (id)initPrivateWithDescriptor:(MXMDisplayDescriptor *)arg1 queue:(NSObject<OS_dispatch_queue> *)arg2;
@end

