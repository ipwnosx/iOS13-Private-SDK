//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSCH3DTransformGeometryRenderProcessor.h>

__attribute__((visibility("hidden")))
@interface TSCH3DGetBoundsRenderProcessor : TSCH3DTransformGeometryRenderProcessor
{
    int mMode;
//     struct ObjectBounds mBounds;
}

@property(nonatomic) int mode; // @synthesize mode=mMode;
- (id).cxx_construct;
// - (void).cxx_destruct;
- (void)submit:(id)arg1;
- (void)extend2DProjectedBounds:(const box_a3bd9649 )arg1;
- (void)resetBounds;
// @property(readonly, nonatomic) const struct ObjectBounds bounds;
- (id)init;

@end

