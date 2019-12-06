//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TextInput/TIUserDictionaryEntry-Protocol.h>

@class NSNumber, NSString;

@interface TIUserDictionaryEntryValue : NSObject <NSSecureCoding, TIUserDictionaryEntry>
{
    NSString *_phrase;
    NSString *_shortcut;
    NSNumber *_timestamp;
}

+ (id)valueWithEntry:(id)arg1;
+ (BOOL)supportsSecureCoding;
@property(retain, nonatomic) NSNumber *timestamp; // @synthesize timestamp=_timestamp;
@property(copy, nonatomic) NSString *shortcut; // @synthesize shortcut=_shortcut;
@property(copy, nonatomic) NSString *phrase; // @synthesize phrase=_phrase;
// - (void).cxx_destruct;
- (id)shortcutForSorting;
- (BOOL)matchesEntry:(id)arg1;
@property(readonly, copy) NSString *description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

