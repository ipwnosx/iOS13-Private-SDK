//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosUICore/PXGDiagnosticsProvider-Protocol.h>

@class NSString;

@interface PXGSublayoutDataStore : NSObject <PXGDiagnosticsProvider>
{
    long long _capacity;
    long long _count;
//     CDStruct_ff9a7497 _geometries;
//     CDStruct_df88f589 _infos;
    long long _version;
}

@property(readonly, nonatomic) long long version; // @synthesize version=_version;
// @property(readonly, nonatomic) CDStruct_df88f589 infos; // @synthesize infos=_infos;
// @property(readonly, nonatomic) CDStruct_ff9a7497 geometries; // @synthesize geometries=_geometries;
@property(nonatomic) long long count; // @synthesize count=_count;
@property(readonly, copy, nonatomic) NSString *diagnosticDescription;
- (void)enumerateSublayoutGeometriesInRange:(NSRange *)arg1 options:(NSUInteger)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (void)enumerateSublayoutGeometriesUsingBlock:(CDUnknownBlockType)arg1;
- (long long)indexOfSublayout:(id)arg1;
- (void)enumerateSublayoutsInRect:(CGRect)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)enumerateSublayoutsInRange:(NSRange *)arg1 options:(NSUInteger)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (void)enumerateSublayoutsUsingBlock:(CDUnknownBlockType)arg1;
// - (CDStruct_ff9a7497)geometryForSublayout:(id)arg1;
- (unsigned int)spriteIndexOriginForSublayout:(id)arg1;
- (id)sublayoutProviderAtIndex:(long long)arg1;
- (id)sublayoutAtIndex:(long long)arg1;
- (void)_insertRange:(NSRange *)arg1;
- (void)removeSublayoutsInRange:(NSRange *)arg1;
- (void)insertSublayoutProvider:(id)arg1 inRange:(NSRange *)arg2;
- (void)insertSublayout:(id)arg1 atIndex:(long long)arg2;
- (void)_invalidateVersion;
- (void)dealloc;

@end

