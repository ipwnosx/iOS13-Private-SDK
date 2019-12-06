//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSDDrawableInfo.h>

#import <iWorkImport/TSDInfoWithPathSource-Protocol.h>
#import <iWorkImport/TSDMixing-Protocol.h>

@class TSDInfoGeometry, TSDPathSource;

__attribute__((visibility("hidden")))
@interface TSDMaskInfo : TSDDrawableInfo <TSDMixing, TSDInfoWithPathSource>
{
    TSDPathSource *mPathSource;
}

@property(copy, nonatomic) TSDPathSource *pathSource; // @synthesize pathSource=mPathSource;
- (id)objectForProperty:(int)arg1;
- (id)mixedObjectWithFraction:(double)arg1 ofObject:(id)arg2;
- (long long)mixingTypeWithObject:(id)arg1 context:(id)arg2;
@property(copy, nonatomic) TSDInfoGeometry *geometry;
- (Class)repClass;
- (Class)layoutClass;
- (BOOL)isEqualToMaskInfo:(id)arg1;
- (id)copyWithContext:(id)arg1;
- (void)dealloc;
- (id)initWithContext:(id)arg1 geometry:(id)arg2;
- (id)initWithContext:(id)arg1 geometry:(id)arg2 pathSource:(id)arg3;
//  (void)saveToArchive:(struct MaskArchive )arg1 archiver:(id)arg2;
- (void)saveToArchiver:(id)arg1;
//  (void)loadFromArchive:(const struct MaskArchive )arg1 unarchiver:(id)arg2;
- (void)loadFromUnarchiver:(id)arg1;
- (BOOL)isEquivalentForCrossDocumentPasteMasterComparison:(id)arg1;

@end

