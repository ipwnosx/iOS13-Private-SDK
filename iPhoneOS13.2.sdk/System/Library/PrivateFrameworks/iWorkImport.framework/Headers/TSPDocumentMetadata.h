//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSPObject.h>

__attribute__((visibility("hidden")))
@interface TSPDocumentMetadata : TSPObject
{
    BOOL _isInCollaborationModeForArchiving;
}

- (void)saveToArchiver:(id)arg1;
- (void)takeSnapshotWithCollaborationMode:(BOOL)arg1;
- (id)packageLocator;
- (long long)tsp_identifier;
- (void)loadFromUnarchiver:(id)arg1;

@end

