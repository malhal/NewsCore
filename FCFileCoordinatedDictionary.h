//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsCore/NSFilePresenter-Protocol.h>

@class NSOperationQueue, NSString, NSURL;

@interface FCFileCoordinatedDictionary : NSObject <NSFilePresenter>
{
    NSURL *_presentedItemURL;
    NSOperationQueue *_presentedItemOperationQueue;
    NSURL *_fileURL;
    NSOperationQueue *_accessQueue;
}

@property(retain, nonatomic) NSOperationQueue *accessQueue; // @synthesize accessQueue=_accessQueue;
@property(copy, nonatomic) NSURL *fileURL; // @synthesize fileURL=_fileURL;
@property(readonly, retain) NSOperationQueue *presentedItemOperationQueue; // @synthesize presentedItemOperationQueue=_presentedItemOperationQueue;
@property(readonly, copy) NSURL *presentedItemURL; // @synthesize presentedItemURL=_presentedItemURL;
- (void).cxx_destruct;
- (_Bool)_writeDictionary:(id)arg1 toFileURL:(id)arg2;
- (id)_readFromFileURL:(id)arg1;
- (void)writeWithAccessor:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
- (void)readWithAccessor:(CDUnknownBlockType)arg1;
@property long long maxConcurrentOperationCount;
- (id)initWithFileURL:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, copy) NSURL *primaryPresentedItemURL;
@property(readonly) Class superclass;

@end

