//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface SKUIMenuPageSectionContext : NSObject
{
    NSMutableDictionary *_sections;
    long long _selectedIndex;
}

@property(nonatomic) long long selectedIndex; // @synthesize selectedIndex=_selectedIndex;
// - (void).cxx_destruct;
- (void)setSections:(id)arg1 forIndex:(long long)arg2;
- (id)sectionsForIndex:(long long)arg1;

@end

