//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <VideosUI/VUIDocumentUIConfigurationModal.h>

@class UIBarButtonItem, UIView;

@interface VUIDocumentUIConfigurationPopover : VUIDocumentUIConfigurationModal
{
    _Bool _presentationAdjustedToSizeClass;
    unsigned long long _popOverArrowDirection;
    UIView *_sourceView;
    UIBarButtonItem *_popOverSourceBarButtonItem;
    struct CGSize _preferredSize;
    struct CGRect _sourceRect;
}

@property(nonatomic, getter=isPresentationAdjustedToSizeClass) _Bool presentationAdjustedToSizeClass; // @synthesize presentationAdjustedToSizeClass=_presentationAdjustedToSizeClass;
@property(retain, nonatomic) UIBarButtonItem *popOverSourceBarButtonItem; // @synthesize popOverSourceBarButtonItem=_popOverSourceBarButtonItem;
@property(retain, nonatomic) UIView *sourceView; // @synthesize sourceView=_sourceView;
@property(nonatomic) unsigned long long popOverArrowDirection; // @synthesize popOverArrowDirection=_popOverArrowDirection;
@property(nonatomic) struct CGRect sourceRect; // @synthesize sourceRect=_sourceRect;
@property(nonatomic) struct CGSize preferredSize; // @synthesize preferredSize=_preferredSize;

@end
