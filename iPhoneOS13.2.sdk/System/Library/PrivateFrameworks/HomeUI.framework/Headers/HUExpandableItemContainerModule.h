//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Home/HFItemModule.h>

@class NSArray;

@interface HUExpandableItemContainerModule : HFItemModule
{
}

- (id)expandableModuleForItem:(id)arg1;
- (void)setModuleExpanded:(_Bool)arg1 forItem:(id)arg2;
- (_Bool)shouldExpandModuleForShowOptionsItem:(id)arg1;
- (_Bool)isOptionItem:(id)arg1;
- (_Bool)isShowOptionsItem:(id)arg1;
@property(readonly, nonatomic) NSArray *expandableModules;

@end
