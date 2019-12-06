//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreSuggestionsUI/SGSuggestion-Protocol.h>
#import <CoreSuggestionsUI/SGSuggestionCategory-Protocol.h>
#import <CoreSuggestionsUI/SGSuggestionExtensions-Protocol.h>

@class SGRealtimeContact;
@protocol SGSuggestionDelegate;

@interface SGContactSuggestionBase : NSObject <SGSuggestion, SGSuggestionCategory, SGSuggestionExtensions>
{
    SGRealtimeContact *_realtimeContact;
    id <SGSuggestionDelegate> _suggestionDelegate;
}

+ (void)confirm:(BOOL)arg1 suggestion:(id)arg2 completion:(CDUnknownBlockType)arg3;
+ (id)contactImage;
@property(nonatomic) __weak id <SGSuggestionDelegate> suggestionDelegate; // @synthesize suggestionDelegate=_suggestionDelegate;
// - (void).cxx_destruct;
- (id)suggestionCategoryLocalizedCountOfItems:(id)arg1;
- (id)suggestionCategorySubtitleForItems:(id)arg1;
- (id)suggestionCategoryTitleForItems:(id)arg1;
- (id)suggestionCategoryTitle;
- (id)suggestionCategoryImage;
- (id)suggestionCategoryId;
- (id)suggestionPrimaryAction;
- (id)suggestionCategory;
- (id)suggestionDismissAction;
- (id)primaryActionTitle;
- (id)suggestionSubtitle;
- (id)suggestionTitle;
- (id)realtimeSuggestion;
- (id)initWithRealtimeContact:(id)arg1;

@end

