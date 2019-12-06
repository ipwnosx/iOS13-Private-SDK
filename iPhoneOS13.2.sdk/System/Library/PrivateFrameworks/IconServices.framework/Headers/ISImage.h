//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSUUID;

@interface ISImage : NSObject
{
    NSData *_bitmapData;
}

+ (id)allocWithZone:(_NSZone )arg1;
+ (CGColorSpaceRef)srgbColorSpace;
@property(readonly) NSData *bitmapData; // @synthesize bitmapData=_bitmapData;
// - (void).cxx_destruct;
@property(retain) NSUUID *uuid; // @dynamic uuid;
- (id)debugDescription;
- (id)description;
@property(readonly) CGImageRef CGImage; // @dynamic CGImage;
@property(readonly) CGSize pixelSize;
- (id)_init;
- (id)initWithCGImage:(CGImageRef)arg1 scale:(double)arg2 placeholder:(BOOL)arg3;
- (id)initWithCGImage:(CGImageRef)arg1 scale:(double)arg2;
- (id)initWithContentsOfURL:(id)arg1 scale:(double)arg2;
- (id)initWithData:(id)arg1 scale:(double)arg2;
- (id)initWithCGImage:(CGImageRef)arg1 scale:(double)arg2 minimumSize:(CGSize)arg3 placeholder:(BOOL)arg4;
- (id)digest;
- (BOOL)writeToURL:(id)arg1;

@end

