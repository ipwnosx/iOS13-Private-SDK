//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface TSWPStorageAnchorAttachmentMigrator : NSObject
{
    NSMutableArray *_charIndexPlacementIndexArray;
}

@property(retain, nonatomic) NSMutableArray *charIndexPlacementIndexArray; // @synthesize charIndexPlacementIndexArray=_charIndexPlacementIndexArray;
// - (void).cxx_destruct;
- (id)commandsForDidInsertIntoDestinationWPStorage:(id)arg1 insertionLocation:(NSUInteger)arg2 dolcContext:(id)arg3;
- (id)didCopyFromSourceWPStorage:(id)arg1 toTemporaryStorage:(id)arg2 copiedRange:(NSRange *)arg3;

@end

