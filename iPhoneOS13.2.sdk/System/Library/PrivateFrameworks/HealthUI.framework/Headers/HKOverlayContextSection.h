//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthUI/HKDisplayTypeContextItemSection-Protocol.h>

@class NSArray, NSString;

@interface HKOverlayContextSection : NSObject <HKDisplayTypeContextItemSection>
{
    NSString *title;
    NSArray *items;
    NSString *_localizedSectionTitle;
    NSArray *_overlayContextItems;
}

@property(readonly, nonatomic) NSArray *overlayContextItems; // @synthesize overlayContextItems=_overlayContextItems;
@property(readonly, nonatomic) NSString *localizedSectionTitle; // @synthesize localizedSectionTitle=_localizedSectionTitle;
@property(retain, nonatomic) NSArray *items; // @synthesize items;
@property(retain, nonatomic) NSString *title; // @synthesize title;
// - (void).cxx_destruct;
- (id)initWithSectionTitle:(id)arg1 overlayContextItems:(id)arg2;

@end

