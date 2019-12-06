//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MetalTools/MTLToolsTextureLayout.h>

@class MTLDebugDevice, MTLTextureDescriptor;

@interface MTLDebugTextureLayout : MTLToolsTextureLayout
{
    MTLDebugDevice *_debugDevice;
    MTLTextureDescriptor *_descriptor;
}

@property(readonly, copy, nonatomic) MTLTextureDescriptor *descriptor; // @synthesize descriptor=_descriptor;
@property(readonly, nonatomic) MTLDebugDevice *debugDevice; // @synthesize debugDevice=_debugDevice;
- (void)dealloc;
- (id)initWithBaseTextureLayout:(id)arg1 device:(id)arg2 descriptor:(id)arg3;

@end

