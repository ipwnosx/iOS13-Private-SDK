//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSURL;

__attribute__((visibility("hidden")))
@interface WDElectrocardiogramActivityItemSource : NSObject <UIActivityItemSource>
{
    NSURL *_pdfTemporaryFileURL;
}

@property(readonly, nonatomic) NSURL *pdfTemporaryFileURL; // @synthesize pdfTemporaryFileURL=_pdfTemporaryFileURL;
// - (void).cxx_destruct;
- (void)dealloc;
- (id)activityViewController:(id)arg1 itemForActivityType:(id)arg2;
- (id)activityViewControllerPlaceholderItem:(id)arg1;
- (id)initWithPDFData:(id)arg1 sampleDate:(id)arg2;

@end

