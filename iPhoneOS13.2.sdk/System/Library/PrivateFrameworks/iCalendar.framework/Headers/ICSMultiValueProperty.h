//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iCalendar/ICSProperty.h>

@interface ICSMultiValueProperty : ICSProperty
{
}

- (void)setValues:(id)arg1 valueType:(unsigned long long)arg2;
- (id)values;
- (void)setValue:(id)arg1 type:(unsigned long long)arg2;
- (id)value;
- (_Bool)isMultiValued;
- (id)initWithValue:(id)arg1 type:(unsigned long long)arg2;
- (void)_ICSStringWithOptions:(unsigned long long)arg1 appendingToString:(id)arg2;
- (void)_setParsedValues:(id)arg1 type:(unsigned long long)arg2;

@end
