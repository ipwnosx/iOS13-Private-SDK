//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSString, TSULocale;

__attribute__((visibility("hidden")))
@interface TSUDurationFormatter : NSFormatter
{
    NSString *mFormat;
    TSULocale *mLocale;
    int mCompactStyleStartUnit;
}

@property(nonatomic) int compactStyleStartUnit; // @synthesize compactStyleStartUnit=mCompactStyleStartUnit;
@property(readonly) TSULocale *locale; // @synthesize locale=mLocale;
@property(copy, nonatomic) NSString *format; // @synthesize format=mFormat;
- (BOOL)getObjectValue:(out id )arg1 forString:(id)arg2 errorDescription:(out id )arg3;
- (id)stringForObjectValue:(id)arg1;
- (void)dealloc;
- (void)p_commonInit;
- (id)initWithCoder:(id)arg1;
- (id)init;
- (id)initWithLocale:(id)arg1;

@end

