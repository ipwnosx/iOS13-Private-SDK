//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
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
- (id)initWithFirst:(id)arg1 last:(id)arg2;

@end
