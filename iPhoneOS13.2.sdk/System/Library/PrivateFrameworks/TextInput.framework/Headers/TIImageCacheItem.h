//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSData;

@interface TIImageCacheItem : NSObject <NSSecureCoding>
{
    unsigned char _format;
    double _scale;
    CGColorRef _formatColor;
    NSData *_data;
    id /* CDUnknownBlockType */ _dataReleaseHandler;
    CGSize _size;
}

+ (BOOL)supportsSecureCoding;
+ (id)cacheItemWithSize:(CGSize)arg1 format:(unsigned char)arg2 formatColor:(CGColorRef)arg3 scale:(double)arg4 data:(id)arg5 dataReleaseHandler:(CDUnknownBlockType)arg6;
+ (id)cacheItemWithSize:(CGSize)arg1 format:(unsigned char)arg2 formatColor:(CGColorRef)arg3 scale:(double)arg4 data:(id)arg5;
@property(copy, nonatomic) id /* CDUnknownBlockType */ dataReleaseHandler; // @synthesize dataReleaseHandler=_dataReleaseHandler;
@property(retain, nonatomic) NSData *data; // @synthesize data=_data;
@property(nonatomic) CGColorRef formatColor; // @synthesize formatColor=_formatColor;
@property(nonatomic) unsigned char format; // @synthesize format=_format;
@property(nonatomic) double scale; // @synthesize scale=_scale;
@property(nonatomic) CGSize size; // @synthesize size=_size;
// - (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)_callDataReleaseHandler;
- (void)dealloc;

@end

