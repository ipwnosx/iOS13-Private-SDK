//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSPObject.h>

#import <iWorkImport/TSKArchivedSelection-Protocol.h>

@class TPAllFootnoteSelection;

__attribute__((visibility("hidden")))
@interface TPArchivedAllFootnoteSelection : TSPObject <TSKArchivedSelection>
{
    TPAllFootnoteSelection *_selection;
}

@property(retain, nonatomic) TPAllFootnoteSelection *selection; // @synthesize selection=_selection;
// - (void).cxx_destruct;
- (void)saveToArchiver:(id)arg1;
- (void)loadFromUnarchiver:(id)arg1;
- (id)initWithContext:(id)arg1;

@end

