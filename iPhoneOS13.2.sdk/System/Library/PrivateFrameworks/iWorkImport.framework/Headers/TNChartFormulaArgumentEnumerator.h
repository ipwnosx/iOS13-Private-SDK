//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSEnumerator;

__attribute__((visibility("hidden")))
@interface TNChartFormulaArgumentEnumerator : NSObject <NSFastEnumeration>
{
    NSEnumerator *_underlyingEnumerator;
}

// - (void).cxx_destruct;
- (id)nextElement;
- (id)nextObject;
// - (NSUInteger)countByEnumeratingWithState:(CDStruct_70511ce9 )arg1 objects:(id )arg2 count:(NSUInteger)arg3;
- (id)initWithEnumerator:(id)arg1;

@end

