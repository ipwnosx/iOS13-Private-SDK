//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class FCThreadSafeMutableDictionary;

@interface NFLFontCache : NSObject
{
    FCThreadSafeMutableDictionary *_fontCache;
}

@property(retain, nonatomic) FCThreadSafeMutableDictionary *fontCache; // @synthesize fontCache=_fontCache;
// - (void).cxx_destruct;
- (void)clearCache;
- (id)fontWithName:(id)arg1 size:(double)arg2;
- (id)init;

@end

