//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSCECellValue.h>

__attribute__((visibility("hidden")))
@interface TSCENumberCellValue : TSCECellValue
{
//     struct TSCENumberValue _numberValue;
}

// - (void)encodeToArchive:(struct NumberCellValueArchive )arg1;
- (void)setPopulatedCustomFormat:(id)arg1;
// - (id)initWithArchive:(const struct NumberCellValueArchive )arg1 locale:(id)arg2;
- (long long)compareToCellValue:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (NSUInteger)hash;
- (BOOL)isEqualToCellValue:(id)arg1;
- (id)canonicalKeyString;
- (id)displayString;
- (id)format;
// - (struct TSCENumberValue )numberValue;
// - (struct TSCEValue)tsceValue;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)dealloc;
// - (id)initWithNumberValue:(struct TSCENumberValue )arg1 locale:(id)arg2;
// - (id)initWithDecimal:(const struct TSUDecimal )arg1 locale:(id)arg2;
- (id)initWithDouble:(double)arg1 locale:(id)arg2;

@end

