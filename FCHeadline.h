//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsCore/FCFeedInboxElement-Protocol.h>
#import <NewsCore/FCHeadlineProviding-Protocol.h>

@class FCHeadlineTemplate, FCHeadlineThumbnail, FCTopStoriesStyleConfiguration, NSArray, NSDate, NSString, NSURL;
@protocol FCChannelProviding;

@interface FCHeadline : NSObject <FCHeadlineProviding, FCFeedInboxElement>
{
    _Bool _hasThumbnail;
    _Bool _featureCandidate;
    _Bool _sponsored;
    _Bool _deleted;
    _Bool _isDraft;
    _Bool _featured;
    _Bool _usesImageOnTopLayout;
    _Bool _topStory;
    _Bool _firstTopStoryInCluster;
    _Bool _lastTopStoryInCluster;
    _Bool _needsRapidUpdates;
    _Bool _wasFeatured;
    FCHeadlineThumbnail *_thumbnailLQ;
    FCHeadlineThumbnail *_thumbnail;
    FCHeadlineThumbnail *_thumbnailMedium;
    FCHeadlineThumbnail *_thumbnailHQ;
    FCHeadlineThumbnail *_thumbnailUltraHQ;
    NSString *_title;
    NSString *_subtitle;
    NSString *_articleID;
    NSString *_referencedArticleID;
    NSString *_primaryAudience;
    NSString *_shortExcerpt;
    NSArray *_topicIDs;
    NSArray *_endOfArticleTopicIDs;
    NSDate *_publishDate;
    unsigned long long _publisherArticleVersion;
    unsigned long long _backendArticleVersion;
    NSObject<FCChannelProviding> *_sourceChannel;
    NSString *_sourceName;
    NSURL *_contentURL;
    NSDate *_topStoriesClusterDate;
    NSDate *_lastModifiedDate;
    NSDate *_lastFetchedDate;
    unsigned long long _contentType;
    NSURL *_videoURL;
    double _videoDuration;
    FCHeadlineTemplate *_headlineTemplate;
    NSString *_displayTopicID;
    NSArray *_iAdCategories;
    NSArray *_iAdKeywords;
    NSArray *_iAdSectionIDs;
    NSArray *_blockedStorefrontIDs;
    NSArray *_allowedStorefrontIDs;
    NSString *_surfacedBySectionID;
    NSString *_surfacedByChannelID;
    NSString *_surfacedByTopicID;
    NSString *_surfacedByBinID;
    NSString *_accessoryText;
    NSString *_localDraftPath;
    double _personalizedScore;
    NSArray *_relatedArticleIDs;
    NSArray *_moreFromPublisherArticleIDs;
    unsigned long long _storyType;
    FCTopStoriesStyleConfiguration *_storyStyle;
    NSString *_minimumNewsVersion;
    NSString *_identifier;
    NSURL *_headlineURL;
    NSString *_excerpt;
    struct CGSize _largestThumbnailSize;
    struct CGRect _thumbnailFocalFrame;
}

@property(nonatomic) _Bool wasFeatured; // @synthesize wasFeatured=_wasFeatured;
@property(copy, nonatomic) NSString *excerpt; // @synthesize excerpt=_excerpt;
@property(nonatomic) struct CGRect thumbnailFocalFrame; // @synthesize thumbnailFocalFrame=_thumbnailFocalFrame;
@property(copy, nonatomic) NSURL *headlineURL; // @synthesize headlineURL=_headlineURL;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, copy, nonatomic) NSString *minimumNewsVersion; // @synthesize minimumNewsVersion=_minimumNewsVersion;
@property(readonly, nonatomic) _Bool needsRapidUpdates; // @synthesize needsRapidUpdates=_needsRapidUpdates;
@property(readonly, nonatomic) FCTopStoriesStyleConfiguration *storyStyle; // @synthesize storyStyle=_storyStyle;
@property(readonly, nonatomic) unsigned long long storyType; // @synthesize storyType=_storyType;
@property(readonly, copy, nonatomic) NSArray *moreFromPublisherArticleIDs; // @synthesize moreFromPublisherArticleIDs=_moreFromPublisherArticleIDs;
@property(readonly, copy, nonatomic) NSArray *relatedArticleIDs; // @synthesize relatedArticleIDs=_relatedArticleIDs;
@property(nonatomic, getter=isLastTopStoryInCluster) _Bool lastTopStoryInCluster; // @synthesize lastTopStoryInCluster=_lastTopStoryInCluster;
@property(nonatomic, getter=isFirstTopStoryInCluster) _Bool firstTopStoryInCluster; // @synthesize firstTopStoryInCluster=_firstTopStoryInCluster;
@property(nonatomic, getter=isTopStory) _Bool topStory; // @synthesize topStory=_topStory;
@property(nonatomic) _Bool usesImageOnTopLayout; // @synthesize usesImageOnTopLayout=_usesImageOnTopLayout;
@property(nonatomic) double tileProminenceScore; // @synthesize tileProminenceScore=_personalizedScore;
@property(readonly, copy, nonatomic) NSString *localDraftPath; // @synthesize localDraftPath=_localDraftPath;
@property(readonly, copy, nonatomic) NSString *accessoryText; // @synthesize accessoryText=_accessoryText;
@property(nonatomic, getter=isFeatured) _Bool featured; // @synthesize featured=_featured;
@property(copy, nonatomic) NSString *surfacedByBinID; // @synthesize surfacedByBinID=_surfacedByBinID;
@property(copy, nonatomic) NSString *surfacedByTopicID; // @synthesize surfacedByTopicID=_surfacedByTopicID;
@property(copy, nonatomic) NSString *surfacedByChannelID; // @synthesize surfacedByChannelID=_surfacedByChannelID;
@property(copy, nonatomic) NSString *surfacedBySectionID; // @synthesize surfacedBySectionID=_surfacedBySectionID;
@property(readonly, nonatomic) _Bool isDraft; // @synthesize isDraft=_isDraft;
@property(nonatomic, getter=isDeleted) _Bool deleted; // @synthesize deleted=_deleted;
@property(readonly, copy, nonatomic) NSArray *allowedStorefrontIDs; // @synthesize allowedStorefrontIDs=_allowedStorefrontIDs;
@property(readonly, copy, nonatomic) NSArray *blockedStorefrontIDs; // @synthesize blockedStorefrontIDs=_blockedStorefrontIDs;
@property(readonly, copy, nonatomic) NSArray *iAdSectionIDs; // @synthesize iAdSectionIDs=_iAdSectionIDs;
@property(readonly, copy, nonatomic) NSArray *iAdKeywords; // @synthesize iAdKeywords=_iAdKeywords;
@property(readonly, copy, nonatomic) NSArray *iAdCategories; // @synthesize iAdCategories=_iAdCategories;
@property(readonly, copy, nonatomic) NSString *displayTopicID; // @synthesize displayTopicID=_displayTopicID;
@property(readonly, nonatomic, getter=isSponsored) _Bool sponsored; // @synthesize sponsored=_sponsored;
@property(readonly, nonatomic, getter=isFeatureCandidate) _Bool featureCandidate; // @synthesize featureCandidate=_featureCandidate;
@property(readonly, copy, nonatomic) FCHeadlineTemplate *headlineTemplate; // @synthesize headlineTemplate=_headlineTemplate;
@property(readonly, nonatomic) double videoDuration; // @synthesize videoDuration=_videoDuration;
@property(readonly, nonatomic) NSURL *videoURL; // @synthesize videoURL=_videoURL;
@property(readonly, nonatomic) unsigned long long contentType; // @synthesize contentType=_contentType;
@property(readonly, copy, nonatomic) NSDate *lastFetchedDate; // @synthesize lastFetchedDate=_lastFetchedDate;
@property(readonly, copy, nonatomic) NSDate *lastModifiedDate; // @synthesize lastModifiedDate=_lastModifiedDate;
@property(copy, nonatomic) NSDate *topStoriesClusterDate; // @synthesize topStoriesClusterDate=_topStoriesClusterDate;
@property(readonly, copy, nonatomic) NSURL *contentURL; // @synthesize contentURL=_contentURL;
@property(copy, nonatomic) NSString *sourceName; // @synthesize sourceName=_sourceName;
@property(copy, nonatomic) NSObject<FCChannelProviding> *sourceChannel; // @synthesize sourceChannel=_sourceChannel;
@property(readonly, nonatomic) unsigned long long backendArticleVersion; // @synthesize backendArticleVersion=_backendArticleVersion;
@property(readonly, nonatomic) unsigned long long publisherArticleVersion; // @synthesize publisherArticleVersion=_publisherArticleVersion;
@property(copy, nonatomic) NSDate *publishDate; // @synthesize publishDate=_publishDate;
@property(readonly, copy, nonatomic) NSArray *endOfArticleTopicIDs; // @synthesize endOfArticleTopicIDs=_endOfArticleTopicIDs;
@property(copy, nonatomic) NSArray *topicIDs; // @synthesize topicIDs=_topicIDs;
@property(copy, nonatomic) NSString *shortExcerpt; // @synthesize shortExcerpt=_shortExcerpt;
@property(readonly, copy, nonatomic) NSString *primaryAudience; // @synthesize primaryAudience=_primaryAudience;
@property(readonly, copy, nonatomic) NSString *referencedArticleID; // @synthesize referencedArticleID=_referencedArticleID;
@property(copy, nonatomic) NSString *articleID; // @synthesize articleID=_articleID;
@property(readonly, copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, nonatomic) FCHeadlineThumbnail *thumbnailUltraHQ; // @synthesize thumbnailUltraHQ=_thumbnailUltraHQ;
@property(readonly, nonatomic) FCHeadlineThumbnail *thumbnailHQ; // @synthesize thumbnailHQ=_thumbnailHQ;
@property(readonly, nonatomic) FCHeadlineThumbnail *thumbnailMedium; // @synthesize thumbnailMedium=_thumbnailMedium;
@property(readonly, nonatomic) FCHeadlineThumbnail *thumbnail; // @synthesize thumbnail=_thumbnail;
@property(readonly, nonatomic) FCHeadlineThumbnail *thumbnailLQ; // @synthesize thumbnailLQ=_thumbnailLQ;
@property(readonly, nonatomic) struct CGSize largestThumbnailSize; // @synthesize largestThumbnailSize=_largestThumbnailSize;
@property(readonly, nonatomic) _Bool hasThumbnail; // @synthesize hasThumbnail=_hasThumbnail;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (long long)feedInboxElementType;
@property(readonly, copy, nonatomic) NSString *versionIdentifier;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)contentManifestWithContext:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
