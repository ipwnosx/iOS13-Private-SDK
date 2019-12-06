//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AvatarUI/AVTPresetResourcesProviding-Protocol.h>

@class AVTCoreModelGroup, NSArray, NSString;

@interface AVTAvatarAttributeEditorCategory : NSObject <AVTPresetResourcesProviding>
{
    NSArray *_sections;
    NSString *_localizedName;
    AVTCoreModelGroup *_modelGroup;
}

@property(readonly, nonatomic) AVTCoreModelGroup *modelGroup; // @synthesize modelGroup=_modelGroup;
@property(readonly, copy, nonatomic) NSString *localizedName; // @synthesize localizedName=_localizedName;
@property(readonly, copy, nonatomic) NSArray *sections; // @synthesize sections=_sections;
// - (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (id)initWithSections:(id)arg1 localizedName:(id)arg2 modelGroup:(id)arg3;
- (id)representedAVTPresetResources;

@end

