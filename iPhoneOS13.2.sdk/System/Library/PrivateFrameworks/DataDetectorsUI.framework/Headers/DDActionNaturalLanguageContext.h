//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface DDActionNaturalLanguageContext : NSObject
{
    NSString *_leadingText;
    NSString *_trailingText;
//     struct __DDResult _result;
    NSArray *_associatedResults;
}

@property(retain) NSArray *associatedResults; // @synthesize associatedResults=_associatedResults;
@property(retain) NSString *trailingText; // @synthesize trailingText=_trailingText;
@property(retain) NSString *leadingText; // @synthesize leadingText=_leadingText;
// - (void).cxx_destruct;
- (void)dealloc;
// @property(retain) struct __DDResult result; // @synthesize result=_result;

@end

