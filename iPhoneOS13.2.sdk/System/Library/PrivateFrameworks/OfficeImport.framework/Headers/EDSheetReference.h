//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <OfficeImport/EDReference.h>

__attribute__((visibility("hidden")))
@interface EDSheetReference : EDReference
{
    NSUInteger mSheetIndex;
}

+ (id)referenceWithSheetIndex:(NSUInteger)arg1 firstRow:(int)arg2 lastRow:(int)arg3 firstColumn:(int)arg4 lastColumn:(int)arg5;
- (id)description;
- (void)unionWithReference:(id)arg1;
- (BOOL)fullyAdjacentToReference:(id)arg1;
- (NSUInteger)sheetIndex;
- (BOOL)isSheedIndexValid;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToTableReference:(id)arg1;
- (id)initWithSheetIndex:(NSUInteger)arg1 firstRow:(int)arg2 lastRow:(int)arg3 firstColumn:(int)arg4 lastColumn:(int)arg5;
- (id)init;

@end

