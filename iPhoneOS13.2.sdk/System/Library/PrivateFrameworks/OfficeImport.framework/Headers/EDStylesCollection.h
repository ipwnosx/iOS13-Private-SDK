//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <OfficeImport/EDCollection.h>

__attribute__((visibility("hidden")))
@interface EDStylesCollection : EDCollection
{
    NSUInteger mDefaultWorkbookStyleIndex;
}

- (void)setDefaultWorkbookStyleIndex:(NSUInteger)arg1;
- (NSUInteger)defaultWorkbookStyleIndex;
- (id)defaultWorkbookStyle;
- (void)removeAllObjects;
- (void)removeObjectAtIndex:(NSUInteger)arg1;
- (void)replaceObjectAtIndex:(NSUInteger)arg1 withObject:(id)arg2;
- (NSUInteger)addObject:(id)arg1;
- (id)init;

@end

