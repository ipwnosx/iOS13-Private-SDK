//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MTLSimDriver/MTLComputeCommandEncoder-Protocol.h>

@class NSData;
@protocol MTLBuffer;

@protocol MTLComputeCommandEncoderSPI <MTLComputeCommandEncoder>
- (NSData *)newKernelDebugInfo;

@optional
- (void)dispatchThreadsWithIndirectBuffer:(id <MTLBuffer>)arg1 indirectBufferOffset:(NSUInteger)arg2;
@end

