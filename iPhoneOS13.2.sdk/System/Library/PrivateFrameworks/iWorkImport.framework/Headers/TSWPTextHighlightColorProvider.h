//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <iWorkImport/TSKCGColorProvider-Protocol.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface TSWPTextHighlightColorProvider : NSObject <TSKCGColorProvider>
{
    NSArray *_highlights;
}

@property(retain, nonatomic) NSArray *highlights; // @synthesize highlights=_highlights;
// - (void).cxx_destruct;
- (CGColorRef)cgColor;
- (id)initWithHighlights:(id)arg1;

@end

