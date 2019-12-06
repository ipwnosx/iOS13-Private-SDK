//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class ICNote, UIWindow;

@interface ICPasswordAddOrRemovePasswordActivity : UIActivity
{
    id /* CDUnknownBlockType */ _completionHandler;
    id /* CDUnknownBlockType */ _willPerformActivityBlock;
    ICNote *_note;
    UIWindow *_displayWindow;
}

+ (long long)activityCategory;
@property(nonatomic) __weak UIWindow *displayWindow; // @synthesize displayWindow=_displayWindow;
@property(retain, nonatomic) ICNote *note; // @synthesize note=_note;
@property(copy, nonatomic) id /* CDUnknownBlockType */ willPerformActivityBlock; // @synthesize willPerformActivityBlock=_willPerformActivityBlock;
@property(copy, nonatomic) id /* CDUnknownBlockType */ completionHandler; // @synthesize completionHandler=_completionHandler;
// - (void).cxx_destruct;
- (void)accessibilityAnnounceAddOrRemovePasswordWithIntent:(NSUInteger)arg1 withNote:(id)arg2;
- (BOOL)canPerformWithActivityItems:(id)arg1;
- (id)_systemImageName;
- (id)activityTitle;
- (id)activityType;
- (void)performActivity;
- (id)initWithNote:(id)arg1 displayWindow:(id)arg2 willPerformActivityBlock:(CDUnknownBlockType)arg3 completionHandler:(CDUnknownBlockType)arg4;

@end

