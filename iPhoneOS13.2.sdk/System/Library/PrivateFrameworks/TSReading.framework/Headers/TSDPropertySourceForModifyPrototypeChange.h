//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TSReading/TSSPropertySource-Protocol.h>

@class TSDModifyPrototypeChange;

@interface TSDPropertySourceForModifyPrototypeChange : NSObject <TSSPropertySource>
{
    TSDModifyPrototypeChange *mChange;
    BOOL mAfterChange;
}

- (double)CGFloatValueForProperty:(int)arg1;
- (double)doubleValueForProperty:(int)arg1;
- (float)floatValueForProperty:(int)arg1;
- (int)intValueForProperty:(int)arg1;
- (id)objectForProperty:(int)arg1;
- (id)boxedObjectForProperty:(int)arg1;
- (BOOL)containsProperty:(int)arg1;
- (id)p_propertyMap;
- (id)initWithPrototypeChange:(id)arg1 afterChange:(BOOL)arg2;

@end

