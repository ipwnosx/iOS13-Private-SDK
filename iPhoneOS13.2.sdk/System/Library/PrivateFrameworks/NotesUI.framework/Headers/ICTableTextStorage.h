//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NotesUI/TTTextStorage.h>


@interface ICTableTextStorage : TTTextStorage <NSTextStorageDelegate>
{
}

- (void)textStorage:(id)arg1 didProcessEditing:(NSUInteger)arg2 range:(NSRange *)arg3 changeInLength:(long long)arg4;
- (void)replaceCharactersInRange:(NSRange *)arg1 withAttributedString:(id)arg2;
- (id)initWithDocument:(id)arg1;

@end

