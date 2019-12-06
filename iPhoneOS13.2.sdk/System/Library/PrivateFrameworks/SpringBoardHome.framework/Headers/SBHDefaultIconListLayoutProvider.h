//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoardHome/BSDescriptionProviding-Protocol.h>
#import <SpringBoardHome/SBIconListLayoutProvider-Protocol.h>

@class NSMutableDictionary, NSString;

@interface SBHDefaultIconListLayoutProvider : NSObject <SBIconListLayoutProvider, BSDescriptionProviding>
{
    NSMutableDictionary *_cachedListLayouts;
    NSUInteger _screenType;
    NSUInteger _layoutOptions;
}

+ (id)frameworkFallbackInstance;
+ (NSUInteger)currentDeviceScreenType;
@property(readonly, nonatomic) NSUInteger layoutOptions; // @synthesize layoutOptions=_layoutOptions;
@property(readonly, nonatomic) NSUInteger screenType; // @synthesize screenType=_screenType;
// - (void).cxx_destruct;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
@property(readonly, copy) NSString *description;
- (id)layoutForIconLocation:(id)arg1;
- (void)configureSidebarConfiguration:(id)arg1 forScreenType:(NSUInteger)arg2;
- (void)configureClockIconConfiguration:(id)arg1 forScreenType:(NSUInteger)arg2 layoutOptions:(NSUInteger)arg3;
- (void)configureFolderIconConfiguration:(id)arg1 forScreenType:(NSUInteger)arg2 layoutOptions:(NSUInteger)arg3;
- (void)configureFloatyFolderConfiguration:(id)arg1 forScreenType:(NSUInteger)arg2 layoutOptions:(NSUInteger)arg3;
- (void)configureIconAccessoryConfiguration:(id)arg1 forScreenType:(NSUInteger)arg2 layoutOptions:(NSUInteger)arg3;
- (void)configureLabelConfigurations:(id)arg1 forScreenType:(NSUInteger)arg2;
- (id)makeLayoutForIconLocation:(id)arg1;
- (id)initWithScreenType:(NSUInteger)arg1 layoutOptions:(NSUInteger)arg2;
- (id)initWithLayoutOptions:(NSUInteger)arg1;
- (id)initWithScreenType:(NSUInteger)arg1;
- (id)init;

@end

