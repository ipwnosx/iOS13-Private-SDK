//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface EDPivotAreaReference : NSObject
{
    BOOL mByPosition;
    BOOL mRelative;
    BOOL mSelected;
    NSUInteger mFieldId;
    NSUInteger mCount;
}

+ (id)pivotAreaReference;
- (id)description;
- (void)setCount:(NSUInteger)arg1;
- (NSUInteger)count;
- (void)setFieldId:(NSUInteger)arg1;
- (NSUInteger)fieldId;
- (void)setSelected:(BOOL)arg1;
- (BOOL)selected;
- (void)setRelative:(BOOL)arg1;
- (BOOL)relative;
- (void)setByPosition:(BOOL)arg1;
- (BOOL)byPosition;
- (id)init;

@end

