//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSDictionary, NSString;

@interface PPPasteboardLocationItem : NSObject
{
    NSString *_text;
    NSString *_bundleIdentifier;
    NSDate *_createdAt;
    NSDictionary *_addressComponents;
}

@property(copy, nonatomic) NSDictionary *addressComponents; // @synthesize addressComponents=_addressComponents;
@property(copy, nonatomic) NSDate *createdAt; // @synthesize createdAt=_createdAt;
@property(copy, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
// - (void).cxx_destruct;

@end

