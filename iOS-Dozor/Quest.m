//
//  Quest.m
//  iOS-Dozor
//
//  Created by Anton Zubarev on 31.10.12.
//  Copyright (c) 2012 izub.anton@gmail.com. All rights reserved.
//

#import "Quest.h"

@implementation Quest


-(int)level{
    return level;
}
-(void)setLevel:(int)_level{
    level=_level;
}

-(int)timer{
    return timer;
}
-(void)setTimer:(int)_timer{
    timer=_timer;
}

-(NSArray*)codes{
    return codes;
}
-(void)setCodes:(NSArray*)_codes{
    codes=_codes;
}

-(NSString*)quiz{
    return quiz;
}
-(void)setQuiz:(NSString*)_quiz{
    quiz=_quiz;
}

-(NSString*)hint{
    return hint;
}
-(void)setHint:(NSString*)_hint{
    hint=_hint;
}

-(NSString*)status{
    if (status) {
        return @"solved";
    }
    else{
        return @"open";
    }
}
-(void)setStatus:(BOOL)_status{
    status=_status;
}

-(int)ID{
    return ID;
}

-(void)setID:(int)_ID{
    ID=_ID;
}


@end
