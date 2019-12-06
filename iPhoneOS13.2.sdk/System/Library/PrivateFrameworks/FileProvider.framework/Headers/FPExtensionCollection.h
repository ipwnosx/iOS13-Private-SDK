//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FileProvider/FPItemCollection.h>

@class FPExtensionEnumerationSettings, FPItemID;

@interface FPExtensionCollection : FPItemCollection
{
    FPExtensionEnumerationSettings *_settings;
    FPItemID *_alternateID;
}

+ (BOOL)_item:(id)arg1 isCollectionRootForObservedItemID:(id)arg2;
+ (BOOL)item:(id)arg1 isValidForObservedItemID:(id)arg2;
@property(copy) FPExtensionEnumerationSettings *settings; // @synthesize settings=_settings;
// - (void).cxx_destruct;
- (id)description;
@property(readonly) FPItemID *enumeratedItemID;
- (id)scopedSearchQuery;
- (id)createDataSourceWithSortDescriptors:(id)arg1;
- (BOOL)isCollectionValidForItem:(id)arg1;
- (void)updateRootItem:(id)arg1;
- (BOOL)isRootItem:(id)arg1;
- (id)initWithSettings:(id)arg1;

@end

