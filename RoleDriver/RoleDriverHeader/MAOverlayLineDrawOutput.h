//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MAOverlayCommonDrawOutput.h"

@class NSArray;

@interface MAOverlayLineDrawOutput : MAOverlayCommonDrawOutput
{
    vector_aac46ba0 *_clippedPolylines;
    vector_0ca85528 *_drawableVector;
    vector_3729920e *_gradientDrawableVector;
    NSArray *_normalizedColorArr;
    NSArray *_normalizedTextureArr;
    NSArray *_reducedDrawStyleIndexArr;
    NSArray *_clippedDrawStyleIndexArr;
    NSArray *_clippedColorArr;
    NSArray *_clippedTextureArr;
}

@property(retain, nonatomic) NSArray *clippedTextureArr; // @synthesize clippedTextureArr=_clippedTextureArr;
@property(retain, nonatomic) NSArray *clippedColorArr; // @synthesize clippedColorArr=_clippedColorArr;
@property(retain, nonatomic) NSArray *clippedDrawStyleIndexArr; // @synthesize clippedDrawStyleIndexArr=_clippedDrawStyleIndexArr;
@property(retain, nonatomic) NSArray *reducedDrawStyleIndexArr; // @synthesize reducedDrawStyleIndexArr=_reducedDrawStyleIndexArr;
@property(retain, nonatomic) NSArray *normalizedTextureArr; // @synthesize normalizedTextureArr=_normalizedTextureArr;
@property(retain, nonatomic) NSArray *normalizedColorArr; // @synthesize normalizedColorArr=_normalizedColorArr;
@property(nonatomic) vector_3729920e *gradientDrawableVector; // @synthesize gradientDrawableVector=_gradientDrawableVector;
@property(nonatomic) vector_0ca85528 *drawableVector; // @synthesize drawableVector=_drawableVector;
@property(nonatomic) vector_aac46ba0 *clippedPolylines; // @synthesize clippedPolylines=_clippedPolylines;
- (void).cxx_destruct;
- (void)dealloc;
- (id)init;

@end

