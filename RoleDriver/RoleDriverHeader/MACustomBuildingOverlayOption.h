//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MAMultiPoint.h"

@class UIColor;

@interface MACustomBuildingOverlayOption : MAMultiPoint
{
    struct BuildingOptions *_commonOption;
    _Bool _visibile;
    double _height;
    double _heightScale;
    UIColor *_topColor;
    UIColor *_sideColor;
}

+ (id)optionWithCoordinates:(struct CLLocationCoordinate2D *)arg1 count:(unsigned long long)arg2;
@property(nonatomic) _Bool visibile; // @synthesize visibile=_visibile;
@property(retain, nonatomic) UIColor *sideColor; // @synthesize sideColor=_sideColor;
@property(retain, nonatomic) UIColor *topColor; // @synthesize topColor=_topColor;
@property(nonatomic) double heightScale; // @synthesize heightScale=_heightScale;
@property(nonatomic) double height; // @synthesize height=_height;
- (void).cxx_destruct;
- (void)updateCommonOptionProperties;
- (void)updateCommonOptionBounds;
- (void)postUpdateNotification;
- (struct BuildingOptions *)getCommonOption;
- (_Bool)setOptionWithCoordinates:(struct CLLocationCoordinate2D *)arg1 count:(unsigned long long)arg2;
- (void)dealloc;
- (id)initWithCoordinates:(struct CLLocationCoordinate2D *)arg1 count:(unsigned long long)arg2;

@end

