//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/_UIImageContent.h>

__attribute__((visibility("hidden")))
@interface _UIImageCGSVGDocumentContent : _UIImageContent
{
    CGSVGDocument _svgDocumentRef;
}

- (void)_drawWithoutEffectInRect:(CGRect)arg1 context:(CGContextRef )arg2;
- (id)description;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
- (CGSize)sizeInPixels;
- (CGSVGDocument )CGSVGDocument;
- (BOOL)isCGSVGDocument;
- (BOOL)canProvideFullResCGImage;
- (void)dealloc;
- (id)initWithScale:(double)arg1;
- (id)initWithCGSVGDocument:(CGSVGDocument )arg1 scale:(double)arg2;

@end
