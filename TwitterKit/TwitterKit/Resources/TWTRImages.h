/*
 * Copyright (C) 2017 Twitter, Inc.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 */

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface TWTRImages : NSObject

+ (UIImage *)likeOn;
+ (UIImage *)likeOff;
+ (UIImage *)likeImageSheet;

+ (UIImage *)likeOnLarge;
+ (UIImage *)likeOffLarge;
+ (UIImage *)likeImageSheetLarge;

+ (UIImage *)shareImage;
+ (UIImage *)shareImageLarge;

+ (UIImage *)playIcon;

+ (UIImage *)lightRetweet;
+ (UIImage *)darkRetweet;
+ (UIImage *)retweetImageForBackgroundColor:(UIColor *)backgroundColor;

+ (UIImage *)verifiedIcon;
+ (UIImage *)closeButtonTemplateImage;

+ (UIImage *)buttonImageWithCornerRadius:(CGFloat)radius backgroundColor:(UIColor *)backgroundColor;
+ (UIImage *)buttonImageWithCornerRadius:(CGFloat)radius backgroundColor:(UIColor *)backgroundColor borderColor:(nullable UIColor *)borderColor;

+ (NSString *)resourcePathForImageName:(NSString *)imageName;

/// Video player icons
+ (UIImage *)mediaPauseTemplateImage;
+ (UIImage *)mediaPlayTemplateImage;
+ (UIImage *)mediaReplayTemplateImage;
+ (UIImage *)mediaExpandTemplateImage;
+ (UIImage *)mediaScrubberThumb;
+ (UIImage *)vineBadgeImage;

@end

NS_ASSUME_NONNULL_END