//
//  Quest.h
//  iOS-Dozor
//
//  Created by Anton Zubarev on 31.10.12.
//  Copyright (c) 2012 izub.anton@gmail.com. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Quest : NSObject{
    
    int ID;
    int level;
    int timer;
    NSArray *codes;
    NSString *quiz;
    NSString *hint;
    BOOL status;
}

-(int)ID;
-(void)setID:(int)ID;

-(int)level;
-(void)setLevel:(int)level;

-(int)timer;
-(void)setTimer:(int)timer;

-(NSArray*)codes;
-(void)setCodes:(NSArray*)codes;

-(NSString*)quiz;
-(void)setQuiz:(NSString*)quiz;

-(NSString*)hint;
-(void)setHint:(NSString*)hint;

-(NSString*)status;
-(void)setStatus:(BOOL)status;


@end
