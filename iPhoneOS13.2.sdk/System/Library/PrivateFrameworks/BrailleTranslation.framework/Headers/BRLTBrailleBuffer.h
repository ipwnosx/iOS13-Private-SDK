//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class BRLTBrailleString;

@interface BRLTBrailleBuffer : NSObject <NSCopying>
{
    BRLTBrailleString *_brailleString;
    NSUInteger _cursor;
}

@property(nonatomic) NSUInteger cursor; // @synthesize cursor=_cursor;
// - (void).cxx_destruct;
- (id)description;
@property(readonly, nonatomic) BRLTBrailleString *brailleString;
- (void)deleteBrailleChar;
- (void)insertBrailleChar:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)initWithBrailleString:(id)arg1;
- (id)init;

@end

