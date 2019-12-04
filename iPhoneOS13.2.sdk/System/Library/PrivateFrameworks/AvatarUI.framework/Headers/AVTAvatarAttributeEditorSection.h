//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AvatarUI/AVTAvatarAttributeEditorSection-Protocol.h>

@class NSArray, NSString;
@protocol AVTAvatarAttributeEditorHeaderPicker;

@interface AVTAvatarAttributeEditorSection : NSObject <AVTAvatarAttributeEditorSection>
{
    NSArray *_sectionItems;
    NSString *_localizedName;
    NSString *_identifier;
    id <AVTAvatarAttributeEditorHeaderPicker> _headerAccessory;
}

@property(retain, nonatomic) id <AVTAvatarAttributeEditorHeaderPicker> headerAccessory; // @synthesize headerAccessory=_headerAccessory;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(copy, nonatomic) NSString *localizedName; // @synthesize localizedName=_localizedName;
@property(readonly, copy, nonatomic) NSArray *sectionItems; // @synthesize sectionItems=_sectionItems;
- (_Bool)shouldDisplaySeparatorBeforeSection:(id)arg1;
- (_Bool)shouldDisplayTitle;
@property(readonly, copy) NSString *description;
- (id)initWithSectionItems:(id)arg1 localizedName:(id)arg2 identifier:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end
