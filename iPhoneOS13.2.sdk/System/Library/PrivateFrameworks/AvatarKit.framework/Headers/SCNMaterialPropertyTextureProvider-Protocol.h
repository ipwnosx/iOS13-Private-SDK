//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@protocol MTLDevice, MTLTexture, SCNMaterialPropertyTextureProviderHelper;

@protocol SCNMaterialPropertyTextureProvider <NSObject>
- (void)renderToTexture:(id <MTLTexture>)arg1 computeCommandHandler:(void (^)(void (^)(id <MTLComputeCommandEncoder>)))arg2 blitCommandHandler:(void (^)(void (^)(id <MTLBlitCommandEncoder>)))arg3 helper:(id <SCNMaterialPropertyTextureProviderHelper>)arg4;
- (id <MTLTexture>)newTextureForDevice:(id <MTLDevice>)arg1;
@end

