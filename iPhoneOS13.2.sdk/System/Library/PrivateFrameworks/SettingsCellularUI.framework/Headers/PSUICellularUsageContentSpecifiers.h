//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray;

__attribute__((visibility("hidden")))
@interface PSUICellularUsageContentSpecifiers : NSObject
{
    NSArray *_leadingContentSpecifiers;
    NSMutableArray *_appSpecifiers;
    NSArray *_trailingContentSpecifiers;
}

@property(retain, nonatomic) NSArray *trailingContentSpecifiers; // @synthesize trailingContentSpecifiers=_trailingContentSpecifiers;
@property(retain, nonatomic) NSMutableArray *appSpecifiers; // @synthesize appSpecifiers=_appSpecifiers;
@property(retain, nonatomic) NSArray *leadingContentSpecifiers; // @synthesize leadingContentSpecifiers=_leadingContentSpecifiers;
// - (void).cxx_destruct;
- (id)specifiers;

@end

