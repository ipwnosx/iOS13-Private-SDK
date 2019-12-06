//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSMutableArray, NSMutableDictionary;

@interface PLPhotoBakedThumbnails : NSObject
{
    unsigned short _format;
    int _singleThumbnailImageLength;
    NSUInteger _count;
    BOOL _dataIsMutable;
    NSData *_thumbnailData;
    NSMutableArray *_thumbnailImages;
    NSMutableDictionary *_options;
    NSData *_optionsData;
    BOOL _optionsAccessed;
    BOOL _missingHeader;
    CGSize _size;
}

+ (BOOL)_transformForImage:(CGImageRef)arg1 isCropped:(BOOL)arg2 captureOrientation:(int)arg3 sizeInOut:(CGSize )arg4 contextSizeOut:(CGSize )arg5 transformOut:(CGAffineTransform )arg6;
+ (id)thumbnailsWithContentsOfFile:(id)arg1 format:(unsigned short)arg2;
// - (void).cxx_destruct;
- (id)_thumbnailData;
// - (BOOL)writeBorderedThumbnailOfImage:(CGImageRef)arg1 toBuffer:(void )arg2 orientation:(int )arg3 format:(unsigned short)arg4 formatInfo:(const CDStruct_0d559a47 )arg5 delegate:(id)arg6;
@property(readonly, nonatomic) CGRect imageRect;
@property(readonly, nonatomic) unsigned int bitmapInfo;
@property(readonly, nonatomic) CGSize size;
@property(readonly, nonatomic) int bytesPerPixel;
@property(readonly, nonatomic) int bitsPerComponent;
@property(readonly, nonatomic) NSData *optionsData;
@property(readonly, nonatomic) NSMutableDictionary *options;
@property(readonly, nonatomic) unsigned short format;
- (CGImageRef)thumbnailImageAtIndex:(long long)arg1;
- (char )thumbnailBytesAtIndex:(long long)arg1;
- (id)thumbnailDataAtIndex:(long long)arg1;
- (NSUInteger)count;
- (BOOL)saveToFile:(id)arg1;
- (id)serializedData;
- (id)description;
- (id)initWithImages:(id)arg1 format:(unsigned short)arg2 orientation:(int )arg3 options:(id)arg4 delegate:(id)arg5;
- (id)initWithContentsOfFile:(id)arg1 format:(unsigned short)arg2;
- (id)initWithContentsOfFile:(id)arg1 format:(unsigned short)arg2 readOnly:(BOOL)arg3;
- (id)initWithData:(id)arg1 format:(unsigned short)arg2;
- (id)initWithData:(id)arg1 format:(unsigned short)arg2 readOnly:(BOOL)arg3;

@end

