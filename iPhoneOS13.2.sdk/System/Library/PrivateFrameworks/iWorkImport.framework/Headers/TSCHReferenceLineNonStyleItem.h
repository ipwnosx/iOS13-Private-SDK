//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSUUID, TSCHReferenceLineNonStyle;

__attribute__((visibility("hidden")))
@interface TSCHReferenceLineNonStyleItem : NSObject
{
    TSCHReferenceLineNonStyle *mNonStyle;
    NSUUID *mUUID;
}

@property(retain, nonatomic) TSCHReferenceLineNonStyle *nonStyle; // @synthesize nonStyle=mNonStyle;
@property(readonly, nonatomic) NSUUID *uuid; // @synthesize uuid=mUUID;
// - (void).cxx_destruct;
// - (void)saveToArchiver:(id)arg1 message:(struct ChartReferenceLineNonStyleItem )arg2;
// - (id)initFromUnarchiver:(id)arg1 message:(const struct ChartReferenceLineNonStyleItem )arg2;
- (BOOL)isEqual:(id)arg1;
- (NSUInteger)hash;
- (id)description;
- (id)initWithNonStyle:(id)arg1 uuid:(id)arg2;

@end

