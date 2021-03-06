//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class FLAnimatedImage, NSURL, UIImage, UIImageView;

@interface SFPhoto : NSObject
{
    _Bool _finished;
    _Bool _isZooming;
    NSURL *_url;
    UIImageView *_sourceImageView;
    UIImage *_image;
    FLAnimatedImage *_animatedImage;
    UIImage *_placeholderImage;
    struct CGRect _sourceFrame;
    struct CGRect _zoomRect;
}

@property(nonatomic) struct CGRect zoomRect; // @synthesize zoomRect=_zoomRect;
@property(nonatomic) _Bool isZooming; // @synthesize isZooming=_isZooming;
@property(nonatomic) _Bool finished; // @synthesize finished=_finished;
@property(retain, nonatomic) UIImage *placeholderImage; // @synthesize placeholderImage=_placeholderImage;
@property(retain, nonatomic) FLAnimatedImage *animatedImage; // @synthesize animatedImage=_animatedImage;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(nonatomic) struct CGRect sourceFrame; // @synthesize sourceFrame=_sourceFrame;
@property(retain, nonatomic) UIImageView *sourceImageView; // @synthesize sourceImageView=_sourceImageView;
@property(retain, nonatomic) NSURL *url; // @synthesize url=_url;
- (void).cxx_destruct;

@end

