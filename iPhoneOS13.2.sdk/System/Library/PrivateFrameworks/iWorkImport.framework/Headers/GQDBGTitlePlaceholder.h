//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/GQDBGPlaceholder.h>

#import <iWorkImport/GQDNameMappable-Protocol.h>

@class GQDWPLayoutFrame;

__attribute__((visibility("hidden")))
@interface GQDBGTitlePlaceholder : GQDBGPlaceholder <GQDNameMappable>
{
    GQDWPLayoutFrame *mFrame;
}

// + (const struct StateSpec )stateForReading;
- (BOOL)isBlank;
- (id)layoutFrame;
- (void)dealloc;

@end

