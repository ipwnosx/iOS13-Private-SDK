//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface _UIDocumentPickerContainerItemThumbnailKey : NSObject
{
    NSObject *_primaryKey;
    double _scale;
    CGSize _size;
}

@property(readonly, nonatomic) double scale; // @synthesize scale=_scale;
@property(readonly, nonatomic) CGSize size; // @synthesize size=_size;
@property(readonly, nonatomic) NSObject *primaryKey; // @synthesize primaryKey=_primaryKey;
// - (void).cxx_destruct;
- (BOOL)isEqual:(id)arg1;
- (NSUInteger)hash;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)initWithPrimaryKey:(id)arg1 size:(CGSize)arg2 scale:(double)arg3;

@end

