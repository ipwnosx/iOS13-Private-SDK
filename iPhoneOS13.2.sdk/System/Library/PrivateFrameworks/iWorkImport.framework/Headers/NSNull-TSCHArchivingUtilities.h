//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


#import <iWorkImport/TSDMixing-Protocol.h>
#import <iWorkImport/TSDPathPainter-Protocol.h>
#import <iWorkImport/TSSPropertyValueArchiving-Protocol.h>

@interface NSNull (TSCHArchivingUtilities) <TSDPathPainter, TSDMixing, TSSPropertyValueArchiving>
//  (id)instanceWithArchive:(const struct Message )arg1 unarchiver:(id)arg2;
- (void)tsch_saveToProtobufString:(basic_string_23d93216 )arg1;
//  (void)tsch_saveToArchive:(struct ChartsNSNumberDoubleArchive )arg1 archiver:(id)arg2;
- (void)drawSwatchInRect:(CGRect)arg1 inContext:(CGContextRef )arg2;
- (void)paintPath:(CGPathRef)arg1 inContext:(CGContextRef )arg2;
- (id)mixedObjectWithFraction:(double)arg1 ofObject:(id)arg2;
- (long long)mixingTypeWithObject:(id)arg1 context:(id)arg2;
//  (void)saveToArchive:(struct Message )arg1 archiver:(id)arg2;
//  (id)initWithArchive:(const struct Message )arg1 unarchiver:(id)arg2;
@end

