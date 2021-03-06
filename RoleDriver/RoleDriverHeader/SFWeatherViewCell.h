//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class NSString, UIImageView, UILabel, UIView;

@interface SFWeatherViewCell : UICollectionViewCell
{
    UIView *_weatherView;
    UIImageView *_btnBackImageView;
    UIImageView *_imageView;
    UILabel *_weatherLabel;
    NSString *_weatherName;
    NSString *_weatherImage;
    NSString *_weatherSelectImage;
}

@property(retain, nonatomic) NSString *weatherSelectImage; // @synthesize weatherSelectImage=_weatherSelectImage;
@property(retain, nonatomic) NSString *weatherImage; // @synthesize weatherImage=_weatherImage;
@property(retain, nonatomic) NSString *weatherName; // @synthesize weatherName=_weatherName;
- (void).cxx_destruct;
- (void)configWithIsSelect:(_Bool)arg1;
- (void)stepUI;
- (id)initWithFrame:(struct CGRect)arg1;

@end

