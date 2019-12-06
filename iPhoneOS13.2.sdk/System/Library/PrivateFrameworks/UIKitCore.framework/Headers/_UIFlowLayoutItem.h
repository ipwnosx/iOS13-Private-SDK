//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class _UIFlowLayoutRow, _UIFlowLayoutSection;

__attribute__((visibility("hidden")))
@interface _UIFlowLayoutItem : NSObject
{
    struct {
        unsigned int sizeEstimated:1;
        unsigned int positionEstimated:1;
        unsigned int sizeHasBeenSet:1;
    } _itemFlags;
    _UIFlowLayoutSection *_section;
    _UIFlowLayoutRow *_rowObject;
    CGRect _itemFrame;
}

@property(nonatomic) CGRect itemFrame; // @synthesize itemFrame=_itemFrame;
@property(nonatomic) __weak _UIFlowLayoutRow *rowObject; // @synthesize rowObject=_rowObject;
@property(nonatomic) __weak _UIFlowLayoutSection *section; // @synthesize section=_section;
// - (void).cxx_destruct;
@property(nonatomic) BOOL sizeHasBeenSet;
@property(nonatomic, getter=isPositionEstimated) BOOL positionEstimated;
@property(nonatomic, getter=isSizeEstimated) BOOL sizeEstimated;
- (id)copy;

@end
