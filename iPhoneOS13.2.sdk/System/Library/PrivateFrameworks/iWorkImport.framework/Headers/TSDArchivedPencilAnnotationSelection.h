//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSPObject.h>

#import <iWorkImport/TSKArchivedSelection-Protocol.h>

@class NSString, TSDPencilAnnotationSelection, TSKSelection;

__attribute__((visibility("hidden")))
@interface TSDArchivedPencilAnnotationSelection : TSPObject <TSKArchivedSelection>
{
    TSDPencilAnnotationSelection *_pencilAnnotationSelection;
}

@property(retain, nonatomic) TSDPencilAnnotationSelection *pencilAnnotationSelection; // @synthesize pencilAnnotationSelection=_pencilAnnotationSelection;
// - (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (void)saveToArchiver:(id)arg1;
// - (void)loadFromArchive:(const struct PencilAnnotationSelectionArchive )arg1 unarchiver:(id)arg2;
- (void)loadFromUnarchiver:(id)arg1;
@property(retain, nonatomic) TSKSelection *selection;

@end

