//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, TXRTextureInfo;

__attribute__((visibility("hidden")))
@interface TXRDeferredTextureInfo : NSObject
{
    TXRTextureInfo *_info;
    NSMutableArray *_mipmaps;
}

@property(readonly, nonatomic) NSMutableArray *mipmaps; // @synthesize mipmaps=_mipmaps;
@property(retain, nonatomic) TXRTextureInfo *info; // @synthesize info=_info;
// - (void).cxx_destruct;
- (id)initWithMipmapLevelCount:(NSUInteger)arg1 arrayLength:(NSUInteger)arg2 cubemap:(BOOL)arg3;

@end

