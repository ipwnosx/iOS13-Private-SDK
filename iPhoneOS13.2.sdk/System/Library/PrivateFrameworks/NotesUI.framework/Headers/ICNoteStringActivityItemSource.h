//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NotesUI/ICNoteBaseActivityItemSource.h>

#import <NotesUI/UIActivityItemSource-Protocol.h>

@class NSAttributedString, NSString;

@interface ICNoteStringActivityItemSource : ICNoteBaseActivityItemSource <UIActivityItemSource>
{
    id /* block */ _attributedStringCreator;
    NSAttributedString *_attributedString;
}

@property(copy, nonatomic) NSAttributedString *attributedString; // @synthesize attributedString=_attributedString;
@property(copy, nonatomic) id /* block */ attributedStringCreator; // @synthesize attributedStringCreator=_attributedStringCreator;
- (id)activityViewController:(id)arg1 itemForActivityType:(id)arg2;
- (_Bool)allowsAttributedStringForActivityType:(id)arg1;
- (id)activityViewControllerPlaceholderItem:(id)arg1;
- (id)initWithTitle:(id)arg1 attributedStringCreator:(id /* block */)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end
