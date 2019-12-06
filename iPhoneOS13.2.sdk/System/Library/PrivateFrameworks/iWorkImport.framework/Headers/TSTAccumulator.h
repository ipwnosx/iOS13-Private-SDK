//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class TSULocale;

__attribute__((visibility("hidden")))
@interface TSTAccumulator : NSObject <NSCopying>
{
    unsigned int _boolCount;
    unsigned int _boolTrueCount;
    unsigned int _numberCount;
    unsigned int _dateCount;
    unsigned int _durationCount;
    unsigned int _stringCount;
    unsigned int _errorCount;
//    struct TSCEValue _minValue;
//    struct TSCEValue _maxValue;
//    struct TSCENumberValue _numberTotalValue;
//    struct TSCEDateValue _firstDateSeen;
    double _totalSecsSinceReferenceDate;
    double _secondsToAdd;
    TSULocale *_locale;
    BOOL _isCircularReference;
}

@property(nonatomic) BOOL isCircularReference; // @synthesize isCircularReference=_isCircularReference;
@property(retain, nonatomic) TSULocale *locale; // @synthesize locale=_locale;
@property(readonly, nonatomic) unsigned int errorCount; // @synthesize errorCount=_errorCount;
@property(readonly, nonatomic) unsigned int stringCount; // @synthesize stringCount=_stringCount;
@property(readonly, nonatomic) unsigned int durationCount; // @synthesize durationCount=_durationCount;
@property(readonly, nonatomic) unsigned int dateCount; // @synthesize dateCount=_dateCount;
@property(readonly, nonatomic) unsigned int numberCount; // @synthesize numberCount=_numberCount;
@property(readonly, nonatomic) unsigned int boolTrueCount; // @synthesize boolTrueCount=_boolTrueCount;
@property(readonly, nonatomic) unsigned int boolCount; // @synthesize boolCount=_boolCount;
- (id).cxx_construct;
// - (void).cxx_destruct;
//  (struct TSCEValue)valueForType:(unsigned char)arg1;
// property(readonly, nonatomic) struct TSCEValue maxValue;
// property(readonly, nonatomic) struct TSCEValue minValue;
// property(readonly, nonatomic) struct TSCEValue avgValue;
// property(readonly, nonatomic) struct TSCEValue countValue;
// property(readonly, nonatomic) struct TSCEValue totalValue;
- (void)accumulate:(id)arg1;
//  (void)accumulateValue:(const struct TSCEValue )arg1;
@property(readonly, nonatomic) NSUInteger count;
//  (void)saveToArchive:(struct AccumulatorArchive )arg1;
//  (id)initWithArchive:(const struct AccumulatorArchive )arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)clear;
- (id)initWithLocale:(id)arg1;

@end

