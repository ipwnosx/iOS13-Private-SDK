//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class TSDStroke;

__attribute__((visibility("hidden")))
@interface TSTTableStrokePresetData : NSObject
{
    TSDStroke *mHorizontalStroke;
    TSDStroke *mVerticalStroke;
    TSDStroke *mExteriorStroke;
    unsigned int mVisibleMask;
}

@property(nonatomic) unsigned int mask; // @synthesize mask=mVisibleMask;
@property(retain, nonatomic) TSDStroke *exteriorStroke; // @synthesize exteriorStroke=mExteriorStroke;
@property(retain, nonatomic) TSDStroke *verticalStroke; // @synthesize verticalStroke=mVerticalStroke;
@property(retain, nonatomic) TSDStroke *horizontalStroke; // @synthesize horizontalStroke=mHorizontalStroke;
- (BOOL)isEqual:(id)arg1;
// - (void)saveToArchive:(struct StrokePresetDataArchive )arg1 archiver:(id)arg2;
// - (id)initWithDeprecatedArchive:(const struct Deprecated_StrokePresetDataArchive )arg1 unarchiver:(id)arg2;
// - (id)initWithArchive:(const struct StrokePresetDataArchive )arg1 unarchiver:(id)arg2;
- (id)initWithMask:(unsigned int)arg1 horizontalStroke:(id)arg2 verticalStroke:(id)arg3 exteriorStroke:(id)arg4;
- (void)dealloc;
- (id)init;

@end

