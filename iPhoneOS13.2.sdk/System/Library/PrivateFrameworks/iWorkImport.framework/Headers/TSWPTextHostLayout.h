//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSDDrawableLayout.h>

@class TSWPShapeInfo, TSWPShapeLayout;

__attribute__((visibility("hidden")))
@interface TSWPTextHostLayout : TSDDrawableLayout
{
    TSWPShapeInfo *_editingShapeInfo;
    TSWPShapeLayout *_editingShapeLayout;
}

@property(readonly, nonatomic) TSWPShapeLayout *editingShapeLayout; // @synthesize editingShapeLayout=_editingShapeLayout;
// - (void).cxx_destruct;
- (void)updateChildrenFromInfo;
- (void)dealloc;

@end

