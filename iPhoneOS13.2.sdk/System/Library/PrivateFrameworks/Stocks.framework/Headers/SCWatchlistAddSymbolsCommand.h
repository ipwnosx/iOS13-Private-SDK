//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Stocks/SCKZoneCommand-Protocol.h>

@class NSArray;

@interface SCWatchlistAddSymbolsCommand : NSObject <SCKZoneCommand>
{
    NSArray *_symbols;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, copy, nonatomic) NSArray *symbols; // @synthesize symbols=_symbols;
// - (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)executeWithZone:(id)arg1;
- (id)initWithSymbols:(id)arg1;

@end

