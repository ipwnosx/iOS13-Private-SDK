//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSPAbstractMutableLargeArray.h>

__attribute__((visibility("hidden")))
@interface TSPMutableLargeStringArray : TSPAbstractMutableLargeArray
{
}

+ (Class)arraySegmentClass;
// - (void)loadFromMessage:(const struct LargeStringArray )arg1 unarchiver:(id)arg2;
- (void)loadFromUnarchiver:(id)arg1;
// - (void)saveToMessage:(struct LargeStringArray )arg1 archiver:(id)arg2;
- (void)saveToArchiver:(id)arg1;

@end

