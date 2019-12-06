//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/_UICollectionViewDropItem-Protocol.h>

@class NSIndexPath, NSString, UIDragItem;

__attribute__((visibility("hidden")))
@interface _UICollectionViewDropItem : NSObject <_UICollectionViewDropItem>
{
    UIDragItem *_dragItem;
    NSIndexPath *_sourceIndexPath;
    CGSize _previewSize;
}

@property(retain, nonatomic) NSIndexPath *sourceIndexPath; // @synthesize sourceIndexPath=_sourceIndexPath;
@property(nonatomic) CGSize previewSize; // @synthesize previewSize=_previewSize;
@property(retain, nonatomic) UIDragItem *dragItem; // @synthesize dragItem=_dragItem;
// - (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (id)initWithDragItem:(id)arg1 previewSize:(CGSize)arg2 sourceIndexPath:(id)arg3;

@end

