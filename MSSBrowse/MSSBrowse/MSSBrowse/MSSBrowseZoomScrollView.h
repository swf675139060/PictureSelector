//
//  MSSBrowseZoomScrollView.h
//  MSSBrowse
//
//  Created by 申文峰 on 15/12/5.
//  Copyright © 2015年 申文峰. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef void(^MSSBrowseZoomScrollViewTapBlock)(void);

@interface MSSBrowseZoomScrollView : UIScrollView<UIScrollViewDelegate>

@property (nonatomic,strong)UIImageView *zoomImageView;

- (void)tapClick:(MSSBrowseZoomScrollViewTapBlock)tapBlock;

@end
