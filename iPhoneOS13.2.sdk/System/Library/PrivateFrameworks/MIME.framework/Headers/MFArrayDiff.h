//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSIndexSet;

@interface MFArrayDiff : NSObject
{
    NSIndexSet *_commonIndexes;
    NSIndexSet *_addedIndexes;
    NSIndexSet *_removedIndexes;
}

@property(retain, nonatomic) NSIndexSet *removedIndexes; // @synthesize removedIndexes=_removedIndexes;
@property(retain, nonatomic) NSIndexSet *addedIndexes; // @synthesize addedIndexes=_addedIndexes;
@property(retain, nonatomic) NSIndexSet *commonIndexes; // @synthesize commonIndexes=_commonIndexes;
// - (void).cxx_destruct;
- (id)debugDescription;

@end

