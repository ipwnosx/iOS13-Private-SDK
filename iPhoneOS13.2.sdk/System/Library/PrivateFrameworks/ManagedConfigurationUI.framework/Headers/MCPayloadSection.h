//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface MCPayloadSection : NSObject
{
    NSString *_sectionTitle;
    NSString *_sectionFooter;
    NSMutableArray *_payloadInfos;
}

@property(retain, nonatomic) NSMutableArray *payloadInfos; // @synthesize payloadInfos=_payloadInfos;
@property(retain, nonatomic) NSString *sectionFooter; // @synthesize sectionFooter=_sectionFooter;
@property(retain, nonatomic) NSString *sectionTitle; // @synthesize sectionTitle=_sectionTitle;
// - (void).cxx_destruct;
- (id)initWithSectionTitle:(id)arg1 footer:(id)arg2 payloadInfos:(id)arg3;
- (id)init;

@end

