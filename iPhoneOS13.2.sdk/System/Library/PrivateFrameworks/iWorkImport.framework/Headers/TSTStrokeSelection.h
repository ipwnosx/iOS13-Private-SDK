//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSKSelection.h>

__attribute__((visibility("hidden")))
@interface TSTStrokeSelection : TSKSelection
{
    unsigned int _mask;
}

+ (Class)archivedSelectionClass;
+ (id)strokeSelectionWithMask:(unsigned int)arg1;
@property(readonly, nonatomic) unsigned int mask; // @synthesize mask=_mask;
// - (id)copyWithZone:(_NSZone )arg1;
// - (void)saveToArchive:(struct StrokeSelectionArchive )arg1 archiver:(id)arg2;
// - (id)initWithArchive:(const struct StrokeSelectionArchive )arg1 unarchiver:(id)arg2;
- (id)initWithStrokeVisibilityMask:(unsigned int)arg1;

@end

