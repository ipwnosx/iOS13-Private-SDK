//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSCH3DTexture.h>

@class TSDFill;

__attribute__((visibility("hidden")))
@interface TSCH3DTSDFillTexture : TSCH3DTexture
{
    TSDFill *mFill;
}

+ (id)textureWithTSDFill:(id)arg1;
- (id)databufferForDataCache:(id)arg1;
- (BOOL)hasCompleteData;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;
- (id)initWithTSDFill:(id)arg1;

@end

