//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface NUImageFactory : NSObject
{
}

+ (CGImageRef)newCGImageFromImageStorage:(id)arg1 colorSpace:(id)arg2;
+ (CGImageRef)newCGImageFromBufferImage:(id)arg1;
+ (id)newCIImageFromBufferImage:(id)arg1;
+ (id)_newCIImageFromImage:(id)arg1;
+ (id)bufferImageWithLayout:(id)arg1 format:(id)arg2 colorSpace:(id)arg3;
+ (id)surfaceImageWithLayout:(id)arg1 format:(id)arg2 colorSpace:(id)arg3;

@end

