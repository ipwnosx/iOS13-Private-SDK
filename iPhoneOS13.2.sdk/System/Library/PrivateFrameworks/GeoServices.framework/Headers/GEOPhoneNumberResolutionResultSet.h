//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface GEOPhoneNumberResolutionResultSet : NSObject
{
    NSMutableDictionary *_results;
}

// - (void).cxx_destruct;
- (void)enumerateResolutionsUsingBlock:(CDUnknownBlockType)arg1;
- (void)setError:(id)arg1 forPhoneNumber:(id)arg2;
- (void)setResult:(id)arg1 forPhoneNumber:(id)arg2;
- (id)xpcDictionaryRepresentation;
- (id)description;
- (id)initWithXPCDictionaryRepresentation:(id)arg1;
- (id)init;

@end

