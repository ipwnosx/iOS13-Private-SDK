//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NUPixelFormat;

@protocol NUBufferProvider <NSObject>
@property(readonly, nonatomic) NUPixelFormat *format;
// @property(readonly, nonatomic) CDStruct_912cb5d2 size;
- (void)provideBuffer:(void (^)(id <NUBuffer>))arg1;
@end

