//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class NSMutableArray, UIImageView;

@interface SFEnterInformationVController : UIViewController
{
    UIImageView *_idCardOfFront;
    UIImageView *_idCardOfContrary;
    NSMutableArray *_imageArr;
}

@property(retain, nonatomic) NSMutableArray *imageArr; // @synthesize imageArr=_imageArr;
@property(retain, nonatomic) UIImageView *idCardOfContrary; // @synthesize idCardOfContrary=_idCardOfContrary;
@property(retain, nonatomic) UIImageView *idCardOfFront; // @synthesize idCardOfFront=_idCardOfFront;
- (void).cxx_destruct;
- (void)didReceiveMemoryWarning;
- (void)nextPage;
- (void)contraryAction:(id)arg1;
- (void)deleteBImage:(id)arg1;
- (void)frontAction:(id)arg1;
- (void)deleteAImage:(id)arg1;
- (void)cancle;
- (void)createUI;
- (void)viewDidLoad;

@end

