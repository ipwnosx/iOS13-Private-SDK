//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface WDCitationAuthor : NSObject
{
    NSString *mFirst;
    NSString *mLast;
}

@property(retain, nonatomic) NSString *last; // @synthesize last=mLast;
@property(retain, nonatomic) NSString *first; // @synthesize first=mFirst;
// - (void).cxx_destruct;
- (id)initWithFirst:(id)arg1 last:(id)arg2;

@end

