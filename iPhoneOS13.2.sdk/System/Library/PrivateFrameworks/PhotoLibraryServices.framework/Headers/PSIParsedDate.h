//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary;

@interface PSIParsedDate : NSObject
{
    NSDictionary *_attributes;
    NSRange * _range;
    NSRange * _extensionRange;
}

@property(readonly, nonatomic) NSRange * extensionRange; // @synthesize extensionRange=_extensionRange;
@property(readonly, nonatomic) NSRange * range; // @synthesize range=_range;
@property(readonly, copy, nonatomic) NSDictionary *attributes; // @synthesize attributes=_attributes;
// - (void).cxx_destruct;
- (id)initWithAttributes:(id)arg1 range:(NSRange *)arg2 extensionRange:(NSRange *)arg3;

@end

