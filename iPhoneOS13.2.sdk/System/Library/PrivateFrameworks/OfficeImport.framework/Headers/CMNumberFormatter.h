//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface CMNumberFormatter : NSObject
{
    int _format;
    int _language;
    void _numberFormatter;
}

+ (id)formatterForNumberFormat:(int)arg1 language:(int)arg2;
- (id)stringForNumber:(NSUInteger)arg1;
- (void)dealloc;
- (id)initWithNumberFormat:(int)arg1 language:(int)arg2;

@end

